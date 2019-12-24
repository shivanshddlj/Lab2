#include <stdio.h>
#include <string.h> //include string library functions to get length of string (char array)
void Palindrome(char pal[]){ // function to check if the string inputed is a palindrome;
  int start = 0;
  int end = strlen(pal) - 1;
  while (end>1){
    if (pal[start++] != pal[end--]) {
      printf("%s not a palidrome\n", pal);
      return;
    }
  }
  printf("%s is a palindrome\n", pal);
}
int main(void) {
  Palindrome("poop"); //input word in brackets
  return 0;
}