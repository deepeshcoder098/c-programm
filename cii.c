#include<stdio.h>
#include<math.h>>
int main() 
{
float amount,rate,time,ci,principal;
printf("enter the value of principal ");
scanf("%f", &principal);
printf("enter the value of rate");
scanf("%f", &rate);
printf("enter the value of time ");
scanf("%f", &time);
 amount=principal*pow((1+rate/100),time);
 ci=amount-principal;
 printf("the value of ci:%2f",ci);
 printf("the total amount:%2f",amount);
return 0;
}

