#include <stdio.h>
//function to print tree with asterisks
void tree(height, width){
int asterisks;
int spaces;
for(int i=1;i<=width;i++)
     {
         asterisks=i*2-1;
         spaces=i+width-asterisks;
         for(int j=0;j<spaces;j++)
         {
             printf("%c",' ');
         }
         for(int k=0;k<asterisks;k++)
         {
             printf("%c",'*');
         }
         printf("\n");
     }
 
     for(int l=0;l<height;l++)
     {
         for(int m=0;m<(width*2-1)/2;m++)
         {
             printf("%c",' ');
         }
         printf("%c%c%c\n", '*', '*', '*');
     }

}

int main(void) {
  int height = 5;
  int width = 9; //in lecture we were told it is safe to assume that the width was an odd nuumber so I'm not doing robustness checks
  tree(height,width);
  return 0;
}