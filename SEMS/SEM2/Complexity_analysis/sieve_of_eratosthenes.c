
/*Sieve of Eratosthenes to find primes and reduce time complexity in C*/

#include <stdio.h>
#define N 1000000

short primes[N];                                    //array to store whether a number is prime or not

void sieve_of_eratosthenes()                        //Sieve to assign True(1) to Primes and False(0) to Composites
{
    int i,j;
    
    for(primes[0]=primes[1]=0, i=2; i<N; i++)       //intializing the array
        primes[i] = 1;
        
    for(i=2; i<N; i++)
        if(primes[i])
            for(j=2*i; j<N; j+=i)                   //loops through the multiples of Primes
                primes[j] = 0;                      //renders all Composites false
}

int main(void) {
    
  sieve_of_eratosthenes();                          //calling the function to populate the array
    
	// your code goes here //
	
	
	return 0;
}
