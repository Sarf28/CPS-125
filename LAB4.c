#include<stdio.h>
#include<math.h>
int
main(void)
{
	int a1,a2,t1,t2,sum1,avg;
	char grade;
	printf("Enter the marks for Assignment 1: ");
	scanf("%d",&a1);
	printf("\nEnter the marks for Assignment 2: ");
	scanf("%d",&a2);
	printf("\nEnter the marks for Test 1: ");
	scanf("%d",&t1);
	printf("\nEnter the marks for Test 2: ");
	scanf("%d",&t2);
	sum1=a1+a2+t1+t2;
	avg=sum1/4;
	if(t1<50||t2<50)
		{
			grade='F';
			printf("\nThe grade is : %c",grade);
		}
	else if(avg>=80)
		{
			grade='A';
			if(a1<50||a2<50)
				grade='B';
			printf("\nThe grade is : %c",grade);
		}
	else if (avg>=70)
		{
			grade='B';
			if(a1<50||a2<50)
				grade='C';
			printf("\nThe grade is : %c",grade);
		}
	else if (avg>=60)
		{
			grade='C';
			if(a1<50||a2<50)
				grade='D';
			printf("\nThe grade is : %c",grade);
		}
	else if (avg>=50)
		{
			grade='D';
			if(a1<50||a2<50)
				grade='F';
			printf("\nThe grade is : %c",grade);
		}
	else if (avg<50)
		{
			grade='F';
			printf("\nThe grade is : %c",grade);
		}
	else
		{
			return(0);
		}
}

