/* Lab 6 Part 1: To sort 3 entered numbers*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define msize 3
void getnums(int arr[]);
void max3(int *x, int *y, int *z, int arr[]);
int main(void)
{
	int s,m,l;
	int arrg[msize];
	getnums(arrg);
	max3(&s, &m, &l, arrg);
	printf("\nThe smallest number is: %d\nThe middle number is: %d\nThe largest number is: %d\n",s,m,l);
	return(0);
}

void getnums(int arr[])
{
	int i,count=1;
	for(i=0;i<msize;i++)
	{
		printf("Enter element %d: ",count);
		scanf("%d", &arr[i]);
		count++;
	}
}
void max3(int *s, int *m, int *l, int arr[])
{
	int i,temp,j;
	for(i=0;i<msize-1;i++)
	{
		for(j=0;j<msize-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}	
	}
	*s=arr[0];
	*m=arr[1];
	*l=arr[2];	
}
