#include<stdio.h>
#include<conio.h>
int main()
{
int x=2,y=3;
printf("The numbers before swapping are %d , %d.",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("The swapped numbers are %d , %d.",x,y);
