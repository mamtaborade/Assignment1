#include<stdio.h>
int main()
{
	int a,b,c,sum;
	float avg;
	printf("Enter 1st digit number :\n");
	scanf("%d",&a);
	
	printf("Enter 2nd digit number :\n");
	scanf("%d",&b);

	printf("Enter 3rd digit number :\n");
	scanf("%d",&c);

	sum=a+b+c;
	printf("sum :%d\n",sum);
	avg=(sum/3.0);
	printf("AVerage :%f\n",avg);

	return 0;
}
