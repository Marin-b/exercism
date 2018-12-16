#include "nucleotide_count.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *count(const char *dna){
    char  *a = 0, *c = 0, *g =0, *t = 0;
    char *string = printf("A:%s, C:%s, G:%s, T:%s",a,c,g,t);
    if (dna == '\0'){
        return string;
    }
    size_t len = strlen(dna), i = 0;
    for (i = 0; i <len; i++){
        //printf(:%d \n",dna[i]);
        if(dna[i] == 'A'){
            a +=1 ;
        }
        else if(dna[i] == 'C'){
            c +=1;
        }    
        else if(dna[i] == 'G'){
            g+=1;
        }    
        else if(dna[i] == 'T'){
            t+=1;
        }
        
    }

    return string;
}
