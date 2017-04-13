#include<stdio.h>
#define max 10
top=-1;
stack[MAX];	

int isFull(){
	if(top==MAX-1)
		return 1;
	return 0;
}

int isEmpty(){
	if(top==-1)
		return 1;
	return 0;
}

void pushback(int item){
	if(ifFull()){
		printf("Overflow"); return;
	}
	top=top+1;
	stack[top]=item;
	return; 
}

int pop(){
	if(isEmpty()){
		printf("Underflow\n");
		return 0;
	}
	item = stack[top];
	top--;
	return item;
}