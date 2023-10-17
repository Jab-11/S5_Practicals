/*
Implement program to solve problem of making a change using dynamic programming.*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int* find_coin(int A, int C[][A + 1], int n, int d[]) {
    int* used_coin = (int*)malloc(n * sizeof(int));
    if (used_coin == NULL) {
        printf("Memory allocation failed.");
        return NULL;
    }

    int i = n, j = A;
    int k = 0;
    while (i > 0 && j > 0) {
        if (C[i][j] != C[i - 1][j]) {
            used_coin[k] = d[i - 1];
            k++;
            j -= d[i - 1];
        } else {
            i--;
        }
    }

    int* result = (int*)malloc(k * sizeof(int));
    if (result == NULL) {
        printf("Memory allocation failed.");
        free(used_coin);
        return NULL;
    }

    for (int m = 0; m < k; m++) {
        result[m] = used_coin[k - 1 - m];
    }

    free(used_coin);
    return result;
}
void main(){
    int n;
    printf("Enter number of denominations : ");
    scanf("%d",&n);


    int d[n];
    int A;
    
    printf("Denominations : ");
    for(int i=0;i<n;i++){
        scanf("%d",&d[i]);
    }
    printf("Enter Total Amount : ");
    scanf("%d",&A);

    int C[n+1][A+1];

    for(int i=0;i<=n;i++){
        C[i][0] = 0;
        C[0][i] = 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=A;j++){
            if(i==1 && j<d[i-1]){
                C[i][j] = INT_MAX;
            }
            else if(i==1){
                if (C[i][j - d[i - 1]] == INT_MAX) {
                    C[i][j] = INT_MAX;
                } else {
                    C[i][j] = 1 + C[i][j - d[i - 1]];
                }
            }
            else if(j<d[i-1]){
                C[i][j] = C[i-1][j];
            }
            else{
                C[i][j] = min(C[i-1][j], 1 + C[i][j-d[i-1]]);
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=A;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    int* ans = find_coin(A, C, n, d);
    if (ans != NULL) {
        printf("Used denominations: ");
        for (int i = 0; i < C[n][A]; i++) {
            printf("%d ", ans[i]);
        }
        free(ans);
    } else {
        printf("Failed to find used denominations.");
    }
    
    
}