//program to check wheather the accepted number if a palidrome number or not
#include<stdio.h>
int main()
{
	int n,reversed=0,remainder, orginal;
	printf("Enter an integer:");
	scanf("%d",&n);
	orginal=n;
	
	//reversed integer is stored in reversed viariable
	while (n!=0)
	{
		remainder=n%10;
		reversed=reversed*10+remainder;
		n/=10;
	}
	//palindrome if orignal and reversed are equal
	if(orginal==reversed)
		printf("%d is a palindrome",orginal);
	else
		printf("%d is not a palindrome", orginal);
			
	return 0;
}
		
