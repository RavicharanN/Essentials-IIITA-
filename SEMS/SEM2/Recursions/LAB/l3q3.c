//Find sum of the elements in a 2-D array from the index (i,j) to (k,l)

#include <stdio.h>

void sum(int a[][3],int i,int j,int k,int l,int ans)
{

	if(i==k&&j==l)
	{
		ans=ans+a[i][j];
		printf("%d\n",ans);
		return;
	}
	else
	{
		j++;
		if(j!=3)
		{
			ans=ans+a[i][j];
			
			sum(a,i,j,k,l,ans);
		}
		else
		{
			i++;
			
			sum(a,i,0,k,l,ans);
		}
	}
}

int main()
{
	int i,j,k,l,n,a[3][3],x1,y1,x2,y2,ans;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);

	scanf("%d %d %d %d",&i,&j,&k,&k);
    ans=0;
    sum(a,i,j,k,l,ans);
    return 0;

}
