#include<stdio.h>

void main()
{
	
	float p,t,si,ci,r;
	printf("Please enter the principal amount");
	scanf("%f",&p);
	printf("please enter the rate ");
	scanf("%f",&r);
	printf("please enter the time period ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	ci=p*pow((1+r/100),t);
	printf("the simple intrest is : %f ",si);
	printf("the compound intrest is : %f",ci);
	
	
}
