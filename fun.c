#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(const char* str, char* rts){
    size_t len = strlen(str);
    for(size_t i = 0; i < len; i++){
        rts[i] = str[len - 1 - i];
    }
}