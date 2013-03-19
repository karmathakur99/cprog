/*To find the Greatest of n numbers*/
#include<stdio.h>
int main()
{ 
 int n,num,i,big;
 printf("enter the value of n : \n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("number %d :\n",i+1);
  scanf("%d",&num);
  if(big<num)
   big=num;
 }
 printf("Largest no. is %d\n",big);
 return 0;
} 
