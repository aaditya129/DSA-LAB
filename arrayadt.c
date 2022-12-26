#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *array, int tsize, int tused)
{
    // (*array).total_size=tsize;
    // (*array).used_size=tused;
    // int *ptr= (int*)malloc(tsize*sizeof(int));
    array->total_size=tsize;
    array->used_size=tused;
    array->ptr= (int*)malloc(tsize*sizeof(int));
}
void show(struct myArray *a)

{
    for ( int i = 0; i < a->used_size; i++)
    {
        printf("%d ", (a->ptr)[i]);
    }
    
}
void setvalue(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter the value %d" ,i);
        scanf("%d ", &n);
        (a->ptr)[i]=n;
    }
    

}
int main()
{
    struct myArray marks;
    createArray(&marks,10,2);
    setvalue(&marks);
    show(&marks);

    return 0;
     }
