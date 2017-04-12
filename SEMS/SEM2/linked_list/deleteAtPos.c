/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    int i,j,k,l,pos=0;
    struct Node *p,*temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
        return head;
    p=head;
    if(position==0)
        head=p->next;
    else
    {
        while(position!=1){
            p=p->next;
            position--;
        }
        p->next=p->next->next;
    }
    return head;
           
}
