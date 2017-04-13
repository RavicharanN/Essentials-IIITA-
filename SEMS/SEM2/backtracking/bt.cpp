
#include <stdio.h>


int solve(int data[100],int arr[100],int k,int sum,int index,int n){
  int i,j;
  if(index==r){
    for(i=0;i<n;i++)
      if(arr[i]==1)
        sum=sum+data[i];
      if(sum>=40){
        count++;return 1;
      }
  }
  for(i=0;i<n;i++)
  {
    arr[i]=1;
    solve(data,arr,k,sum,index+1,n);
    a[i]=0;
  }
}

int main(){
  int 
}