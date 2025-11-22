#include <stdio.h>
#include <string.h>
#include "fun.h"

int main(void) {
    char str[80];
    printf("Enter a string (less than 80 letters): ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0; /* no input */
    }
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char rts[80];
    reverse(str, rts);
    printf("Reversed string: %s\n", rts);
    return 0;
}