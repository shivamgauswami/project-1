#include<stdio.h>

main()
{
	int Bs,Hra,Da,Ta,totalsalary;
	printf("enter your base salary :-");
	scanf("%d",&Bs);
	printf("enter your HRA :-");
	scanf("%d",&Hra);
	printf("enter your DA :-");
	scanf("%d",&Da);
	printf("enter your TA :-");
	scanf("%d",&Ta);
	
	Hra=Hra*Bs/100;
	Da=Da*Bs/100;
	Ta=Ta*Bs/100;
	
	totalsalary=Bs+Hra+Da+Ta;
	printf("your total salary =%d",totalsalary);
}
