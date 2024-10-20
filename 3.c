#include<stdio.h>
int main(){

void kthSmallest(int arr[], int n, int k) {
    int temp;
     for(int i=0; i<n-1; i++)
    {
      for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
         {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
        }
    }
    printf("Kth smallest element in the array is : %d\nKth largest element in the array is : %d\n",arr[k-1], arr[n-k+1]);
}

int n;
printf("Enter the array size : ");
scanf("%d", &n);

int arr[n];
printf("Enter the %d elements\n", n);
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
printf("Enter the k value : ");
int k;
scanf("%d", &k);

kthSmallest(arr, n, k);

    return 0;
}