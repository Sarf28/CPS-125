//To find if the entered number has a whole square root.
#include<stdio.h>
#include<math.h>
int main(void)
{
	int a=0;
	puts("Enter a number: ");
	scanf("%d",&a);
	
	if(floor(sqrt(a))==sqrt(a))
	{
		printf("The square root is : %.0lf\n", sqrt(a));
		printf("Yes it is a whole number.");
	}
	else
	{
		printf("NO it is not a whole number square root.");
	}
	return(0);
}
