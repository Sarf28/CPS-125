/* Project 2 for CPS-125*/
#include <stdio.h>
#include <stdlib.h>
#define col_size 200
/* -------Defining the required functions.------- */
double average(double arr[][col_size],int r, int c);
double corners(double arr[][col_size],int r, int c);
double row(double arr[][col_size],int r, int c, int row_call);
double column(double arr[][col_size],int r, int c, int col_call);
double diagonal(double arr[][col_size],int r, int c, double *d, double *ad);
double borders(double arr[][col_size],int r, int c);
/* -----------------------------------------------*/ 

int main(void)
{
	FILE *fp;
	double arr[200][col_size], avgt, avgc, sumr, sumc, diag, anti_diag, res, sumbor;
	int r, c, i, j, row_call, col_call;
	fp=fopen("dataproj.txt","r");
	
	if(fp==NULL)
	{
		puts("Error opening the file!!");
		return(1);
	}
	fscanf(fp,"%d%d",&r,&c);
	printf("The rows and columns respectively are: %d , %d\n\n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			fscanf(fp,"%lf",&arr[i][j]);
		}
	}
	puts("The elements of the array array are");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%10lf",arr[i][j]);
		}
		puts("");
	}
	fscanf(fp,"%d%d",&row_call,&col_call);
	puts("\nThe row and column call numbers are:");
	printf("%d,%d \n",row_call, col_call);
	
	avgt=average(arr, r, c);
	printf("\nThe average of the entire array is: %lf\n",avgt);
	
	avgc=corners(arr, r, c);
	printf("\nThe average of the corners is: %lf\n",avgc);
	
	sumr=row(arr, r, c, row_call);
	printf("\nThe sum of elements of row %d is: %lf\n",row_call,sumr);
	
	sumc=column(arr, r, c, col_call);
	printf("\nThe sum of elements of column %d is: %lf\n",col_call,sumc);
	
	res=diagonal(arr, r, c, &diag, &anti_diag); 
	if(res==5)
	{
		puts("\nThe Matrix isn't a square matrix therefore the diagonal addition is not possible!!");
	}
	else
	{
		printf("\nThe sum of the diagonal is %lf and the sum of the anti diagonal is %lf\n",diag,anti_diag);
	}
	
	sumbor=borders(arr, r, c);
	printf("\nThe sum of the borders of the array is: %lf\n",sumbor);
	
	fclose(fp);
	 
	return(0);
}

double average(double arr[][col_size], int r, int c)
{
	int i,j;
	double sum=0, avg=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	avg=sum/(r*c);
	return(avg);
}

double corners(double arr[][col_size],int r, int c)
{
	double sum=0, avg=0;
	sum=arr[0][0]+arr[0][c-1]+arr[r-1][0]+arr[r-1][c-1];
	avg=sum/4;
	return(avg);
}
double row(double arr[][col_size],int r, int c, int row_call)
{
	int i;
	double sum=0;
	row_call=row_call-1;
	for (i=0;i<c;i++)
	{
		sum=sum+arr[row_call][i];
	}
	return(sum);
}

double column(double arr[][col_size],int r, int c, int col_call)
{
	int i;
	double sum=0;
	col_call=col_call-1;
	for (i=0;i<c;i++)
	{
		sum=sum+arr[i][col_call];
	}
	return(sum);
}
double diagonal(double arr[][col_size],int r, int c, double *d, double *ad)
{
	int i;
	double sumd=0, sumad=0;
	if(r!=c)
	{
		return(5);
	}
	for(i=0;i<r;i++)
	{
		sumd=sumd+arr[i][i];
		sumad=sumad+arr[i][r - i - 1];
	}
	*d=sumd;
	*ad=sumad;
	return(0);
}

double borders(double arr[][col_size],int r, int c)
{
	int i;
	double sumt=0, sumb=0, suml=0, sumr=0, sumbor=0;
	for(i=0;i<c;i++)
	{
		sumt=sumt+arr[0][i];
	}
	for(i=0;i<c;i++)
	{
		sumb=sumb+arr[r-1][i];
	}
	for(i=1;i<r-1;i++)
	{
		suml=suml+arr[i][0];
	}
	for(i=1;i<r-1;i++)
	{
		sumr=sumr+arr[i][c-1];
	}
	sumbor=sumt+sumb+suml+sumr;
	return(sumbor);
}
