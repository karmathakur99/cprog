/*to check even or odd by using shift operator*/
#include<stdio.h>
int main()
{
 int i,j;
 printf("enter no: ");
 scanf("%d",&i);
 j=(i<<31);
 if(0>j)
 printf("odd\n");
 else
 printf("even\n");
 return 0;
}
 
