/*
Compare the performances of linear search and binary search for Best case, Average case and
Worst case inputs.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int num[1000];

void descending_order(int n){
    for(int i=0;i<n;i++){
        num[i]=n-i;
    }
}

int linear_search(int n,int x){
    for(int i=0;i<n;i++){
        if(num[i]==x)
            return i;
    }
    return -1;
}
int binary_search(int n,int x){
    int low = 0;
    int high = n - 1;
    while(low<=high){
        int mid=(low+high)/2;
        
        if(num[mid]==x)
            return mid;
        else if(num[mid]>x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;    
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i;j<n;j++)
            if(arr[j]<arr[min_index])
                min_index=j;
        
        if(i!=min_index)
            swap(&arr[i],&arr[min_index]);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    clock_t t;
    double time;

    descending_order(n);
    // printArray(num,n);
    t = clock();
    int i = linear_search(n,num[n - 1]);
    printf("%d found at %d\n",num[n - 1],i);
    t = clock() - t;
    time = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time took by linear search : %f seconds\n\n", time);

    selectionSort(num,n);
    t = clock();
    i = binary_search(n,num[0]);
    printf("%d found at %d\n",num[0],i);
    t = clock() - t;
    time = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time took by binary search : %f seconds\n", time);


}
/*
BEST CASE
Enter a number : 100
83 found at 0
Time took by linear search : 0.000011 seconds

56 found at 50
Time took by binary search : 0.000006 seconds

Enter a number : 200
183 found at 0
Time took by linear search : 0.000014 seconds

105 found at 99
Time took by binary search : 0.000008 seconds

Enter a number : 300
283 found at 0
Time took by linear search : 0.000014 seconds

162 found at 150
Time took by binary search : 0.000010 seconds

Enter a number : 400
183 found at 0
Time took by linear search : 0.000015 seconds

186 found at 199
Time took by binary search : 0.000010 seconds

Enter a number : 500
383 found at 0
Time took by linear search : 0.000016 seconds

271 found at 250
Time took by binary search : 0.000011 seconds
*/

/*
WORST CASE
Enter a number : 100
1 found at 99
Time took by linear search : 0.000013 seconds

1 found at 0
Time took by binary search : 0.000005 seconds

Enter a number : 200
1 found at 199
Time took by linear search : 0.000015 seconds

1 found at 0
Time took by binary search : 0.000007 seconds

Enter a number : 300
1 found at 299
Time took by linear search : 0.000016 seconds

1 found at 0
Time took by binary search : 0.000008 seconds

Enter a number : 400
1 found at 399
Time took by linear search : 0.000015 seconds

1 found at 0
Time took by binary search : 0.000009 seconds


Enter a number : 500
1 found at 499
Time took by linear search : 0.000015 seconds

1 found at 0
Time took by binary search : 0.000010 seconds
*/