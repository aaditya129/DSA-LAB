#include<stdio.h>
#include<stdlib.h>

    struct node  * f=NULL;
    struct node  * r=NULL;
struct node 
{
    int data;
    struct node *next;
};
void traversal(struct node * ptr)
{
    while (ptr!=NULL)
    {
       printf("Element: %d \n", ptr->data);
       ptr = ptr->next;
    }
    
}

void enqueue( int val){
    struct  node *n = (struct node *) malloc(sizeof(struct node));
    if(n==NULL)
    printf("Failed to queue");
    else
    {
        n->data = val;
        n->next=NULL;
        if(f==NULL)
        {
            f=r=n;
        }
        else
        {
            r->next =n;
            r=n;
        }
    }
}
 int dequeue(){
    int val=-1;
    struct  node *n ;
    struct node *ptr=f;
    if(f==NULL){
        printf("queue is empty");
    }
    else
    {
        f=f->next;
        val=ptr->data;
    }

    
}
int main(){
    enqueue(20);
    enqueue(4);
    enqueue(7);
    printf("the dequeued element: %d\n",dequeue());
    traversal(f);
    return 0;
}