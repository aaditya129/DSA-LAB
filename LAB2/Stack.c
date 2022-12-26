#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};
int isEmpty(struct stack *ptr){
if(ptr->top==-1)
{
    return 1;
}
else
return 0;
}
int isFull(struct stack *ptr){
if(ptr->top==ptr->size-1)
{
    return 1;
}
else
return 0;
}

void push(struct stack *ptr,int val){
   if(isFull(ptr))
   {
    printf("stack overflow \n");
   }
   else
   {
    ptr->top++;
    ptr->arr[ptr->top]=val;
   }
}
int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
   {
    printf("stack  underflow \n");
    return -1;
   }
   else
   {
    int val =ptr->arr[ptr->top];
    ptr->top--;
   return val;
   }
}
int peek(struct stack *p,int i)
{
    int index=p->top-i+1;
    if(index<0)
    {

    printf("Invalid position \n");
    return -1;
    }
    else
    {
        return p->arr[index];
    }

}
int stacktop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int main(){
    struct stack *s=(struct stack*)malloc(s->size*sizeof(struct stack));;
    s->top = -1;
    s->size=8;
    s->arr=(int*)malloc(s->size*sizeof(int));
    push(s,56);
    push(s,23);
    push(s,66);
    push(s,77);
    push(s,11);
   
    int take=pop(s);
    printf("Pop out element is: %d \n", take);
    int peekval=peek(s,4);
    printf("Peak  element is: %d \n", peekval);

    if(isEmpty(s))
    {
        printf("The stack is empty \n");
    }
    else
    {
    printf("The stack is not full \n");

    }
    printf("The top most element is %d \n", stacktop(s));
    printf("The bottom most element is %d \n", s->arr[0]);




    //  for (int j = 1; j <= (s->top+1); j++)
    // {
    //      printf("this is it");
    // }
    
    return 0;
} 