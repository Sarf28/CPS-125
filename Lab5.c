#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(void)
{
	int b_num, num_samples, num_orgs_per_100,i,total=0,avg;
	
	FILE *fp;

    fp = fopen("data.txt", "r");
    if ((fp = fopen("data.txt","r")) == NULL)
    {
       printf("Error! opening file");
       exit(1);
	}
	while(fscanf(fp, "%d%d", &b_num, &num_samples)!=EOF);
	{
		
		for(i=0;i<num_samples;i++)
		{
			fscanf(fp,"%d",&num_orgs_per_100);
			total=total+num_orgs_per_100;
			avg=total/num_samples;
		}
		if(num_samples < 3)
		{
			printf("%d  insufficient data\n", b_num);
		}
		else if (avg > 50)
		{
			printf("Beach number %d is closed\n", b_num);
		}
		else
		{
			printf("Beach number %d is open\n", b_num);
		}	
		total=0;
	}

	
	fclose(fp);
	return(0);
}
		
	
