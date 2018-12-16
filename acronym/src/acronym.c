#include "acronym.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* abbreviate(const char *word){
    if (word =='\0'){
        return NULL;
}
    if (strcmp(word, "")==0){
        return NULL;
    }
    size_t len = strlen(word), i = 0, j = 0;
    char *acc = malloc(len);
    for (i = 0; i + 1 < len; i++){
        if (i == 0){
                acc[j] = toupper(word[i]);
                j+=1;
        }
        else if(word[i] == '-'){
            acc[j] = toupper(word[i+1]);
            j+=1;
        }
        else if(word[i] == ' ' ){
            acc[j] = toupper(word[i+1]);
            j+=1;
        }
    }
    return acc;
}
