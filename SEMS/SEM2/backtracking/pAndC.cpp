#include<stdio.h>
#include<stdlib.h>
 
 
int solve(int arr[], int data[], int start, int end,int index, int r)
{ 	
	int sum=0,k;
	static int count;
	if (index == r)
    	{	
        	for (int j=0; j<r; j++)
          		sum+=data[j];
         	if(sum>=40&&sum<=100)
         	 count++;
    	}
 
    for (int i=start; i<=end; i++)
    {
        data[index] = arr[i];
        solve(arr, data, i+1, end, index+1, r);
    }
    return count;
}
 
int main(){
	int t,n,k,i,x,res,j;
	int comb[100000],a[100000],results[100000];
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d%d",&n,&k);
		int a[n];
		for(j=0;j<n;j++){
		scanf("%d",&x);
		a[j]=x;
		}
		res=solve(a,comb,0,n-1,0,k);
		results[i]=res;
		if(i==1)
		printf("%d\n",res);
		else
		printf("%d\n",results[i]-results[i-1]);
		}
}                                   
                                                                                                                                    
                                                 
