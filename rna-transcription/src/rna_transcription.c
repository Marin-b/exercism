#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *to_rna(const char *dna){
    
    size_t len = strlen(dna), i = 0;
    char *rna = malloc(len + 1);
    memset(rna, 0, len + 1);
    for (i = 0; i <len; i++){
        //printf("%c \n",dna[i]);
        if(dna[i] == 'A'){
            rna[i]= 'U';
        }
        else if(dna[i] == 'C'){
            rna[i]= 'G';
        }    
        else if(dna[i] == 'G'){
            rna[i]='C';
        }    
        else if(dna[i] == 'T'){
            rna[i]='A';
        }
        
    }
    // printf("%s",rna);
    return rna;
}
