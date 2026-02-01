#include <stdio.h>

void sumMatrices(int m, int n, int m1[m][n], int o, int p, int m2[o][p]){
    if ((m != o) || (n != p)){
        printf("\n[!] Summation not possible :(");
        return;
    }
    else{
        printf("\n[*] Summation possible :)\n");
    }

    printf("\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("  %5d", (m1[i][j] + m2[i][j]));
        }
        printf("\n");
    }
}
void multiplyMatrices(int m, int n, int m1[m][n], int o, int p, int m2[o][p]){
    if (n != o){
        printf("\n[!] Multiplication not possible :(");
        return;
    }
    else{
        printf("\n[*] Multiplication possible :)\n");
    }

    int res[m][p];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            res[i][j] = 0;
            for (int k = 0; k < n; k++){
                res[i][j] += (m1[i][k] * m2[k][j]);
            }
        }
    }

    printf("\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            printf("  %5d", res[i][j]);
        }
        printf("\n");
    }
}


int main(){
    printf("M1 - Enter (m x n): ");
    int m, n;
    scanf("%d %d", &m, &n);

    int m1[m][n];
    for (int i = 0; i < m; i++){
        printf("\t[%d]: ", i);
        for (int j = 0; j < n; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    printf("M2 - Enter (o x p): ");
    int o, p;
    scanf("%d %d", &o, &p);

    int m2[o][p];
    for (int i = 0; i < o; i++){
        printf("\t[%d]: ", i);
        for (int j = 0; j < p; j++){
            scanf("%d", &m2[i][j]);
        }
    }


    sumMatrices(m, n, m1, o, p, m2);
    multiplyMatrices(m, n, m1, o, p, m2);
}
