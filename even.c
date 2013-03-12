/*if the number is even or odd */
#include<stdio.h>
int main()
{
 int i;
 printf("Enter the decimal no: ");
 scanf("%d",&i);
 if((0==(i&1))?printf("Even No.\n"):printf("Odd No.\n"));
 return 0;
}
