#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "scanner.h"

#define ERR_NO_INPUT 1
#define ERR_INPUT_CANT_BE_OPENED 2

void testFile(const char* filename) {
	FILE* in=fopen(filename,"r");

	if (!in) {
		fprintf(stderr, "MONGe error: Can\'t open input file\n");
		exit(ERR_INPUT_CANT_BE_OPENED);
	}

	yyin=in;
	yylex();
}

int main(int argc, char* argv[]) {
	char* filename=NULL;
	int i;

	for (i=1; i<argc; i++)
		if (argv[i][0]!='-') {
			filename=argv[i];
			break;
		}

	if (!filename) {
		fprintf(stderr, "MONGe error: no input file\n");
		return ERR_NO_INPUT;
	}
	
	testFile(filename);
	return 0;
}
