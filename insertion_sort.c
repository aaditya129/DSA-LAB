#include<stdio.h>

void insertion_sort(int arr[],int n)
{
    int i,j,temp;

    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;

        while(j>=0&&arr[j]>temp){

            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=temp;


    }
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);


    }
    printf("\n");
}

int main(){

    int arr[5];
     int n;

     printf("Enter how many items you want to insert");
     scanf("&d",&n);

   for(int i=0;i<n;i++){
    scanf("%d",arr[i]);
   }
  insertion_sort(arr,n);
  printarr(arr,n);

    return 0;

}