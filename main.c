#include <stdio.h>
#include <string.h>
#include "fun.h"
int main() {
    char str[80];
    printf("Enter a string:(less than 80 letters) ");
    while(fgets(str, sizeof(str), stdin) != NULL){
        if (str[strlen(str) - 1] == '\n') {
            str[strlen(str) - 1] = '\0';
        }
    }
    char rts[80];
    reverse(str, rts);
    printf("Reversed string: %s\n", rts);
    return 0;
}