#include<stdio.h>

void display( int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ",arr[i]);
    }
    
}
int insert(int arr[],int element,int size , int index)
{
    if(size>=10)
    {
        return -1;
    }
    for (int  i = size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
    
}

void deletion(int arr[],int size,int index)
{
    if(size==0)
    {
        printf("Array desnt have any element");
    }
    for (int i = index; i < size-1; i++)
    {
       arr[i]=arr[i+1];
    }
    
}

int main(){
    int arr[10]={0,1,2,3,4,5,6,};
    int size = 7, element=40, index=5,dindex=3;
    insert(arr,element,size,index);
    size+=1;
     deletion(arr,size,dindex);
     size=size-1;
     deletion(arr,size,2);
     size=size-1;
     display(arr,size);
     printf(" \n %d ",sizeof(arr)/sizeof(arr[0]));
    return 0;

}