/*To print the reverse of a number*/
#include<stdio.h>
int main()
{
 int i,rev=0,rem=0,num;
 printf("Enter the Number: ");
 scanf("%d",&num);
 while(num>0)
  {
   rem=num%10;
   rev=(rev*10)+rem;
   num=num/10;
  }
 printf("%d\n",rev);
 return 0;
}
