#include <stdio.h>
#include <string.h>

// -------------------------------------------------------------------------------------

int factorial(int n){
    if (n <= 1){ return 1; }
    else{ return (n * factorial(n - 1)); }
}

void printFactorial(int n){
    if (n <= 1){ printf("1"); }
    else{
        printf("%d * ", n);
        printFactorial(n - 1);
    }
}

int fibonacci(int nth){                 // 0 1 1 2 3 5 8 13
    if (nth == 1){ return 0; }          // 1st term
    else if (nth == 2){ return 1; }     // 2nd term
    else{ return (fibonacci(nth - 1) + fibonacci(nth - 2)); }
}

void printFibonacci(int nth){
    if (nth == 1){ printf("0"); }
    else if (nth == 2){ printf("1 0"); }
    else{
        printf("%d ", fibonacci(nth));
        printFibonacci(nth - 1);
    }
}

int power(int num, int exp){
    if (exp == 0){ return 1; }
    else{ return num * power(num, (exp - 1)); }
}

void decodeStr(char str[], int len, int decoded){
    if (len == decoded){ return; }
    else{
        printf("%c", str[len - 1 - decoded]);
        decodeStr(str, len, decoded + 1);
    }
}

char* recursiveConcat(char* dest, int destLen, char* src, int count){
    if (src[count] == '\0'){ 
        dest[destLen + count] = '\0';
        return dest;
    }
    else{
        dest[destLen + count] = src[count];
        recursiveConcat(dest, destLen, src, count + 1);
    }
}

int intArraySum(int* array, int length, int index, int sum){
    if (index == length){
        return sum;
    }
    else{
        sum += array[index];
        intArraySum(array, length, index + 1, sum);
    }
}

int sumOfDigits(int num, int count, char* buffer, int sum){
    sprintf(buffer, "%d", num);

    if (buffer[count] == '\0'){
        return sum;
    }
    else{
        sum += (buffer[count] - '0');
        sumOfDigits(num, count + 1, buffer, sum);
    }
}

int sumOfDigts_s(char* num, int len, int sum, int index){
    if (num[index] == '\0'){
        return sum;
    }
    else{
        sum += (num[index] - '0');
        sumOfDigts_s(num, len, sum, index + 1);
    }
}

int isPalindrome(char* str, int strLen, int index){
    if (index >= strLen/2){
        return 1;
    }
    else if (str[index] == str[strLen - 1 - index]){
        isPalindrome(str, strLen, index + 1);
    }
    else{
        return 0;       // not palindrome
    }
}
void reversePrintString(char* str, int strLen, int index){
    if (str[index] == '\0'){
        return;
    }
    else{
        printf("%c", str[strLen - 1 - index]);
        reversePrintString(str, strLen, index + 1);
    }
}
int countVowels(char* str, int strLen, int index, int vowels){
    if (str[index] == '\0'){
        return vowels;
    }
    else{
        if (str[index] == 'a' | str[index] == 'A' | str[index] == 'e' | str[index] == 'E' | str[index] == 'i' | str[index] == 'I' | str[index] == 'o' | str[index] == 'O' | str[index] == 'u' | str[index] == 'U'){
            vowels++;
        }
        countVowels(str, strLen, index + 1, vowels);
    }
}

// -------------------------------------------------------------------------------------


int main()
{
    // printf("%d", factorial(5));
    // printFactorial(5);
    // printf("%d", fibonacci(7));
    // printFibonacci(7);

    //char saad[13] = "SAAd";
    //printf("%s", recursiveConcat(saad, strlen(saad), " boi!", 0));

    //reversePrintString("Meow! :)", 8, 0);

    //printf("%d", countVowels("Hakuna :)", 9, 0, 0));

    char str[] = "1.m1m2o2m1m.1";
    printf("%s", (isPalindrome(str, strlen(str), 0))? "Yes :>" : "No :<");

    //decodeStr("[meow! :)]", 10, 0);
    //printf("\n");
    //reversePrintString("[meow! :)]", 10, 0);

    //int arr[5] = {1, 2, 3, 4, 5};
    //printf("%d", intArraySum(arr, 5, 0, 0));

    //printf("%d", sumOfDigts_s("56789", 5, 0, 0));
}
