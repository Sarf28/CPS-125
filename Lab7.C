#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define msize 25
 int main(void)
 {
	 int i, count=0,min,max;
	 double x_arr[msize], xhigh, xlow, x_second_arr[msize], norm_x_arr[msize];
	 FILE *fp;

	 fp=fopen("datal7.txt","r");
	 if(fp==NULL)
	 {
		 puts("Error opening file");
		 return(1);
	 }
	 puts("Elements in the array are:");
	 while(fscanf(fp,"%lf",&x_arr[i])!=EOF) 
     {
         printf("x_arr[%d] is %lf\n",i,x_arr[i]);
         ++i;
         count++;
     }
	 printf("The number of elements in the array are: %d\n", count); 	
	 xhigh=x_arr[0];
	 for(i=0;i<count;i++)
	 {
		 if(xhigh<x_arr[i])
		 {
			 xhigh=x_arr[i];
		 }
	 }
	 printf("The biggest number is %lf\n", xhigh);
	 xlow=x_arr[0];
	 for(i=0;i<count;i++)
	 {
		 if(xlow>x_arr[i])
		 {
			 xlow=x_arr[i];
		 }
	 }
	 printf("The smallest number is %lf\n", xlow);
	 for(i=0;i<count;i++)
	 {
		 x_second_arr[i]=3*x_arr[i];
	 }
	 puts("The elements of the 2 arrays are:");
	 for(i=0;i<count;i++)
	 {
		 printf("x_arr[%d] is %lf and x_second_arr[%d] is %lf\n",i,x_arr[i],i,x_second_arr[i]);
	 }
	 printf("Enter the lower limit of the normalised array: \n");
	 scanf("%d", &min);
	 printf("Enter the upper limit of the normalised array: \n");
	 scanf("%d", &max);
	 for(i=0;i<count;i++)
	 {
		 norm_x_arr[i] = min + ( ( x_arr[i] - xlow ) * ( max - min ) ) / (xhigh - xlow);
	 }
	 puts("The elements of the normalised array are:");
	 for(i=0;i<count;i++)
	 {
		 printf("norm_x_arr[%d] is %lf \n",i,norm_x_arr[i]);
	 }
	 fclose(fp);
	 return(0); 
 }
 
