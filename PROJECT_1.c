#include<stdio.h>
#include<math.h>
#include<conio.h>
int 
main(void)
{
int num1=0,num2=1,next,i,j,count=0;
int ar[50];
float r;
printf("The Fibonacci Sequence is:\n");
while(1)
{
i=num1;
if(i>1000000)
{
break;
}
ar[count] = i;
next=num1+num2;
num1=num2;
num2=next;
count++;

}
for(j=0;j<31;j++)
{
printf("\n%d",ar[j]);
}
printf("\n\nThe number of terms in the series is: %d",count);
puts("");
count=0;
for(j=0;j<31;j++)
{
if (floor(sqrt(ar[j])) == sqrt(ar[j]))
{
printf("\n%d",ar[j]);
count++;
}
}
printf("\n\nThe number of terms that satisfy the condition are: %d",count);
printf("\n\nThe Golden Numbers are:");
for(j=2;j<31;j++)
{
r=(float)ar[j]/ar[j-1];
printf("\n%.4f",r);
}
printf("\n\nThe Golden number with 3 decimal places is :%.3f",r);
printf("\n\nThe 21st number of the Fibonacci sequesnce is :%d",ar[20]);
return(0);
}


