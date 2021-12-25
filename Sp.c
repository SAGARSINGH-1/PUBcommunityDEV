#include <stdio.h>
#include <conio.h>
void main()
{
int choice,b,a,i,j,rows,s,fact=1,number;
int add,sum,plus;

while(1)
{

printf("\n1) Factorial");
printf("\n2) Addition");
printf("\n3) Table");
printf("\n4) shapes");
printf("\n5) Exit");
printf("\nSelect the good choice\n");

scanf("%d",&choice);
clrscr();
switch(choice)
{
case 3:
printf("Write the value ");
  scanf("%d",&a);
for (b = 1; b <= 10; ++b)
printf("%d * %d = %d \n", a, b, a * b);{}
break;
 case 4:
 printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for (i = 1; i <= rows; ++i)
  {
 for (j = 1; j <= i; ++j)
  {
   printf("* ");
 }
 printf("\n");
  }
break;
case 1:
printf("Enter a number: \n");
      
  scanf("%d",&number);
  for(s=1; s<=number; s++) {
    fact=fact*s;        
        }
 printf("Factorial of %d is: %d",number,fact);
break;
   case  2:
   printf("Enter the value :");
scanf("%d%d",&add,&sum);
    plus =add+sum;
    printf("\n Sum is %d",plus);
    break;
  
    
    case 5:exit(0);
    getch;
    
    }}
}
