
//Search for a no. in a 1-D array using recursions

#include <stdio.h>

int a[10]={1,2,3,4,7,6,342,52,234,43552};
int i;

void find(int n)
{
	if(i==10)      //Base Condition
	{
		printf("-1");
		return;         
	}
	
	if(n==a[i])
	{
		printf("%d",i);
		return;
	}
	else
	{
		i++;
		find(n);
	}

}

int main()
{
	int j,k,l,n,d;
	scanf("%d",&n);
	i=0;
	find(n);

	return 0;

}