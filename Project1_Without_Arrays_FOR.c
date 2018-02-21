#include<stdio.h>
#include<math.h>
int 
main(void)
{
	int i,j,t1=0,t2=1,next,count=0;
	double r;
	printf("The fibonacci series below 1000000 is:\n");
	for(i=0;i<31;i++){
		printf("\n%d",t1);
		next=t1+t2;
		t1=t2;
		t2=next;
		count++;
	}
	printf("\n\nThe number of terms in the series is: %d",count);
	t1=0;t2=1;next=0;count=0;
	printf("\n\nThe terms that satisfy the square root condition are: \n");
	for(j=0;j<31;j++){
				if (floor(sqrt(t1))== sqrt(t1)){
					printf("\n%d",t1);
					count++;
				}
				    next=t1+t2;
		            t1=t2;
		            t2=next;			
		}
		printf("\n\nThe number of terms that satisfy the above condition are: %d",count);
		t1=1;t2=1;next=0;count=0;
		printf("\n\nThe Golden Numbers are:\n");
		for(j=2;j<31;j++){
		  r=(float)t2/t1;	
		  printf("\n%.4f",r);
		  next=t1+t2;
		  t1=t2;
		  t2=next;
	  }
	  printf("\n\nThe Golden number with 3 decimal places is :%.3f",r);
	  t1=1;t2=1;next=0;count=0;
	  for(j=0;j<31;j++){
				    next=t1+t2;
		            t1=t2;
		            t2=next;
				
			if (t1>5000&&t1<7000){
					printf("\n\nThe 21st term of the series is: %d",t1);
					count++;
				}
		}
	return(0);
	}
