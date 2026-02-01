#include <stdio.h>

void decodeStr(char* str, int index, int digit){
    if (str[index] == '\0'){ return; }
    else if (digit == 0){
        decodeStr(str, index + 1, str[index] - '0');
    }
    else{
        printf("%c", str[index]);
        if (digit ){
            decodeStr(str, index + 1, 0);
        }
        else{
            decodeStr(str, index, digit - 1);
        }
    }
}

int main(){
    char str[] = "2a3b2c";
    decodeStr(str, 0, 0);
}