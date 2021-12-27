#include <stdio.h>
// From there the body of code is started
int n1, n2, choice;
 void main()
{
    // int a = 3, b = 2;
    // addNumbers(a, b);
    // subtraction(a, b);
    // multiplication(a, b);
    // divide(a, b);
printf("\n1.Arithmatic operations\n");
printf("\n2.Logical operation\n");
scanf("%d",&choice);
while(1){
    switch (choice)
{
case 1:
printf("your choice is Arithmatic operations.\n \nNow select from these:\n");
printf("\n1.Addition\n");
printf("\n2.Subtraction\n");
printf("\n3.multiplication\n");
printf("\n4.Division\n");
break;
case 2:
printf("your choice is Logical operations.\n \nNow select from these:\n");
printf("\n1.AND  (a*b)\n");
printf("\n2.OR   (a+b)\n");
printf("\n3.NOT  (a!b)\n");
// default: 
break;
}
 break;   
}
switch(n1) 
{
case 1:
case 2:
case 3:

}


}


void addition()
{ // this user defined function to perforn addition operation
    int sum;
    sum = n1 + n2;
    printf("\nSum is %d\n", sum);
}
void subtraction()
{ // this user defined function to perforn subtraction operation
    int sub;
    sub = n1 - n2;
    printf("\nsubtraction is %d\n", sub);
}
void multiplication()
{ // this user defined function to perforn multiplication operation
    int multi;
    multi = n1 * n2;
    printf("\nMultiplication is %d\n", multi);
}
void divide()
{ // this user defined function to perforn division operation
    int divi;
    divi = n1 % n2;
    printf("\nDivide is %d\n", divi);
}
