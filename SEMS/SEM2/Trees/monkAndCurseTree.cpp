#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
	};
int flag = 0;

struct Node* insertBST(struct Node* root,int val) {
	if(flag==0)
	{
		root->data = val;
		root->right = NULL;
		root->left = NULL;
		flag = 1;
		return root;
	}
	if(root==NULL)
	{
		struct Node* temp;
		temp = (struct Node *)malloc(sizeof(struct Node));
		temp->data = val;
		temp->right = NULL;
		temp->left = NULL;
		root = temp;
		return root;
	}
	if(val<=root->data)
		root->left = insertBST(root->left,val);
	else
		root->right = insertBST(root->right,val);
	return root;
}

struct Node* minRoot(struct Node* root,int val1,int val2) {
    
	if(root->data == val1 || root->data == val2)
	    return root;
	    
	if(val1<root->data && val2>root->data)
	    return root;
	    
	if (root == NULL) return NULL;
	
	if(val1 < root->data && val2 < root->data)
        root = minRoot(root->left,val1,val2);
        
    else if(val1 > root->data && val2 > root->data)
        root = minRoot(root->right,val1,val2);
        
    return root;
    
}

/*struct Node *lca(struct Node* root, int n1, int n2)
{
    if (root == NULL) return NULL;
 
    // If both n1 and n2 are smaller than root, then LCA lies in left
    if (root->data > n1 && root->data > n2)
        return lca(root->left, n1, n2);
 
    // If both n1 and n2 are greater than root, then LCA lies in right
    if (root->data < n1 && root->data < n2)
        return lca(root->right, n1, n2);
 
    return root;
}*/

long int search(struct Node* root, int val, int max){
    if(root==NULL)
        return max;
    if (root->data > max)
        max = root->data;
    if(val<root->data)
       return search(root->left,val,max);
    else if(val>root->data)
        return search(root->right,val,max);
    else
    {
        return max;
    }
    
}


int main(){
	int i,j,k,n,tc,temp,check,sum,val1,val2,g,l;
	long int max;
	struct Node* root;
	root = (struct Node *)malloc(sizeof(struct Node));
	root->left = NULL;
	root->right = NULL;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>temp;
		root = insertBST(root,temp);
	}
	cin>>val1>>val2;
	if(val1>val2)
	{
		g = val1;
		l = val2;
	}
	else
	{
		g = val2;
		l = val1; 
	}
	root = minRoot(root,l,g);     //Searches for the minmised tree where the partion takes place
	
	max = INT_MIN;
	max = search(root,val1,max);
	max = search(root,val2,max);
	cout<<max;
	return 0;
}

