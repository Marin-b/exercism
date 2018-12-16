#include "hamming.h"
#include <string.h>

int compute(const char *dna1, const char *dna2){
    if (!dna1){
        if (!dna2){
            return 0;
        }
        else{
            return -1;
        }
    }
     if (!dna2){
        return -1;
    }

    size_t len1 = strlen(dna1);
    size_t len2 = strlen(dna2);
    size_t i = 0; 
    int count =0;
    if (len1 == len2){
        for (i = 0; i <= len1; i++){
            if (dna1[i] !=  dna2[i]){
                count+=1;
            }
        }
    }
    else {
        return -1;
    }
    return count;
}
