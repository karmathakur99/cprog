/*to reverse the no. of given range*/
#include<stdio.h>
int main()
{
 int a,b,i,num,rev=0,rem;
 printf("enter 1st no. :");
 scanf("%d",&a);
 printf("Enter 2nd no. :");
 scanf("%d",&b);
 for(i=a;i<=b;i++)
 {
  for(num=i;num>=1;num=num/10)
  {
   rem=num%10;
   rev=(rev*10)+rem;
  }
  printf("\n%d reverse: %d",i,rev);
  rev=0;
 }
 printf("\n");
 return 0;
} 
    
