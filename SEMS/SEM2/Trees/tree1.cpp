#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
	};
int flag = 0;

void printTreeIO(struct Node* root){
	if (root==NULL)
		return;
	printTreeIO(root->left);
	cout<<root->data<<" ";
	printTreeIO(root->right);
}


struct Node* insertBST(struct Node* root,int val){
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

int searchBST(struct Node* root, int val){
	if(root==NULL)
		return 0;
	struct Node* p;
	p = root;
	while(p!=NULL){
		if(val<p->data)
			p = p->left;
		else if(val>p->data)
			p = p->right;
		else
			return 1;
	}
	return 0;

}

int count1=0;

void sumOfLeafNodes(struct Node* root){
	if(root->right == NULL && root->left == NULL){
		count1 += root->data;
		return ;
	}
	 sumOfLeafNodes(root->right);
	 sumOfLeafNodes(root->left);
	return ;
}

int main(){
	int i,j,k,l,n,tc,temp,check,sum;
	struct Node* root;
	root = (struct Node *)malloc(sizeof(struct Node));
	/*root->left = NULL;
	root->right = NULL;*/
	cin>>n;
	for(i=0;i<n;i++){
		cin>>temp;
		root = insertBST(root,temp);
	}
	cin>>tc;
	for(i=0;i<tc;i++)
	{
		cin>>temp;
		check = searchBST(root,temp);
		if(check)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	sumOfLeafNodes(root);
	cout<<count1<<endl;
	printTreeIO(root);	
}


