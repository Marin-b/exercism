#include "grains.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


unsigned long square(int n){
    if (n>64 || n==0){
        return 0;
    }
    int i=0;
    unsigned long result = 1;
    if (n>1){
        for (i=0; i<n-1; i++){
            result = result * 2;
        }
    }
    return result;
}

unsigned long long total(){
    unsigned long long result = 18446744073709551615;
    return result;

}
