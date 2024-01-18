#include <stdio.h>
#include "myStrings.h"
#include "parseArgs.h"

int iWord=-1, iFileName=-1;

/**
 * print the usage message
 */
void usage(){

	// YOUR CODE GOES HERE
	printf("hasWord usage: \n");
	printf("./hasWord word #searches for word in stdin\n");
	printf("./hasWord word filename #searches for word in filename\n");
	printf("./hasWord --help #displays usage message\n");
}

/**
 * print error message to stderr
 */
void optionsError(char mesg[]){
	fprintf(stderr, "hasWord: %s\nTry 'hasWord --help' for more information.\n", mesg);
}

/**
 * parse and understand the args. 
 * returns 1 for success, 0 for error, 2 for --help printed
 * On success, iWord, iFileName are all properly initialized
 * iFileName == -1 indicates read from stdin
 */
int parseArgs(int argc, char *argv[]){
	if (argc == 0 || argc == 1) {
                optionsError("incorrect number of arguments");
                iWord = -1;
                iFileName = -1;
                return 0;
        };
	int b = 1;
	char s[] = "--help";
	for (int i = 0; i < argc; i++) {
		b = 1;
		int k = 0;
		while (*(*(argv + i) + k) != '\0') {
           		if (*(*(argv + i) + k) != *(s + k)) {
                		b = 0;
                		break;
           		};
           		k++;
        	};
		if (b) {
			break;
		};
	};
	if (b) {
		usage();
		iWord = -1;
		iFileName = -1;
		return 2;
	};
	// YOUR CODE GOES HERE
	if (argc == 2) {
		iWord = 1;
		return 1;
	} else if (argc == 3) {
		iWord = 1;
		iFileName = 2;
		return 1;
	} else {
		optionsError("incorrect number of arguments");
		iWord = -1;
		iFileName = -1;
		return 0;
	};
}
