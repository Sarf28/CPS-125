//Misterm 2018 Day1
//to find the number of busses required for the number of people entered
#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,a;
	double seats,bus;
	do{
		printf("Please enter a positive integer! ");
		scanf("%d",&n);
	}
	while(n<=0);
	
	if (n%44==0)
	{
		a=n/44;
		printf("The number of busses required are: %d",a);
		
	}
	else if(n%44!=0)
	{
		seats=(double)n/44;
		bus=ceil(seats);
		printf("The number of buses required are: %.1lf",bus);
		printf("\nThe number of seats remaining are: %.1lf",((bus*44)-n));
	}

		
	return(0);
}
