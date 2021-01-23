#include <stdio.h>
int recursion(int n);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Sum of the digits is %d",recursion(n));
}
int recursion(int n)
{
	if(n/10==0)
	{
		return n;
	}
	else
	{
		return (recursion (n/10) + (n%10));
	}

}
