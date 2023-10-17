/*
Implement functions to print nth Fibonacci number using iteration and recursive method. 
Compare the performance of two methods by counting number of steps executed on various inputs. 
Also, draw a comparative chart. (Fibonacci series 1, 1, 2, 3, 5, 8…. Here 8 is the 6th Fibonacci number)
*/
#include <stdio.h>
#include <time.h>

int fib_iter(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }
    int a = 1;
    int b = 1;
    int c;
    while(n>2){
        c = a + b;
        
        n--;
        a = b;
        b = c;
    }
    return c;    
}

int fib_rec(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        return fib_rec(n-1) + fib_rec(n-2);
    }

}

void main(){
    int n;
    clock_t t;
    double time;

    printf("Number : ");
    scanf("%d",&n);
    
    t = clock();
    printf("%dth Fib number (iter) : %d\n",n,fib_iter(n));
    t = clock() - t;
    time = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time took by iteration method : %f seconds\n\n", time);

    t = clock();
    printf("%dth Fib number (rec) : %d\n",n,fib_rec(n));
    t = clock() - t;
    time = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time took by recursion method : %f seconds\n\n", time);
}

/*
Number : 10
10th Fib number (iter) : 55
Time took by iteration method : 0.000017 seconds

10th Fib number (rec) : 55
Time took by recursion method : 0.000010 seconds*/

/*
Number : 20
20th Fib number (iter) : 6765
Time took by iteration method : 0.000021 seconds

20th Fib number (rec) : 6765
Time took by recursion method : 0.000056 seconds*/

/*
Number : 30
30th Fib number (iter) : 832040
Time took by iteration method : 0.000022 seconds

30th Fib number (rec) : 832040
Time took by recursion method : 0.003505 seconds*/

/*
Number : 40
40th Fib number (iter) : 102334155
Time took by iteration method : 0.000025 seconds

40th Fib number (rec) : 102334155
Time took by recursion method : 0.439965 seconds*/

/*
Number : 50
50th Fib number (iter) : -298632863
Time took by iteration method : 0.000029 seconds

50th Fib number (rec) : -298632863
Time took by recursion method : 54.616699 seconds*/