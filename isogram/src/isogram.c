#include <stdio.h>
#include "isogram.h"
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool is_isogram(const char *word) 
{   if (word =='\0'){
        return false;
}
    size_t len = strlen(word), i = 0, j = 0;
    for (i = 0; i + 1 < len; i++)
        for (j = i + 1; j < len; j++)
            if (isalpha(word[i]))
                if (tolower(word[i]) == tolower(word[j]))
                    return false;
    return true;
}
