/*
Implement program of chain matrix multiplication using dynamic programming.*/

#include <stdio.h>
#include <limits.h>

int min(int a,int b){
    if(a>b)
        return b;
    else
        return a;
}

void main(){
    int n;
    printf("No. of Matrix: ");
    scanf("%d",&n);

    int d[n+1];
    int C[n][n];
    int P[n][n];

    printf("Enter size of matrix\n");
    for(int i=0;i<n;i++){
        scanf("%d",&d[i]);
        C[i][i] = 0;
        P[i][i] = 0;
    }
    scanf("%d",&d[n]);

    for (int l = 2; l <= n; l++) {
        for (int i = 0; i <= n - l; i++) {
            int j = i + l - 1;
            C[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int x = C[i][k] + C[k + 1][j] + d[i] * d[k + 1] * d[j + 1];
                if (x < C[i][j]) {
                    C[i][j] = x;
                    P[i][j] = k + 1;
                }
            }
        }
    }

    printf("Minimum number of multiplications:\n");
    printf("%d\n", C[0][n - 1]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t\t",C[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t\t",P[i][j]);
        }
        printf("\n");
    }
    printf("\n");

      
}