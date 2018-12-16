
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int word_count(const char *string){
    char words[100][256], temp[256];
    int i, j, k, n, count;
    i = j = k = n = 0;
   
    if (string =='\0'){
        return 0;
}
       while (string[i] != '\0') {
                if (string[i] == ' ') {
                        words[j][k] = '\0';
                        k = 0;
                        j++;
                } 
                else {
                        words[j][k++] = string[i];
                }
                i++;
        }

        words[j][k] = '\0';
        n = j;

        for (i = 0; i < n; i++) {
                strcpy(temp, words[i]);
                for (j = i + 1; j <= n; j++) {
                        if (strcmp(words[i], words[j]) > 0) {
                                strcpy(temp, words[j]);
                                strcpy(words[j], words[i]);
                                strcpy(words[i], temp);
                        }
                }
        }

        i = 0;

        while (i <= n) {
                count = 1;
                if (i != n) {
                    for (j = i + 1; j <= n; j++) {
                            if (strcmp(words[i], words[j]) == 0) {
                                    count++;
                                }
                        }
                }

                i = i + count;
                return i;
                
        }
        return 0;
}



