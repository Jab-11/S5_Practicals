/*
Implement program to solve LCS (Longest Common Subsequence) problem using dynamic
programing.*/
#include <stdio.h>

int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}
void find_LCS(int n1,int n2,char s1[],char s2[],char D[n1+1][n2+1]){
    int n = min(n1,n2);

    char ans[n];
    ans[0] ='\0';
    int i=n1,j=n2;
    int k=n-1;
    while(D[i][j]!='0'){
        if(D[i][j]=='d'){
            ans[k]=s1[i-1];
            k--;
            i--;
            j--;
        }
        else if(D[i][j]=='u'){
            i--;
        }
        else if(D[i][j]=='l'){
            j--;
        }
    }
    printf("LCS: ");
    for(int i=k+1;i<n;i++){
        printf("%c",ans[i]);
    }
    printf("\n");
}

void main(){
    int n1;
    printf("Enter length of string 1: ");
    scanf("%d",&n1);

    int n2;
    printf("Enter length of string 2: ");
    scanf("%d",&n2);
    getchar();
    char s1[n1],s2[n2];
    int C[n1+1][n2+1];
    char D[n1+1][n2+1];
    // u - up, l - left, d - diagonal

    printf("Enter string1 : ");
    for(int i=0;i<n1;i++){
        scanf("%c",&s1[i]);
    }
    getchar();

    printf("Enter string2 : ");
    for(int i=0;i<n2;i++){
        scanf("%c",&s2[i]);   
    }


    for(int i=0;i<=n1;i++){
        C[i][0] = 0;
        D[i][0] = '0';
    }
     for(int i=0;i<=n2;i++){
        C[0][i] = 0;
        D[0][i] = '0';
    }
    
    // for(int i=0;i<n1;i++){
    //     printf("%c",s1[i]);
    // }
    // printf("\n");
    // for(int i=0;i<n2;i++){
    //     printf("%c",s2[i]);
    // }
    // printf("\n");

    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(s1[i-1]==s2[j-1]){
                C[i][j] = 1 + C[i-1][j-1];
                D[i][j] = 'd';
            }
            else{
                if(C[i-1][j] >= C[i][j-1]){
                    C[i][j] = C[i-1][j];
                    D[i][j] = 'u';
                }
                else{
                    C[i][j] = C[i][j-1];
                    D[i][j] = 'l';
                }
            }
        }
    }
    
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            printf("%c ",D[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    find_LCS(n1,n2,s1,s2,D);
}