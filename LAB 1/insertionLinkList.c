#include<stdio.h>
#include<stdlib.h>


struct node 
{
    int data;
    struct node *next;
};
void linkListTraversal( struct node *ptr){
    while (ptr!=NULL)
    {
       
    printf("%d ",ptr->data);
    ptr=ptr->next;
    }
}

struct node * insertAtFirst(struct node *head,int data)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
    
}
struct node * insertAtIndex(struct node *head,int data,int index)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data=data;
    struct node * p = head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next = p->next;
    p->next=ptr;
    return head;

    
}
struct node * insertAtEnd(struct node *head,int data)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p= head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    
    p->next=ptr;
    ptr->next=NULL;
    return head;
    
}
struct node * insertAfter(struct node *head, struct node*prevnode, int data)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data=data;
    
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
}
struct node * deleteFIrst(struct node *head)
{
    struct node * ptr = head;
    head=head->next;
    free (ptr);
    return head;
    
}
struct node * deleteAtIndex(struct node *head, int index)
{
    int i=0;
   struct node * p = head;
   struct node *q= head->next;
    for(int i=0; i<index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
    
}
struct node * deleteAtLast(struct node *head)
{
    int i=0;
   struct node * p = head;
   struct node *q= head->next;
    while (q->next!=NULL)
    {
         p=p->next;
        q=q->next;
    }
    
        p->next=NULL;
    free(q);
    return head;
    
}


int main(){
     struct node *head;
    struct node *second;
    struct node *third;
    head =(struct node *) malloc(sizeof(struct node));
    second =(struct node *) malloc(sizeof(struct node));
    third =(struct node *) malloc(sizeof(struct node));

    head->data =7;
    head->next =second;
    second->data =12;
    second->next =third;
    third->data =23;
    third->next =NULL;
    // linkListTraversal(head);
    // head=insertAtFirst(head,12);
    // linkListTraversal(head);
    // head=insertAtIndex(head,44,2);
    // linkListTraversal(head);
    // head=insertAtEnd(head,77);
    // linkListTraversal(head);
    head=insertAfter(head,second,99);
    // linkListTraversal(head);
    // head=deleteFIrst(head);
    // head=deleteAtIndex(head,2);
    head=deleteAtLast(head);
    linkListTraversal(head);


    return 0;

}