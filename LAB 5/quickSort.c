#include<stdio.h>

void printArray(int *A,int n)
{
for (int i = 0; i < n; i++)
{
    printf("%d ",A[i]);
}
printf("\n");
}
int partition(int A[],int l, int h)
{
 int pivot = A[l];
 int i=l+1;
 int j=h;
 int temp;
 do
 {

 
 while (A[i]<=pivot)
 {
    i++;
 }
 while (A[j]>pivot)
 {
   j--;
 }
 if(i<j)
 {
    temp =A[i];
    A[i] = A[j];
    A[j] = temp;
 }
 
 } while (i<j);
   temp = A[l];
   A[l]=A[j];
    A[j]=temp;
    return j;
}

void quickSort(int A[],int l,int h)
{
int  partitionIndex;
if(l<h)
{

partitionIndex = partition(A,l,h);
quickSort(A,l,partitionIndex-1);
quickSort(A,partitionIndex+1,h);
}

}
int main (){
    int A[]={34,56,23,89,11,78};
    int n=6;
    printArray(A,n);
    quickSort(A,0,n-1);
    printArray(A,n);
    return 0;
}