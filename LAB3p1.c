#include <stdio.h>
#include <math.h>

int

main(void)

{
	int num1, num2, num3, num4,sum,sumf2,suml2,sqrsum;
	double q;
		printf("Enter 4 integers: \n");
		scanf("%d\n%d\n%d\n%d",&num1,&num2,&num3,&num4);
	sum=num1+num2+num3+num4;
		printf("\nThe sum of the 4 values is: %d\n" , sum);
	sumf2=num1+num2;
	suml2=num3+num4;
		printf("\nThe sum of the first 2 values is : %d, and the sum of the last 2 values is : %d\n" , sumf2, suml2);
	sqrsum=(num1*num1)+(num2*num2)+(num3*num3)+(num4*num4);
		printf("\nThe sum of the squares of the 4 values is : %d\n" , sqrsum);
	 q=sqrt(sqrsum)/(double)sum;
		printf("\nQuotient of the square root of the sum of the squares of the numbers, divided by the sum of all the numbers to 2 decimal places is : %.2lf\n", q);
		printf("\nQuotient of the square root of the sum of the squares of the numbers, divided by the sum of all the numbers to 2 decimal places is : %.4lf\n", q);
}
