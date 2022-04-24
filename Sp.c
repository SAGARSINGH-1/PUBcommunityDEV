#include <iostream>
using namespace std;
// From there the body of code is started
class maths
{
    private:

    int a,b,sum,sub,multi;
    int length,width,height,radius;

    public:

    int addition()
{ // this user defined function to perform addition operation
    cin>>a>>b;
    sum = a + b;
    cout<<"Sum is : "<<sum<<endl;
    return 0;
}
int subtraction()
{ // this user defined function to perform subtraction operation
    cin>>a>>b;
    sub = a - b;
    cout<<"Subtraction is : "<<sub<<endl;
    return 0;
}
int multiplication()
{ // this user defined function to perform multiplication operation
    cin>>a>>b;
    multi = a * b;
    cout<<"Multiplication is : "<<multi<<endl;
    return 0;
}
int division()
{ // this user defined function to perform division operation
    float divi, a, b;
    cin>>a>>b;
    divi = a / b;
    cout<<"Division is : "<<divi<<endl;
    return 0;
}
void area()
{// this user defined function to perform area operation
    cout<<"Enter Values:"<<endl;
    cout<<"length:";
    cin>>length;
    cout<<"width:";
    cin>>width;
    cout<<"Area:"<<length*width<<endl;
    }
void volume()
{// this user defined function to perform volume operation
    cout<<"Enter Values:"<<endl;
    cout<<"length:";
    cin>>length;
    cout<<"width:";
    cin>>width;
    cout<<"height:";
    cin>>height;
    cout<<"Volume:"<<length*width*height<<endl;
    }
void circumference()
{// this user defined function to perform circumference operation
    cout<<"Enter radius of circle:";
    cin>>radius;
    cout<<2*3.14*radius;
    }

};
int main()
{   
    maths c1,a1;
    int choice1,choice2,choice3;
    cout<<"Enter the mathematical operation : "<<endl;
    cout<<"Enter 1 for calculation and 2 for algebric expression"<<endl;
    cin>>choice1;
    if(choice1==1)
    {
        cout<<"Now select an mathematical calculations : "<<endl;
        cout<<"1.Addition\n2.Subtraction\n3.Multiplication\4.Division"<<endl;
        cin>>choice2;
        switch (choice2)
        {
            case 1:
            {
                a1.addition();
                break;
            }
            case 2:
            {
                a1.subtraction();
                break;
            }
            case 3:
            {
                a1.multiplication();
                break;
            }
            case 4:
            {
                a1.division();
                break;
            }
            default:
            {
                cout<<"XX: Wrong input Incorrect choice :XX"<<endl;
            }
        }

    }
    else if(choice1==2)
    {
        cout<<"Now select an Algebric expression calculations : "<<endl;
        cout<<"1.Area\n2.Volume\n3.Circumference : "<<endl;
        cin>>choice3;
        switch (choice3)
        {
            case 1:
            {
                c1.area();
                break;
            }
            case 2:
            {
                c1.volume();
                break;
            }
            case 3:
            {
                c1.circumference();
                break;
            }
            default:
            {
                cout<<"XX: Wrong input Incorrect choice :XX"<<endl;
            }
        }
    }
    else
    {
       cout<<"XX: Wrong input Incorrect choice :XX"<<endl;
    }
    return 0;
}
