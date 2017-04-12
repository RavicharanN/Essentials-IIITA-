/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/


void print(struct Node *head)
{
    struct Node *p;
    p=head;
    while(p!=NULL)
    {
        
        printf("%d\n",p->data);
        p=p->next;
        
    }
    
}

void ReversePrint(Node *head)
{
    struct Node *prev,*p,*nextl;
    prev = NULL;
    p=head;
    while(p!=NULL)
    {
        nextl=p->next;
        p->next=prev;
        prev=p;
        p=nextl;
    }    
    head = prev;
    print(head);   
}

