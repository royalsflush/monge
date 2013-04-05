#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lexHandler.h"

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
		exit(1);
	}
	
	fileTokenizer(filename);
	return 0;
}
