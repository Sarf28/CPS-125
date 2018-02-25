#include<stdio.h>
int main(void)
{
	int m,f,p,l;
	double avgl,avgt,grade;
	puts("Please enter the marks for the midterm test, final exam, projects and labs:");
	scanf("%d%d%d%d",&m,&f,&p,&l);
	avgt = (m+f)/2;
	avgl = (p+l)/2;
	if(avgt<50 || avgl<50)
	{
		printf("Your grade is F");
		return(0);
	}
	if(avgt>avgl)
	{
		grade = avgt;
	}
	else
	{
		grade = avgl;
	}
	if(grade>80)
	{
		printf("Your grade is A");
	}
	else if(grade>=70)
	{
		printf("Your grade is B");
	}
	else if(grade>=60)
	{
		printf("Your grade is C");
	}
	else if(grade>=50)
	{
		printf("Your grade is D");
	}
	return(0);
}
