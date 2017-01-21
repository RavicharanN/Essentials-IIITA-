//Type casting in pointers

#include<stdio.h>
int main()
{
	int a=30,*iptr=&a,*ptr=NULL;
	char c='1',*cptr=&c;
    
	printf("address of a= %p \n address of c= %p \n",&a,&c);
	printf("iptr= %p cptr= %p \n",iptr,cptr);
    
	printf("value of *iptr= %d, value of *cptr= %c \n",*iptr,*cptr);
    
    ptr=iptr; //Assinging the address of one pointer to another of SAME datatypes
    printf("value of *ptr= %d\n",*ptr);
    
	iptr=(int *)cptr; //Typcasting an to interger and assigning the address of cptr to iptr
    
    //NOTE THAT POINTERS OF 2 DIFFERENT DATA-TYPES CAN'T BE ASSINGNED TO ONE ANOTHER.
    
	printf("new value of iptr= %p\n",iptr);
	//Here the address will be same as that of the char pointer.
	printf("new value of *iptr= %c\n",*iptr);
    //Here %c is used because now iptr points to an address which points to a char variable
	
    //If we use %d instead of %c it prints a garbage value.
    printf("new value of *iptr= %d\n",*iptr);
    
	printf("value of *cptr= %c \n", *cptr); //remains unchanged
	
    // Similarly,
    iptr=ptr; // The value of ptr is &a
    cptr=(char *)iptr;
    printf("new value of *cptr= %d \n",*cptr);
    
    /*
     
    OUTPUT:
     address of a= 0x7fff5f3c2bbc
     address of c= 0x7fff5f3c2ba7
     iptr= 0x7fff5f3c2bbc cptr= 0x7fff5f3c2ba7
     value of *iptr= 30, value of *cptr= 1
     value of *ptr= 30
     new value of iptr= 0x7fff5f3c2ba7
     new value of *iptr= 1
     new value of *iptr= 1009499185
     value of *cptr= 1
     new value of *cptr= 30 (After typecasting)
     
    IMPORTANT NOTE:
        			To make changes to a variable using a pointer , the pointer should belong tp the same datatype. Esle, it needs to be typecasted as in the above example. 

     */
}
