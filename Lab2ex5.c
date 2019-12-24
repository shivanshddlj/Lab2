#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int primes[101]; //declare array of primes as global variable
int Prime(int upperbound){ //function using sieve of eratosthenes to see what numbers are primes
  int i,j;
  for (i = 2;i < upperbound; i++){
        primes[i] = 1;
    }
    for (i = 2;i < upperbound; i++){
        if (primes[i])
            for (j = i;i * j < upperbound; j++)
                primes[i * j] = 0;
    }
    for (i = 2;i < upperbound; i++) {
        if (primes[i])
            return primes[i];
    }
  return 0;
}

int main(){ 
  Prime(100);
  int input = 78;
  if (primes[input] == 0){  //if statement checking if numbers are prime or not based on if the function above retuurned 0 or 1
    printf("%d, is not prime", input);
  }
  else{
    printf("%d, is prime", input);
  }
return 0;
}