#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int front=-1;
int rear=-1;

int isFull(int arr[10]){
  if(rear=MAX-1)
    return 1;
  return 0;
}
int isEmpty(int arr[10]){
  if(front==-1||front=rear+1)
    return 1;
  return 0;
}

int enqueue(int arr[10],int item){
  if(isFull())
    printf("Overflow\n");
  if(front==-1)
    front=0;
  rear=rear+1;
  return 1;
}

int delete(int arr[100]){
  int item;
  if(isEmpty())
    printf("Underflow\n");
  item=arr[front];
  front=front+1;
}



