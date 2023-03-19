#include<stdio.h>
#include<limits.h>

int ArrayPrint(int *arr,int n){
  printf("The array is : \n");
  for(int i = 0; i<n; i++)
    printf("%d ",*arr++);
  printf("\n");
}

int maxi(int arr[],int n){
  int maxiA = INT_MIN;
  for(int i = 0; i<n; i++){
    if(maxiA<arr[i]){
      maxiA = arr[i];
    }
  }
  return maxiA;
}

int mini(int arr[],int n){
  int miniA = INT_MAX;
  for(int i = 0; i<n; i++){
    if(miniA>arr[i]){
      miniA = arr[i];
    }
  }
  return miniA;
}

int sorting(int *arr, int n){
  for(int i = 1; i<=n-1; i++){
    for(int j = 1; j<=n-1; j++){
      if(*(arr+j-1)>=*(arr+j)){
        int temp = *(arr+j-1);
        *(arr+j-1) = *(arr+j);
        *(arr+j)=temp;
      }
    }
  }
}

int reverse(int arr[], int n){
  for(int i = 0; i< n/2;i++){
    int temp = *(arr+i);
    *(arr+i) = *(arr+n-1);
    *(arr+n-1) = temp;
  }
}

int main(){
  int n; 
  printf("Enter the size of the array :\n");
  scanf("%d",&n);

  int arr[n];
  printf("Enter the array: \n");
  for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }
  ArrayPrint(arr,n);
  
  int maxiA = maxi(arr,n);
  printf("The max value is : %d\n", maxiA);

  int miniA = mini(arr,n);
  printf("The min value is : %d\n", miniA);

  
  sorting(arr,n);
  printf("Sorted:\n");
  ArrayPrint(arr,n);

  reverse(arr,n);
  printf("Reversed:\n");
  ArrayPrint(arr,n);

  
}