#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int isEmty(struct node *top)
{
    if (top==NULL)
    return 1;
    else
    return 0;
}
void traversal(struct node * ptr)
{
    while (ptr!=NULL)
    {
       printf("Element: %d \n", ptr->data);
       ptr = ptr->next;
    }
    
}

struct node * push(struct node * top,int x)
{
    struct node * p = (struct node *) malloc(sizeof(struct node));
    p->data = x;
    p->next=top;
    top=p;
    return top;
}

int pop(struct node *s)
{
    if (isEmty(s))
    return 1;
    else
    {
        struct node*n =s;
        s=s->next;
        int x = n->data;
        return x;
        
    }
}
int main()
{
    struct node * top=NULL;
    top=push(top,23);
    top=push(top,33);
    top=push(top,13);
    top=push(top,93);
    int element=pop(top);
    printf("the pop out element is %d",element);
    traversal(top);
    return 0;
}