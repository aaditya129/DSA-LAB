#include<stdio.h>

void linearsearch(int arr[],int size,int element){
 int n=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        {

        printf("Element found at index %d",i);
        n=1;
        }
    
    }
    if(n!=1)
    printf("No element found at index ");
    

}
int binarysearch(int arr[],int size,int element)
{
    int low=0;
    int high=size-1;
    int mid;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(mid==element)
        return mid;
        if(element>mid)
        {
            low=mid+1;

        }
        else
        high=mid-1;
    }
    return -1;
    
}

int main(){
    int arr[10]={0,1,2,3,4,5,6,};
    int size = 7,element=10;
    linearsearch(arr,size,element);
  int binaryint =   binarysearch(arr,size,22);
  if(binaryint==(-1))
  {
    printf(" \n No element found  ");

  }
  else
  printf( " \n Element was found at index %d", binaryint);
    return 0;
}