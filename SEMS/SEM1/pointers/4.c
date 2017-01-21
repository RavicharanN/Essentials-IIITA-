#include<stdio.h>
int main()
{
	int a[3]={1,2,3},i;
	printf("addresses of a[0]= %p a[1]= %p a[2]= %p \n",&a[0],&a[1],&a[2]);
	int *p=NULL;
	p=a;
	for(i=1;i<=3;i++)
	{
		printf("Address of p= %p , Value of p= %d \n",p,*p);
        p++;
    }
	return 0;
}
/*
OUTPUT:
 addresses of a[0]= 0x7fff55075bac a[1]= 0x7fff55075bb0 a[2]= 0x7fff55075bb4
 Address of p= 0x7fff55075bac , Value of p= 1
 Address of p= 0x7fff55075bb0 , Value of p= 2
 Address of p= 0x7fff55075bb4 , Value of p= 3
EXPLANATION:
 Since a variable of integer datatype uses the size of 4 bytes,the immediate element's address will be X+4 
 (There x is the address of the previous element)
 The interesting property of pointers is that when we increment the address of the pointers they point to the 
 memory location of the next address in that particular data-type.
 Thus,u can observe their behaviour in the output shown.
*/
