#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node* next;
} node;

int brojanje(node *head)
{
    int brojac=0;
    node *temp=head;
    do
    {
        if(temp==head && brojac!=0)
        {
            break;
        }
        brojac++;
        temp=temp->next;
    }
    while(temp!=NULL);
    return brojac;
}

node* create(int data,node* next) // 30, NULL
{
    node* new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }

    new_node->data = data; //30
    new_node->next = next; // NULL

    return new_node;
}

/*
    Dodaje prvog clana liste
*/

node* prepend(node* head,int data)
{
    node* new_node = create(data,head);
    head = new_node;
    return head;
}

/*
    Dodavanje novog clana na kraj liste
*/
node* append(node* head, int data)
{
    if(head == NULL)
        return NULL;
    /* go to the last node */
    node *cursor = head;
    while(cursor->next != NULL)
        cursor = cursor->next;

    /* create a new node */
    node* new_node =  create(data,NULL);
    cursor->next = new_node;

    return head;
}


/*
    Ispis liste
*/
void print(node* head)
{
    node* cursor = head;
    while(cursor != NULL)
    {
        printf("Data : %d \n",cursor->data);
        cursor = cursor->next;
    }
}

/*
    Birsanje cele liste (oslobadjanje memorije)
*/
void dispose(node *head)
{
    node *cursor, *tmp;

    if(head != NULL)
    {
        cursor = head->next;
        head->next = NULL;
        while(cursor != NULL)
        {
            tmp = cursor->next;
            free(cursor);
            cursor = tmp;
        }
    }
}

int main()
{
    int command = 0;
    int data,brojac;

    node* head = NULL;

	head = prepend(head,1);
	append(head, 2);
	append(head, 3);
	append(head, 4);
	print(head);

	printf("----------\n");
    brojac=brojanje(head);
    printf("Lista ima %d clanova.",brojac);
    return 0;
}
