#include<stdio.h>
int 
main (void)
{
	int i,n;
	FILE *fp;
	if((fp = fopen("/home/sarfaraazkhan/Desktop/CODES/2015Q32.txt","r"))==NULL)
	{
		printf("Error! no such path present");
		return(0);
	}
	for(i=0; i<8; i++)
	{
		fscanf(fp,"%d",&n);
		if(n>0 && n%2==0)
		{
			printf("%d (PE)\n",n);
		}
		else if(n<0 && n%2==0)
		{
			printf("%d (NE)\n",n);
		}
		else if(n<0 && n%2!=0)
		{
			printf("%d (NO)\n",n);
		}
		else if(n>0 && n%2!=0)
		{
			printf("%d (PO)\n",n);
		}	
	}
	printf("You have reached the end of file.");
	fclose(fp);
	return(0);
}
