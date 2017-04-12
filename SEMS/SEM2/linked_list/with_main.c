#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void printnode(struct node *head){
	struct node *p;
	p=head;
	if(head==NULL)
		printf("Node is empty\n");
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	return ;
}

struct node* pushback(struct node *head,int data){
	struct node *p,*temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	if(head==NULL){
		head=temp;
		temp->next=NULL;
		return head;
	}
	p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=temp;
	temp->next=NULL;
	return head;
}

int main(){
	struct node *head;
	head=NULL;
	pushback(head,1);
	pushback(head,2);
	printnode(head);

} 
