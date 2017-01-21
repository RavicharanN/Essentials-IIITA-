// Pointers and strings
// Recommended to analyse the output for yourself before going through the expalnation
#include <stdio.h>

int main()
{
	char *str; //When string is declared normally it can't be modified in the rem. part of the programme.
    //So,we declare it as a pointer so that the value of the string can be changed when the address is changed
	char name[] = "My name is Array!";
    
	str = "Hello World";
   
	printf("str as string constant = %s\n", str);
	printf("str as pointer = %p\n", (void *) str);
	printf("&str = %p\n", (void *) &str);
	printf("\n");

	str = "Little STAR";
	printf("str as string constant = %s\n", str);
	printf("str as pointer = %p\n", (void *) str);
	printf("&str = %p\n", (void *) &str);
	printf("\n");

	str = name;
	printf("str as string constant = %s\n", str);
	printf("str as pointer = %p\n", (void *) str);
	printf("&str = %p\n", (void *) &str);
	//Here note that string is just pointing to the address of the array name, but, the address of string eill be the same.
    //Check the output for clear understanding.
	return 0;
}
/*
OUTPUT:

 str as string constant = Hello World
 str as pointer = 0x10796ff52
 &str = 0x7fff58290b90
 
 str as string constant = Little STAR
 str as pointer = 0x10796ff9d
 &str = 0x7fff58290b90
 
 str as string constant = My name is Array!
 str as pointer = 0x7fff58290ba0
 &str = 0x7fff58290b90
 
EXPLANTION:
 			Here the string is declared as a pointer so that its value can be modified anywhere in the programme.
 Note that in the above example the addrss of the string remains unchanged.The string takes different values because the address to ehich the variable is pointing is being changed.
 
*/

