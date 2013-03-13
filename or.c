#include<stdio.h>
int main()
{
 int num;
 printf("Enter no. ");
 scanf("%d",&num);
 if(((num|1)==num)?printf("odd\n"):printf("even\n"));
 return 0;
}
