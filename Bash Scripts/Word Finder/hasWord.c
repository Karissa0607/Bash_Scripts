#include <stdio.h>
#include <stdlib.h>
#include "myStrings.h"
#include "parseArgs.h"

/**
 * return whether word appears in open fpin
 */
int isWordInFile(char word[], int wordLen, FILE *fpin){

	// YOUR CODE GOES HERE
	char c;
	c = (char) fgetc(fpin);
	int i = 0;
	while (c != EOF) {
		if (*(word + i) == c) {
			i++;
		} else {
			i = 0;
		};
		if (i == wordLen) {
			return 0;
		};
		c = (char) fgetc(fpin);
	};
	return 1;
}


int main(int argc, char *argv[]) {
	FILE *fpin; 
	int retVal=parseArgs(argc, argv);

	// YOUR CODE GOES HERE
	if (retVal == 0) {
		//optionsError("incorrect number of arguments");
		return 127;
	} else if (retVal == 1) {
		int lenWord = 0;
		char **cp1;
		cp1 = argv;
		int k = 0;
		while (*(*(cp1 + iWord) + k) != '\0') {
			lenWord++;
			k++;
		};
		k = 0;
		char word[lenWord];
		char *wordptr = word;
                while (*(*(argv + iWord) + k) != '\0') {
			*wordptr = *(*(argv + iWord) + k);
			wordptr++;
			k++;
                };
		if (iFileName == -1) {
			char c = (char) fgetc(stdin);
			int i = 0;
			while (c != EOF) {
				if (*(word + i) == c) {
					i++;
				} else {
					i = 0;
				};
				if (i == lenWord) {
					return 0;
				};
				c = fgetc(stdin);
			};
			return 1;
		} else {
			int k = 0;
			int lenFileName = 0;
			char **cp2;
			cp2 = argv;
			while (*(*(cp2 + iFileName) + k) != '\0') {
                        	k++;
				lenFileName++;
                	};
			char fileName[lenFileName + 1];
			char *fileNameptr = fileName;
			k = 0;
			while (*(*(argv + iFileName) + k) != '\0') {
				*fileNameptr = *(*(argv + iFileName) + k);
				k++;
				fileNameptr++;
			};
			*fileNameptr = '\0';
			fpin = fopen(fileName, "r");
			if (fpin == NULL){
				perror("error");
				return 1;
			};
			int newRetVal = isWordInFile(word, lenWord, fpin);
			fclose(fpin);
			return newRetVal;
		};
	} else {
		// is usage message already displayed??
		return 0;
	}
}
