#include <stdio.h>
#include <math.h>
int main(void)
{
	int n1=0,n2=1,next,count=0;
	double r;
	printf("The fibonacci series below 1000000 is:\n");
	while(n1<1000000)
	{
		printf("\n%d",n1);
		next=n1+n2;
		n1=n2;
		n2=next;
		count++;
		}
	printf("\n\nThe number of terms in the series is: %d",count);
	
	n1=0,n2=1,next=0,count=0;
	printf("\n\nThe terms that satisfy the square root condition are: \n");
	while(n1<1000000)
	{
		if(floor(sqrt(n1))==sqrt(n1)){
		printf("\n%d",n1);
		count++;
	}
		next=n1+n2;
		n1=n2;
		n2=next;
		}
	printf("\n\nThe number of terms that satisfy the above condition are: %d",count);
	n1=1,n2=1,next=0,count=0;
	printf("\n\nThe Golden Numbers are:\n");
	while(n1<1000000)
	{
		r=(double)n2/n1;
		printf("\n%.4lf",r);
	    next=n1+n2;
		n1=n2;
		n2=next;
		count++;
	}
	printf("\n\nThe Golden number with 3 decimal places is :%.3f",r);
	n1=0,n2=1,next=0,count=1;
	while(n1<1000000)
	{	
		if(count==21){	
		printf("\n\nThe 21st term of the series is: %d",n1);;
	}
	    next=n1+n2;
		n1=n2;
		n2=next;
		count++;
	}
	return(0);	
	}
