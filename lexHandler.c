#include <stdio.h>
#include <stdlib.h>

#include "scanner.h"
#include "lexHandler.h"
#include "tkList.h"

static unsigned int linec=0;

void fileTokenizer(const char* filename) {
	FILE* in=fopen(filename,"r");

	if (!in) {
		fprintf(stderr, "MONGe error: Can\'t open input file\n");
		exit(1);
	}

	emptyList(gList());

	yyin=in;
	yylex();
	
	printList(gList());
}

void blank(const char* t) {
	int i;

	for (i=0; t[i]!='\0'; i++)
		if (t[i]=='\n') linec++;
}

void nestedComment() {
	fprintf(stderr, "MONGe error:%d: MONGA 07 does not allow nested	comments\n", linec);
	exit(1);
}

void invalidChar(const char* c) {
	fprintf(stderr, "MONGe error:%d: Stray \'%s\' in the programme\n", linec, c);
	exit(1);
}

void addToken(const char* type, const char* content) {
	addNode(gList(), type, content);
} 
