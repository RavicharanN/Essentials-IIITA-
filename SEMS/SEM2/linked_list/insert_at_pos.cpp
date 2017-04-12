/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

/*
SAMPLE i/p:
NULL, data = 3, position = 0 
3 --> NULL, data = 4, position = 0

SAMPLE o/p:
3 --> NULL
4 --> 3 --> NULL

*/
Node* InsertNth(Node *head, int data, int position)
{
    int i,j,k,l,pos;
    struct Node *p,*temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    pos=0;
    if(position==0)  //For insertion at head
    {
        temp->next=head; 
        head=temp;
        return head;
    }
    p=head;
    while(pos!=position-1)
    {
        p=p->next;
        pos++;
    }
    temp->next=p->next;
    p->next=temp;
    return head;
}
