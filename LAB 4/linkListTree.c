#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
   struct node *left;
   struct node *right;
};

struct node* search(struct node * root , int data)
{
    if(root == NULL){
        return NULL;
    }
    if(data==root->data){
        return root;
}
else if(data<root->data){
    return search(root->left, data);}
    else
    return search(root->right, data);
}


struct node * createNode(int data)
{
    struct node *p;
 p= (struct node *)malloc(sizeof(struct node));
 p->data= data;
 p->right=NULL;
 p->left=NULL;
 return p;
}
struct node * inorderpredecessor( struct node *root)
{
    root=root->left;
    while (root->right != NULL)
    {
        root =root->right;
    }
    return root;

};

struct node * delete(struct node * root,int val)
{
    struct node * ipre;
    if(root == NULL)
    {
        return NULL;
    }
    if(root->left ==NULL && root->right ==NULL)
    {
        free(root);
        return NULL;
    }
    if(val < root->data)
    {
        delete(root->left,val);
    }
    else if(val>root->data)
    delete(root->right,val);
    else
    {
        ipre=inorderpredecessor(root);
        root->data=ipre->data;
        root->left =delete(root->left,ipre->data);
    }
    return root;
}
void insert(struct node *root, int data){
    struct node *prev= NULL;
    while (root!= NULL)
    {
        prev=root;
        if(data==root->data){
            printf("Cannont insert");
            return;
    }
    else if(data<root->data)
    {
        root=root->left;
    }
    else 
    {
        root=root->right;
    }
    
    }
    struct node * new = createNode(data);
    if(data<prev->data)
    {
        prev->left=new;
    }
    else
    prev->right=new;
}
int main()
{
struct node * p= createNode(2);
struct node * p1= createNode(22);
struct node * p2= createNode(23);
struct node * p3= createNode(44);
p->left=p1;
p->right=p2;
p2->right=p3;
insert(p,19);
// delete(p,19);

struct node * k=search(p,19);
if(k!= NULL)
{
    printf("Element: %d ",k->data);
}
else
printf("Element Not Found");

return 0;
}