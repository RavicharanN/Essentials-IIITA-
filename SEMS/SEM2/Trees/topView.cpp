/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int flag=0;
void top_view(node * root)
{
    if(root==NULL)
        return;
    if(flag==0)
    {
       
         flag=1;
        top_view(root->left);
       
        cout<<root->data<<" ";
        flag=2;
        top_view(root->right);
        
            
    }
    else
    {
        if(flag==1){
            top_view(root->left);
            cout<<root->data<<" ";
        }
        else if(flag==2){
            cout<<root->data<<" ";
            top_view(root->right);
            
        }
    }
  
}
