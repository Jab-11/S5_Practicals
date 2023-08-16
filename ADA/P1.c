/*
Implement a function for each of following problems and count the number of steps
executed/time taken by each function on various inputs and write time complexity of
each function. Also draw a comparative chart of number of input versus steps executed/time taken. 
In each of the following function N will be passed by user.
1. To calculate sum of 1 to N numbers using loop.
2. To calculate sum of 1 to N numbers using equation.
3. To calculate sum of 1 to N numbers using recursion.
*/
#include <stdio.h>
#include <time.h>

int sum_loop(int n){
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i;
    return sum;
}
int sum_eq(int n){
    return (n*(n+1))/2;
}
int sum_rec(int n){
    if(n==1)
        return 1;
    else
        return n + sum_rec(n-1);
}

void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    clock_t t;

    t = clock();
    printf("Sum of 1 to N using loop:%d",sum_loop(n));
    t = clock() - t;
    double time_loop = ((double)t)/CLOCKS_PER_SEC; 

    t = clock();
    printf("Sum of 1 to N using equation:%d",sum_eq(n));
    t = clock() - t;
    double time_eq = ((double)t)/CLOCKS_PER_SEC;

    t = clock();
    printf("Sum of 1 to N using recursion:%d",sum_rec(n));
    t = clock() - t;
    double time_rec = ((double)t)/CLOCKS_PER_SEC;

    printf("Time took by loop : %f seconds\n", time_loop);
    printf("Time took by equation : %f seconds\n", time_eq);
    printf("Time took by recursion : %f seconds\n", time_rec);
}