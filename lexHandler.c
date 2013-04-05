#include <stdio.h>
#include <stdlib.h>

#include "scanner.h"
#include "lexHandler.h"
#include "tkList.h"

static unsigned int linec=0;
static unsigned int errc=0;

void fileTokenizer(const char* filename) {
	FILE* in=fopen(filename,"r");

	if (!in) {
		fprintf(stderr, "MONGe error: Can\'t open input file\n");
		exit(1);
	}

	emptyList(gList());
	linec=errc=0;

	yyin=in;
	yylex();

	if (!errc) 	
		printList(gList());
	else
		fprintf(stderr,"** MONGe compilation error\n");
}

void blank(const char* t) {
	int i;

	for (i=0; t[i]!='\0'; i++)
		if (t[i]=='\n') linec++;
}

void nestedComment() {
	fprintf(stderr, "MONGe error:%d: MONGA 07 does not allow nested	comments\n", linec);
	errc++;
}

void invalidChar(const char* c) {
	fprintf(stderr, "MONGe error:%d: Stray \'%s\' in the programme\n", linec, c);
	errc++;
}

void addToken(const char* type, const char* content) {
	addNode(gList(), type, content);
}

void notOpenedComment() {
	fprintf(stderr, "MONGe error:%d: Can\'t match end of comment\n", linec);	
	errc++;
}
