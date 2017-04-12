struct Node{
    int data;
    struct Node* next;
    
};

void Print(struct Node* head) //Passing the head from the main function
{
    struct Node* p;
    if(head==NULL)
        return;
    p = head;         
     /*Note that head can't be iterated directly as it defines the
     start of the linked list. So, it is assignes to another variable p which 
     iterates throuch the list */     
    while(p!=NULL)
    {
        cout<< p->data <<endl; 
        p= p->next; // Iteration of p. It ends when p==NULL.
    }
    return;    
}

