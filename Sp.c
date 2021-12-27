#include <stdio.h>
// From there the body of code is started

 void main()
{
	int choice;
printf("\n1.Arithmatic operations\n");
printf("\n2.Logical operation\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
	
printf("your choice is Arithmatic operations:");
printf("\n1.Addition\n");
printf("\n2.Subtraction\n");
printf("\n3.multiplication\n");
printf("\n4.Division\n");
int ch;
printf("\n \nNow select from these:\n");
scanf("%d",&ch);
switch(ch)
{
	
    
case 1:
	{
		printf ("\nyour selection is for addition\n");
		addition();
	}
	break;
case 2:
	{
		printf("\nyour selection is for subtraction\n");
		subtraction();
	}
	break;
}



break;

case 2:
printf("your choice is Logical operations.\n \nNow select from these:\n");
printf("\n1.AND  (a*b)\n");
printf("\n2.OR   (a+b)\n");
printf("\n3.NOT  (a!b)\n");
default: 
break;
}



}   
int addition()
{ // this user defined function to perforn addition operation
    int sum,a,b;
    scanf("%d%d",&a,&b);
    sum = a + b;
    printf("\nSum is %d\n", sum);
    return 0;
}
int subtraction()
{ // this user defined function to perforn subtraction operation
    int sub,a,b;
    scanf("%d%d",&a,&b);
    sub = a - b;
    printf("\nsubtraction is %d\n", sub);
    return 0;
}
void multiplication()
{ // this user defined function to perforn multiplication operation
    int multi,a,b;
    scanf("%d%d",&a,&b);
    multi = a * b ;
    printf("\nMultiplication is %d\n", multi);
}
void divide()
{ // this user defined function to perforn division operation
    int divi,a,b;
    scanf("%d%d",&a,&b);
    divi = a / b ;
    printf("\nDivide is %d\n", divi);
}
