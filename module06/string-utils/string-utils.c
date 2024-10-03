#include "string-utils.h"

/* mystrncpy - determine the length of a fixed-size string */
char *mystrncpy(char *dest, char *src, int maxlen) {
    int i;

    for (i = 0; i < maxlen && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for ( ; i < maxlen; i++) {
        dest[i] = '\0';
    }

    return dest;
}


/* mystrnlen - determine the length of a fixed-size string */
int mystrnlen(char *s, int maxlen) {
    int count = 0;
    int i;

    for(i = 0; i < maxlen && s[i] != '\0'; ++i) {
        count++;
    }
    return count;
}

/* mystrcat - concatenate two strings */
char *mystrcat(char *dest, char *src) {
    //char *newString;
    int i = mystrnlen(dest, MAX_LEN);
    int j = 0;

    //mystrncpy(newString, dest, MAX_LEN);

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    
    dest[i] = '\0';

    return dest;
}

/* mystrrev - reverse a string */
void strrev(char *s){

    int i = mystrnlen(s, MAX_LEN);
    int j;

    for (j = 0; j < i; ++j, --i) {
        char temp = s[j];
        s[j] = s[i - 1];
        s[i - 1] = temp;
    }
    
}

/* mystrcmp - compare two strings */
int mystrcmp(char *s1, char *s2) {
    return -1;
}

/* strpal - determine if a string is a palindrome */
int strpal(char *s) {
    return 0;
}