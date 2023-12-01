#include<stdio.h>
#include<stdlib.h>

//Take two field one is data another this address
//Address take next node address
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    //Take 3 node with no memory space
    //Pointer type variable
    struct Node *a=NULL;
    struct Node *b=NULL;
    struct Node *c=NULL;

    //Dynamically Alocated memory using malloc
    //malloc return void type. so that we have to convert it.
    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));

    //Assign data
    a->data=10;
    b->data=20;
    c->data=30;

    //connected with next node
    a->next=b;
    b->next=c;
    c->next=NULL;

    //Travarse linked list
    while(a!=NULL)
    {
        printf("%d -> ", a->data);
        a=a->next;
    }

    return 0;
}
