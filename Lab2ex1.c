#include <stdio.h>
//function to reverse string
void reverse (char str[1000]){ 
  int start,fin,count = 0;
  char rev[1000]; //can't have char rev[]; gives error so had to put a limit for the amount of characters I can have in the reverse string and the inputed string

   while (str[count] != '\0')
      count++;
 
   fin = count - 1;
 
   for (start = 0; start < count; start++) {
      rev[start] = str[fin];
      fin--;
   }
 
   rev[start] = '\0';
   printf("%s\n", rev);
}
int main(void) {
  char str[1000] = ""; //edit input here
  reverse(str);
}