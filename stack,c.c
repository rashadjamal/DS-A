#include<stdio.h>
int stack[100],i,j,choice=0,top=-1;
void push();
void pop();
void show();
void main()
{
	printf("Enter the Number of element in the stack");
	scanf("%d",&n);
	printf("*******STACK OPERATION******");
	puts("----------------------------");
	while(1)
	{
		printf("Choice one below option");
		printf("\n1.push()\n2.pop\n3.show\n4.Exit");
		

