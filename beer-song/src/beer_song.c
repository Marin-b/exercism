#include "beer_song.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

void verse(char *response, int n){
    strcpy(response,"%d bottles of beer on the wall, %d bottles of beer.\nTake one down and pass it around, %d bottles of beer on the wall.", n,n,n-1);
}

void sing(char *out, int start, int end){

}
