#include<stdio.h>
//There all the user defined functions
void addNumbers(int n1,int n2)
{
    int sum;
    sum= n1+n2;
    printf("\nSum is %d\n",sum);
}
void subtraction (int n1,int n2)
{
    int sub;
    sub=n1-n2;
    printf("\nsubtraction is %d\n",sub);
}
void multiplication(int n1,int n2)
{
    int multi;
    multi=n1*n2;
    printf("\nMultiplication is %d\n",multi);
}
void divide(int n1,int n2)
{
    int divi;
    divi=n1%n2;
    printf("\nDivide is %d\n",divi);
}
//From there the body of code is started
int main()
{
    int a=3,b=2;
    addNumbers (a,b);
    subtraction (a,b);
    multiplication (a,b);
    divide(a,b);
    return 0;
}
