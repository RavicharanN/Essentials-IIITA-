//Finding an element in a 2-D Array
#include <stdio.h>
void find(int n,int max,int i,int j,int a[][3])
{
	if(i==3)
	{
		printf("-1");
		return;
	}
	if(n==a[i][j])
	{
		printf("%d %d",i,j);
		return;
	}
	else
	{
		j++;
		
		if(j!=3)
		{
			find(n,max,i,j,a);
		}
		else
		{
			i++;
			find(n,max,i,0,a);
		}
	}
}
int main()
{
	int i,j,k,l,max=3,a[3][3],n;
	scanf("%d",&n);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	find(n,max,0,0,a);



}