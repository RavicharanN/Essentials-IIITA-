Node* Insert(Node *head,int data)
{
    int a;
  struct Node* p,*temp;
  data = a;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data = a;
     p= head;
  while(p->next!=NULL)
  {
    p=p->next; 
  }
  p->next = temp;
  temp->next = NULL;
  return head;
    
}