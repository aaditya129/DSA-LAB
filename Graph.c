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
    int node;
    int i=1;
    int visted[7]={0,0,0,0,0,0,0};
    int a [7][7]={
        {0,1,1,1,0,0,0},
        {1,0,0,1,0,0,0},
        {1,0,0,1,1,0,0},
        {0,1,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };
    printf("%d",i);
    visted[i]=1;
    enqueue(&q,i);
    while(!isEmpty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; j < 7; j++)
        {
            if(a[node][j]&& visted[j]==0)
            {
                printf("%d",j);
                visted[j]=1;
                enqueue(&q,j);
            }
        }
        
    }
    return 0;
}