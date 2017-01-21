#include<stdio.h>
int main()
{
    int a=1,*p1=&a;
    float b=2.0,*p2=&b;
    double c=3.0,*p3=&c;
    char d='!',*p4=&d;
    long long int e=1000000,*p5=&e;
    printf("sizeof p1= %lu , sizeof *p1= %lu \n",sizeof(p1),sizeof(*p1)); //sizeof() function usually takes the format specifier %u or %lu which means "long unsinged"
    printf("sizeof p2= %lu , sizeof *p2= %lu \n",sizeof(p2),sizeof(*p2));
    printf("sizeof p3= %lu , sizeof *p3= %lu \n",sizeof(p3),sizeof(*p3));
    printf("sizeof p4= %lu , sizeof *p4= %lu \n",sizeof(p4),sizeof(*p4));
    printf("sizeof p5= %lu , sizeof *p5= %lu \n",sizeof(p5),sizeof(*p5));
    
    /*
    OUTPUT:
     sizeof p1= 8 , sizeof *p1= 4
     sizeof p2= 8 , sizeof *p2= 4
     sizeof p3= 8 , sizeof *p3= 8
     sizeof p4= 8 , sizeof *p4= 1

     EXPLANATION:
      Here the pointers *p1,*p2,*p3,*p4 point to the variables of datatypes int, float, double, char respectively. So, they use the size of 4,4,8,1 bytes respectively.
      Since all the variable p1,p2,p3,p4 have the adrreses of te variable of different datatypes. And address usually elong to the datatype long long int, all of them use the size of 8 bytes.  
     */
    return 0;
}
