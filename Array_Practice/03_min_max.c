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

  
}