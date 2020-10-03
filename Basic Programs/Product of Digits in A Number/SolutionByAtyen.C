#include<stdio.h>
#include<conio.h>
void main()
{       
int num, rem, prod = 1;
clrscr();
printf("Enter a number: ");
scanf("%d", &num);
while(num != 0)
{
rem = num % 10;
prod *= rem;
num /=  10;
}
printf("%d", prod);
getch();
}