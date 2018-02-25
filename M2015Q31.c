#include<stdio.h>
int 
main(void)
{
	int resnum,samnum,i;
	double samp=0,sum=0,avg;
	FILE *fptr;
	
	if((fptr = fopen("/home/sarfaraazkhan/Desktop/CODES/file1.txt","r"))==NULL)
	{
		printf("Error! no such path present");
		return(0);
	}
	
	while(fscanf(fptr,"%d%d",&resnum,&samnum)!=EOF)
	{
		sum=0;
		for(i=0; i<samnum; i++)
		{
			fscanf(fptr,"%lf",&samp);
			sum = sum + samp;
		}
		avg = sum / samnum;
	if(avg>30)
	{
		printf("%d %.3lf OPEN\n",resnum,avg);
	}
	else
	{
		printf("%d %.3lf CLOSED\n",resnum,avg);
	}
	}
	fclose(fptr);
	return(-1);
}

