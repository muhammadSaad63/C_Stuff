#include <stdio.h>
#include <math.h>


void rectangle(int l, int b){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < b; j++){
            printf("*  ");
        }
        printf("\n");
    }
}
void hollowRectangle(int l, int b){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < b; j++){
            if (i == 0 || i == (l - 1) || j == 0 || j == (b - 1)){ printf("*  "); }
            else { printf("   "); }
        }
        printf("\n");
    }
}

void leftParallelogram(int l, int b){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < i; j++){        // space at start
            printf("   ");
        }
        for (int k = 0; k < b; k++){        // stars / shape itself
            printf("*  ");
        }
        printf("\n");
    }
}
void hollowLeftParallelogram(int l, int b){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < i; j++){        // space at start
            printf("   ");
        }
        for (int k = 0; k < b; k++){        // stars / shape itself
            if (i == 0 || i == (l - 1) || k == 0 || k == (b - 1)){ printf("*  "); }
            else { printf("   "); }
        }
        printf("\n");
    }
}
void rightParallelogram(int l, int b){
    for (int i = 0; i < l; i++){
        for (int j = i; j < (l - 1); j++){        // space at start
            printf("   ");
        }
        for (int k = 0; k < b; k++){        // stars / shape itself
            printf("*  ");
        }
        printf("\n");
    }
}
void hollowRightParallelogram(int l, int b){
    for (int i = 0; i < l; i++){
        for (int j = i; j < (l - 1); j++){        // space at start
            printf("   ");
        }
        for (int k = 0; k < b; k++){        // stars / shape itself
            if (i == 0 || i == (l - 1) || k == 0 || k == (b - 1)){ printf("*  "); }
            else { printf("   "); }
        }
        printf("\n");
    }
}

void leftTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            printf("*  ");
        }
        printf("\n");
    }
}
void hollowLeftTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if (j == 0 || j == i || i == (n - 1)){ printf("*  "); }
            else { printf("   "); }
        }
        printf("\n");
    }
}
void invertedleftTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = n; j > i; j--){
            printf("*  ");
        }
        printf("\n");
    }
}
void invertedHollowLeftTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = n; j > i; j--){
            if (i == 0 || i == (n - 1) || j == n || j == (i + 1)){ printf("*  "); }
            else { printf("   "); }
        }
        printf("\n");
    }
}

void rightTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = i; j < (n - 1); j++){
            printf("   ");
        }
        for (int k = 0; k <= i; k++){
            printf("*  ");
        }
        printf("\n");
    }
}
void hollowRightTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = i; j < (n - 1); j++){
            printf("   ");
        }
        for (int k = 0; k <= i; k++){
            if (k == 0 || k == i || i == (n - 1)){ printf("*  "); }
            else { printf("   "); }
        }
        printf("\n");
    }
}
void invertedrightTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            printf("   ");
        }
        for (int k = i; k < n; k++){
            printf("*  ");
        }
        printf("\n");
    }
}
void invertedHollowRightTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            printf("   ");
        }
        for (int k = i; k < n; k++){
            if (i == 0 || i == (n - 1) || k == i || k == (n - 1)){ printf("*  "); }
            else { printf("   "); }
        }
        printf("\n");
    }
}

void isoscelesTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = i; j < (n - 1); j++){
            printf("   ");
        }
        for (int k = 0; k <= i; k++){
            printf("*  ");
            if (k > 0){ printf("*  "); }        // alhamdulillah :D
        }
        printf("\n");
    }
}
void hollowIsoscelesTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = i; j < (n - 1); j++){
            printf("   ");
        }
        for (int k = 0; k <= i; k++){
            printf("%s", (k == 0 || i == 0 || i == (n - 1))? "*  " : "   ");            // this took long...
            if (k > 0){ printf("%s", (k == i || i == (n - 1))? "*  " : "   "); }        // alhamdulillah :D
        }
        printf("\n");
    }
}
void invertedIsoscelesTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            printf("   ");
        }
        for (int k = i; k < n; k++){
            printf("*  ");
            if (k != (n - 1)){ printf("*  "); }        // alhamdulillah :D
        }
        printf("\n");
    }
}
void invertedHollowIsoscelesTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            printf("   ");
        }
        for (int k = i; k < n; k++){
            if (i == 0){
                printf("*  ");
                if (k != 0){
                    printf("*  ");
                }
            }
            else if (k == i){               // tukka more than anythin else
                printf("*  ");
            }
            else if (k == (n - 1)){
                printf("   *");
            }
            else{
                printf("      ");
            }
        }
        printf("\n");
    }
}

void diamond(int n){
    // upper half
    for (int i = 0; i < n; i++){       
        printf("   ");         
        for (int j = i; j < (n - 1); j++){      // spaces
            printf("   ");
        }
        for (int j = 0; j <= i; j++){           // stars
            printf("*  ");
            if (j != 0){
                printf("*  ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < ((n * 2) + 1); i++){
        printf("*  ");
    }
    printf("\n");

    // lower half
    for (int i = 0; i < n; i++){      
        printf("   ");
        for (int j = 0; j < i; j++){            // spaces
            printf("   ");
        }
        for (int j = i; j < n; j++){
            printf("*  ");
            if (j != i){
                printf("*  ");
            }
        }
        printf("\n");
    }
}
void diamondV2(int n){
    // upper half
    for (int i = 0; i < n; i++){       
        printf("   ");         
        for (int j = i; j < (n - 1); j++){      // spaces
            printf("   ");
        }
        for (int j = 0; j <= i; j++){           // stars
            printf("*  ");
            if (j != 0){
                printf("*  ");
            }
        }
        printf("\n\n");
    }

    for (int i = 0; i < ((n * 2) + 1); i++){
        printf("*  ");
    }
    printf("\n\n");

    // lower half
    for (int i = 0; i < n; i++){      
        printf("   ");
        for (int j = 0; j < i; j++){            // spaces
            printf("   ");
        }
        for (int j = i; j < n; j++){
            printf("*  ");
            if (j != i){
                printf("*  ");
            }
        }
        printf("\n\n");
    }
}
void hollowDiamond(int n);


int main(){
    //rectangle(5, 10);
    //hollowRectangle(5, 10);

    //rightParallelogram(5, 10);
    //hollowRightParallelogram(5, 10);
    //leftParallelogram(5, 10);
    //hollowLeftParallelogram(5, 10);

    //leftTriangle(5);
    //hollowLeftTriangle(5);
    //invertedleftTriangle(5);
    //invertedHollowLeftTriangle(5);

    //rightTriangle(5);
    //hollowRightTriangle(5);
    //invertedrightTriangle(5);
    //invertedHollowRightTriangle(5);

    //isoscelesTriangle(5);
    //hollowIsoscelesTriangle(5);
    //invertedIsoscelesTriangle(5);
    //invertedHollowIsoscelesTriangle(5);

    //diamond(3);
    diamondV2(5);
}