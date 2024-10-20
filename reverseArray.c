#include<stdio.h>
int main(){
    void reverse(int arr[],int n){

        int temp[n];

        for(int i=0; i<n; i++)
            temp[i] = arr[i];

        for(int i=0; i<n; i++)
            arr[i] = temp[n-1-i];

        for(int i=0; i<n; i++)
            printf("%d",arr[i]);

    }

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, n);
    return 0;
}