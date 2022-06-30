//Program to simulate a simple calculator 
#include <stdio.h>

int main()
{
   int num1,num2,sum,res;
   char op;   
   printf("Enter an arithmetic operator:");
   scanf("%c",&op); 
   printf("Enter two numbers:");
   scanf("%d%d",&num1,&num2);
   if(op=='+')
     {
          res=num1+num2;
     
     }
     else if(op=='-')
     {
          res =num1-num2;
     
     }
	else if(op=='*')
     {
          res =num1*num2;
      }
	else if(op=='/')
     {
          res =num1/num2;
          
           }
	else if(op=='%')
     {
     	if(num2==0)
     	{
     		printf("error");
     		return 2;
     	}
     	else 
     	{
     	res =num1 % num2;
     	}
          
         
     }
     else{
     	printf ("invaid operator ");
     	return 3;
     }
     printf("\n%d %c %d = %d \n",num1,op,num2,res);
  return 0;
}
 
 
