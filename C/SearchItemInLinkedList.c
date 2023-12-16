#include<stdio.h>
#include<stdlib.h>

//Define function
struct Node *createLinkedList(int arr[], int size);
int searchInLinkedList(struct Node *head, int value);

//Take two field one is data another is address
//Address take next node address
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    //define array with element
    int a[]={10,20,30,40,50,60};

    //take pointer struct node type
    struct Node *head=NULL;

    //then call createLinkedList
    head=createLinkedList(a,6);

    struct Node *current=head;

    //Print searchLinkedList function
    printf("Index: %d\n",searchInLinkedList(head,120));

    return 0;
}

int searchInLinkedList(struct Node *head, int value)
{
    int index=1;

    //Loop will be contine until getting head=null
    while(head!=NULL)
    {
        //Head data is match with what value we search then return index
        //If not match then Increment index 1
        //head will be  next node head
        if(head->data==value)
        {
            return index;
        }
        index++;
        head=head->next;
    }

    //if not find then return -1
    return -1;
}
struct Node *createLinkedList(int arr[], int size)
{
    //take 3 pointer variable with null value
    struct Node *head=NULL, *temp=NULL, *current=NULL;

    int i;
    for(i=0; i<size; i++)
    {
        //Dynamically Allocated memory space using malloc
        temp=(struct Node*)malloc(sizeof(struct Node));

        //Holding array data from i
        temp->data=arr[i];
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


