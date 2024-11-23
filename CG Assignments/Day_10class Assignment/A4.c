#include <stdio.h>

// reverse//
void reverse_subarray(int arr[], int start, int end) 
{
    while (start<end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// reverse wd size 'k'//
void rotate_every_kth_element(int arr[],int n,int k) 
{
    
    for (int i=0;i<n;i+=k) 
    {
        reverse_subarray(arr,i,(i+k-1< n) ? (i+k-1) : (n - 1));
    }
}

// array//
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// rotate//
void array_rotation(int arr[], int n, int k) {
    printf("Given Array: ");
    print_array(arr, n);  
    rotate_every_kth_element(arr, n, k);  
    printf("Rotated Array: ");
    print_array(arr, n);  
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};  
    int n = sizeof(arr) / sizeof(arr[0]);     
    int k = 3;  
    
    array_rotation(arr, n, k);  

    return 0;
}
OUTPUT:
/tmp/qfDOr2ZJsL.o
Given Array: 1 2 3 4 5 6 7 8 9 
Rotated Array: 3 2 1 6 5 4 9 8 7 




