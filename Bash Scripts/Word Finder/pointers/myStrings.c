#include "myStrings.h"

// Rewrite this so that only pointers are used, no array concepts.

/**
 * copy characters of src to dst (including '\0')
 * We assume tht the caller has sufficient space!
 */
void myStrCpy(char *dst, char *src){
	//int i=0;
	//while(src[i]!='\0'){
	//	dst[i]=src[i];
	//	i++;
	//}
	//dst[i]=src[i];
	//char *src_ptr = &src;
        //char *dst_ptr = &dst;
        while (*src != '\0') {
                *dst = *src;
                src++;
                dst++;
        };
        *dst = '\0';
}

/**
 * returns the length of string s
 * this is the number of non-null characters in s
 */
int myStrLen(char *s){
	//int len = 0;
	//while(s[len]!='\0')len++;
	//return(len);
	int len = 0;
        //char *s_ptr = &s;
        while (*s != '\0') {
                len++;
                s++;
        };
        return (len);
}

/**
 * returns whether s is the empty string
 */
int myisStrEmpty(char *s){
	//return s[0]=='\0';
	//char *s_ptr = &s;
	return *s == '\0';
}

/**
 * returns whether s1 is equal to s2
 */
int myisStrEQ(char *s1, char *s2){
	//int i=0;
	//while(s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0'){
	//	i++;
	//}
	//if(s1[i]=='\0' && s2[i]=='\0')return 1;
	//else return 0;
	//char *s1_ptr = &s1;
        //char *s2_ptr = &s2;
        while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
                s1++;
                s2++;
        };
        if (*s1 == '\0' && *s2 == '\0') {
                return 1;
        } else {
                return 0;
        };
}

