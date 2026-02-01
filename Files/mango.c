/*
    Input:  the the the cat cat is is 
    Output: the3 cat2 is2 
*/

// 1650

#include <stdio.h>
#include <string.h>

void blah(char* str, int start, int index){
    if (str[index] == '\0'){
        return;
    }
    else{
        if (str[index] != ' '){
            blah(str, start, index + 1);
        }
        else{
            int count = 1;
            for (int i = index + 1; str[i] != '\0'; i++){
                if (str[i] == str[start] && )
            }

            blah(str, index + 1, index + 2);
        }
    }
}


int main(){
    char str[] = "the the the cat cat is is";
    
    blah(str, 0, 0);
    printf(str);
}