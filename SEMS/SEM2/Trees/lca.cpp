// Lowest common ancestor using stacks
/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;
*/

struct node* stacklca[10000];
int top = -1;

int isEmpty(){
    if(top == -1)
        return 1;
    return 0;
}

void push(struct node* p){
    top++;
    stacklca[top] = p;
    return;
}

struct node *pop(){
    struct node* item;
    item = stacklca[top];
    top--;
    return item;
}

int searchStack(struct node* root, int value) 
{
    
    struct node *p;
    p = root;
   
    while(p!=NULL)
    {
        if(value<p->data)           
            p = p->left;

        else if(value>p->data)       
            p = p->right; 

        else 
            return 1;
    }
    return 0;
    
}

int search(struct node *root,int value)
{
    struct node *p;
    p = root;
    push(p);
    while(p!=NULL)
    {
        if(value<p->data){            
            p = p->left;
            push(p);
        }
        else if(value>p->data) {       
            p = p->right; 
            push(p);
        }
        else {
            break;
        }
    }
    return 0;
}


node * lca(node * root, int v1,int v2)
{
    int check;
    struct node* p;
    p = root;
    search(root,v1);
    while(!isEmpty())
    {
        p = pop();
        check = searchStack(p,v2);
        if(check)
            return p;
    }
    return root;
}




