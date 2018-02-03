#include<stdio.h>
#include<math.h>

int
main(void)
{
int a,b,c,d;
float y=1.094,m=0.0006215;
		printf("Enter 4 distances in (m): \n");
		scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
		printf("\nThe conversion table is:\n\n");
		printf("Meters   Yards   Miles\n");
		printf("%.2f   %.2f   %.2f\n",(float) a,a*y,a*m);
		printf("%.2f   %.2f   %.2f\n",(float) b,b*y,b*m);
		printf("%.2f   %.2f   %.2f\n",(float) c,c*y,c*m);
		printf("%.2f   %.2f   %.2f\n",(float) d,d*y,d*m);
		
	  
}
