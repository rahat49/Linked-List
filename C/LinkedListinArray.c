#include<stdio.h>
#include<stdlib.h>

//Define array and array size
struct Node * createLinkedList(int arr[], int size);

//Take two field one is data another is address
//Address take next node address
struct Node
{
    int Data;
    struct Node *next;
};

int main()
{
    //define array with element
    int a[]={15,101,20,10,1};

    //take pointer struct node type
    struct Node *head=NULL;

    //then call createLinkedList
    head = createLinkedList(a,5);

    //traverse linked list
    //print until head is null
    while(head!=NULL)
    {
        printf("%d->",head->Data);
        head=head->next;
    }
    printf("NULL\n");

    return 0;
}

//Here return pointer which type will be struct Node
struct Node * createLinkedList(int arr[], int size)
{
    //take 3 pointer variable with null value
    struct Node *head=NULL, *temp=NULL, *current=NULL;

    int i;
    for(i=0; i<size; i++)
    {
        //Dynamically Allocated memory space using malloc
        temp=(struct Node *)malloc(sizeof(struct Node));

        //Holding array data from i
        temp->Data=arr[i];
        temp->next=NULL;

        //if true then head will be temp data and also current will be temp
        //if false then current next will be temp then current make next node
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }

    //after completing loop return head
    return head;
}
