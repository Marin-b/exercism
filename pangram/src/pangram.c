#include "pangram.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool is_pangram(const char *str){
    if (str =='\0'){
        return false;
}
size_t len = strlen(str), i = 0, j = 0;
char *alph = malloc(len);
size_t pos = 0;
for (i = 0; i + 1 <= len; i++){
    size_t len_alph = strlen(alph);
    int count = 0;
    if (isalpha(str[i])){
        for (j = 0; j + 1 <= (len_alph); j++){
            if (tolower(str[i])==alph[j]){
                count +=1;
            }
        }
        if (count == 0){
            alph[pos]=tolower(str[i]);
            pos+=1;
        }
    }
}
printf("%s",alph);
if (pos==26){
    return true;
}
else{
    return false;
}
}
        
                
