/*
    (n = 1)
    1

    (n = 2)
    1   3
    2   4

    (n = 3)
    1   3   4
    2   5   8
    6   7   9

    (n = 4)
    1   3   4  10
    2   5   9  11
    6   8  12  15
    7  13  14  16

    (n = 5)
    1   3   4  10  11
    2   5   9  12  19
    6   8  13  18  20
    7  14  17  21  24
    15 16  22  23  25
*/

#include <stdio.h>
#define magicNum 9                 // diff bw sum of index of elements at diagonals
#define nextCol 1
#define nextRow 10

int units(int num){                // ie the 1st digit from right (units place)
    return (num % 10);
}
int tens(int num){                 // ie the 2nd digit from right (tens place)
    return ((num / 10) % 10);
}
int alrVisited(int visited[], int n, int index){
    for (int i = 0; i < (n * n); i++){
        if (visited[i] == index){
            return 1;
        }
    }
    return 0;
}
int reachedEdge(int n, int index){
    return (((tens(index) == 0) || (tens(index) == (n - 1)) || (units(index) == 0) || (units(index) == (n - 1)))? 1 : 0);
}
int reachedHorizontalEdge(int n, int index){
    return (((tens(index) == 0) || (tens(index) == (n - 1)))? 1 : 0);
}
int reachedVerticalEdge(int n, int index){
    return (((units(index) == 0) || (units(index) == (n - 1)))? 1 : 0);
}

void patternize(int n){
    // declaring
    int i, j;
    int visited[n * n], p[n][n];

    // initializing
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            p[i][j] = 0;
        }
    }
    for (i = 0; i < (n * n); i++){
        visited[i] = -1;
    }

    // patternizing
    p[0][0] = 1;                              // first element
    p[n - 1][n - 1] = (n * n);                // last element

    int top = 0, num = 2, curr = 10;
    while (num < (n * n)){                    // while (num < n^2)
        printf("%02d ->  ", curr);
        visited[top] = curr;
        top++;
        
        p[tens(curr)][units(curr)] = num;
        num++;

        /*
        if (reachedHorizontalEdge(n, curr) && (units(curr + nextCol) < n)){
            curr += nextCol;
        }
        else if (reachedVerticalEdge(n, curr) && (tens(curr + nextRow) < n)){
            curr += nextRow;
        }
        else 
        */
        if (((curr + magicNum) > 0) && (tens(curr + magicNum) < n) && (units(curr + magicNum) < n) && (!alrVisited(visited, n, (curr + magicNum)))){            // curr + magicNum
            curr += magicNum;
        }
        else if (((curr - magicNum) > 0) && (tens(curr - magicNum) < n) && (units(curr - magicNum) < n)  && (!alrVisited(visited, n, (curr - magicNum)))){       // curr - magicNum
            curr -= magicNum;
        }
        else if (tens(curr + nextRow) < n){
            curr += nextRow;
        }
        else{                                // (units(curr + nextCol) < n)
            curr += nextCol;
        }
    }

    // printing
    printf("\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("  %4d", p[i][j]);
        }
        printf("\n");
    }
}

int main(){
    patternize(4); 

    //int n = 43;
    //printf("%d %d", tens(n), units(n));

    //int n = ;
    //printf("%d", reachedEdge(4, n));
}