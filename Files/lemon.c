#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenateStrings(char* str1, char* str2) {
    if (!str1 || !str2) {
        return NULL;
    }
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // Allocate memory for conc string (len1 + len2 + 1 for null terminator)
    char* result = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    if (!result) {
        printf("Memory allocation failed for concatenation!\n");
        return NULL;
    }
    
    // Copy first string
    strcpy(result, str1);
    // Concatenate second string
    strcat(result, str2);
    
    return result;
}

int main() {
    char *str1 = NULL, *str2 = NULL, *conc = NULL;
    char temp[1000];
        
    while (1){
        printf("Enter first string (or 'Q' to quit): ");
        scanf("%[^\n]", temp);
        
        if (strcmp(temp, "Q") == 0 || strcmp(temp, "q") == 0) {
            printf("\nExiting program...\n");
            break;
        }
        
        str1 = (char*)malloc((strlen(temp) + 1) * sizeof(char));
        if (!str1) {
            printf("Memory allocation failed for first string!\n");
            break;
        }
        strcpy(str1, temp);
        
        printf("Enter second string: ");
        scanf("%[^\n]s", temp);
        
        str2 = (char*)malloc((strlen(temp) + 1) * sizeof(char));
        if (!str2) {
            printf("Memory allocation failed for second string!\n");
            free(str1);
            break;
        }
        strcpy(str2, temp);
        
        if (!conc){
            conc = concatenateStrings(str1, str2);
            if (!conc) {
                free(str1);
                free(str2);
                break;
            }
        } 
        else{
            char* tempConc = concatenateStrings(conc, str1);
            if (!tempConc) {
                free(str1);
                free(str2);
                free(conc);
                break;
            }
            free(conc);
            
            conc = concatenateStrings(tempConc, str2);
            if (!conc) {
                free(str1);
                free(str2);
                free(tempConc);
                break;
            }
            free(tempConc);
        }
        
        printf("\n[ Results ]\n");
        printf("First string:  %s\n", str1);
        printf("Second string: %s\n", str2);
        printf("Concatenated:  %s\n\n", conc);
        
        free(str1);
        free(str2);
        str1 = NULL;
        str2 = NULL;
    }
    
    free(conc);
}