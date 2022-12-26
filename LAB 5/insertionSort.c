#include<stdio.h>

void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void insertionSort(int *A,int n)
{
    int key,j;
    for (int i = 1; i <= n-1; i++)
    {
       key=A[i];
       j=i-1;
       while (A[j]> key&& j>=0)
       {
        A[j+1]=A[j];
        j--;
       }
       A[j+1]=key;

    }
    
}

int main(){
    int A[]={22,67,45,34,2,65};
    int n=6;
    printarray(A,n);
    insertionSort(A,n);
    printarray(A,n);
    return 0;
}