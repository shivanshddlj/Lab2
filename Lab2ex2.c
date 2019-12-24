#include <stdio.h>
//function to get decimal value from octal number
int octalToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    int base = 1; 
  
    int temp = num; 
    while (temp) { //formula or getting decimal value using iteration
        int last_digit = temp % 10; 
        temp = temp / 10;
        dec_value += last_digit * base; 
        base = base * 8; 
    } 
  
    return dec_value; 
} 
  
// Driver program to test above function 
int main() 
{ 
    int num = 530; //input number here 
    int decimal = octalToDecimal(num);
    printf("%d", decimal);
    return 0;
} 