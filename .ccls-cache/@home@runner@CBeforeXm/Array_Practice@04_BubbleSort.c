#include<stdio.h>
#include<limits.h>

int ArrayPrint(int *arr,int n){
  printf("The array is : \n");
  for(int i = 0; i<n; i++)
    printf("%d ",*arr++);
  printf("\n");
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
  
  sorting(arr,n);
  printf("Sorted:\n");
  ArrayPrint(arr,n);

}