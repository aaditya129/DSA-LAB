#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue * ptr){
    if(ptr->f==ptr->r)
    return 1;
    else
    return 0;
}

void  enqueue( struct queue * ptr , int x){
    ptr->r=ptr->r+1;
    ptr->arr[ptr->r]=x;
}
int  dequeue( struct queue * ptr ){
    if(isEmpty(ptr))
    return -1;
    else
    {
    ptr->f=ptr->f+1;
    return (ptr->arr[ptr->f]);

    }
   
}



int main(){
    struct queue  q;
    q.size=10;
    q.f=q.r=-1;
    q.arr =(int *)malloc(q.size*sizeof(int));
    enqueue(&q,20);
    enqueue(&q,26);
    enqueue(&q,27);
    int val = dequeue(&q);
    int val2 = dequeue(&q);
    printf("The dequeued element is: %d \n",val);
    printf("The 2nd dequeued element is: %d",val2);
    return 0;
}