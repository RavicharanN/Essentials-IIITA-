
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

struct node *queue[10000];
int front =-1;
int rear = -1;

void enqueue(struct node* ptr){
    if(front==-1){
        queue[0]=ptr;
        front++;
        rear++;
        return;
    }
    rear++;
    queue[rear] = ptr;
    return;
    
}

struct node* dequeue(){
    struct node* retItem;
    
    retItem = queue[front];
    front++;
    return retItem;
}

int isEmpty()
{
    if(front==-1||front==rear+1)
        return 1;
    return 0;
}


void LevelOrder(node * root)
{
    if(root==NULL)
        return ;
    struct node* p;
    p=root;
    enqueue(p);
    while(isEmpty()==0){
        p=dequeue();
        cout<<p->data<<" ";
        if(p->left)
            enqueue(p->left);
        if(p->right)
            enqueue(p->right);
        
    }
    return ;   
}
