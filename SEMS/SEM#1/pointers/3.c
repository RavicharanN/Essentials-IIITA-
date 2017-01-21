// Upgradation of pointer and observing their behaviour in different cases
// Suggestible to run the code for yourself in your PC and check the output.

#include<stdio.h>
int main()
{
	int a[2]={30,40};
	printf("%p %p %p \n" ,&a,&a[0],&a[1]);
	int x=a[0];
	int y=a[1],z;
	int *ptr=NULL;
	ptr=a;
	printf("%p %p \n",ptr++,ptr);

	z= *ptr++;
	printf("When z= *ptr++ :");
	printf("\nThe value of z= %d\nAddress of ptr= %p\nvalue of *ptr = %d\n ",z,ptr,*ptr);
	ptr=&a; // Restoring the rpevious value of *ptr
	printf("\n");

	z= *++ptr;
	printf("When z= *++ptr :");
	printf("\nThe value of z= %d\nAddress of ptr= %p\nvalue of *ptr = %d\n ",z,ptr,*ptr);
	ptr=&a; // Restoring the rpevious value of *ptr
	printf("\n");

	z= (*ptr)++;
	printf("When z= (*ptr)++ :");
	printf("\nThe value of z= %d\nAddress of ptr= %p\nvalue of *ptr = %d\n ",z,ptr,*ptr);
	ptr=&a; // Restoring the rpevious value of *ptr
	printf("\n");

	z= ++(*ptr);
	printf("When z= ++(*ptr) :");
	printf("\nThe value of z= %d\nAddress of ptr= %p\nvalue of *ptr = %d\n ",z,ptr,*ptr);
	ptr=&a; // Restoring the rpevious value of *ptr
	printf("\n");


}
