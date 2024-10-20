#include<stdio.h>
int main(){

    int min(int arr[], int n){
        int min = 999;
        for(int i=0; i<n; i++){
            if(arr[i]<min)
                min=arr[i];
        }
        return min;
    }

    int max(int arr[], int n){
        int max = 0;
        for(int i=0; i<n; i++){
            if(arr[i]>max)
                max=arr[i];
        }
        return max;
    }

    int arr[] = {8, 5, 9, 7, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Min : %d\n",min(arr, n));
    printf("Max : %d\n",max(arr, n));

    return 0;
}