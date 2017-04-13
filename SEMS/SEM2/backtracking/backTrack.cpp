//BAckracking- nqueens

#include<iostream>
using namespace std;

int count=0;
int check(int board[10][10],int x, int y, int n)
{
  int i,j;
  //Checking the column
  for(i=0;i<x;i++)
    if(board[i][y]==1)
      return 0;
  //Checking the row
  for(j=0;j<y;j++)
    if(board[x][j]==1)
      return 0;
  //Checking the upper diagnal
  for(i=x-1,j=y-1;i>=0&&j>=0;j--,i--)
    if(board[i][j]==1)
      return 0;
  //Checking the lower diagnol
  for(i=x,j=y;i<n&&j>=0;i++,j--)
    if(board[i][j]==1)
      return 0;

  return 1;
}

void print(int board[10][10],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      cout<<board[i][j]<<" ";
    cout<<"\n";
  }
}

int nQueens(int board[10][10],int j,int n)
{
  if(n==j)
  {
    print(board,n);
    count=count+1;
    return 1;
  }
  int i;
  for(i=0;i<n;i++)
  {
    if(check(board,i,j,n))
    {
      board[i][j]=1;
      nQueens(board,j+1,n);  //recursive condition
      board[i][j]=0;
    }
  }
  return 0;
}

int main()
{
  int board[10][10],n,i,j,flag;
  cin>>n;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      board[i][j]=0;
  j=0;
  flag=nQueens(board,j,n);
  if(flag==0)
    printf("No sol\n");
  else 
    printf("%d\n",count);
    return 1;
}

