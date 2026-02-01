#include <stdio.h>
#include <string.h>

void removeWord(char* str, char* word){
    char temp[strlen(str) + 1];
    int top = 0;

    for (int i = 0; i < strlen(str); i++){
        for (int j = 0; j < strlen(word); j++){
            if (str[i + j] != word[j]){
                for (int k = 0; k < j; k++){
                    temp[top] = str[i + k];
                    top++;
                }
                break;
            }
            if (j == (strlen(word) - 1)){
                i += (strlen(word) - 1);
            }
        }
    }

    strcpy(str, temp);
}

int main(){
    printf("Enter any string to remove a word from it: ");
    char str[135];
    scanf("%[^\n]", str);

    getchar();
    printf("Enter the word you want to remove: ");
    char word[35];
    scanf("%[^\n]", word);

    removeWord(str, word);
    printf("\nAfter removing the word from the string: %s", str);
}