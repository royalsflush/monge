#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "tkList.h"

struct tkListNode {
	char* type;
	char* content;
	tkListNode* next;
};

tkListNode* createNode(const char* type, const char* content, tkListNode* next) {
	tkListNode* nn = malloc(sizeof(tkListNode));
	assert(nn!=NULL);	

	if (type) {
		nn->type=malloc(sizeof(char)*(strlen(type)+1));
		assert(nn->type!=NULL);
		strcpy(nn->type, type);
	}
	else
		nn->type=NULL;

	if (content) {
		nn->content=malloc(sizeof(char)*(strlen(content)+1));
		assert(nn->content!=NULL);
		strcpy(nn->content, content);
	}	
	else
		nn->content=NULL;

	nn->next=next;
	return nn;
}

void deleteNode(tkListNode* n) {
	free(n->type);
	free(n->content);
	free(n);
}

struct tkList {
	unsigned int sz;
	tkListNode* begin;
	tkListNode* end;
};

tkList* createList() {
	tkList* nl = malloc(sizeof(tkList));
	assert(nl!=NULL);

	nl->sz=0;
	nl->begin=nl->end=NULL;
	return nl;
}

void addNode(tkList* l, const char* type, const char* content) {
	tkListNode* nn = createNode(type, content, NULL);
	
	assert(l!=NULL);
	if (!l->end)
		l->begin=l->end=nn, l->sz++;
	else {
		l->end->next=nn;
		l->end=nn, l->sz++;
	}
}

int emptyList(tkList* l) {
	tkListNode* pt;
	assert(l!=NULL);

	if (!l->begin) {
		assert(l->end==NULL && l->sz==0);
		return 0;
	}
	
	pt=l->begin;
	while (pt) {
		tkListNode* tmp=pt;
		pt=pt->next;
		deleteNode(tmp);
	}

	return 1;	
}

void printList(tkList* l) {
	tkListNode* pt;
	assert(l!=NULL);
	pt=l->begin;

	while (pt) {
		assert(pt->type!=NULL);
		printf("type: %s", pt->type);

		if (pt->content)
			printf(" - content: %s", pt->content);
		printf("\n");
		
		pt=pt->next;
	}
}

static tkList* globList=NULL;

tkList* gList() {
	if (!globList)
		globList=createList();
	return globList;
}
