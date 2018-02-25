#include<stdio.h>
#include<math.h>
int main(void)
{
	int count=0;
	double a,avg,sum,sq;
	FILE *fp;
	if((fp=fopen("/home/sarfaraazkhan/Desktop/CODES/soil.txt","r"))==NULL)
	{
		puts("Error opening file");
	}
	while(fscanf(fp,"%lf",&a)!=EOF)
	{
		sum = sum+a;
		count++;
	}
	avg = sum/count;
	printf("The average is: %lf\n",avg);
	sq = sqrt(avg);
	if(sq>2.5)
	{
		puts("It is okay to build");
	}
	else if(sq<=2.5)
	{
		puts("It is not okay to build");
	}
	return(0);
}
		
