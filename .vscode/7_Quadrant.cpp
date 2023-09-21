#include<iostream>
using namespace std;

int main()
{
int X, Y;
cin>>X>>Y;

if (X>0 && Y>0)
{
    cout<<"Ist Quadrant";
}
else
{
if (X<0 && Y>0)
{
    cout<<"IInd Quadrant";
}
else if (X<0 && Y<0)
{
    cout<<"IIIrd Quadrant";
}
else if (X>0 && Y<0)
{
    cout<<"IVth Quadrant";
}
else
{
    cout<<"Enter valid input";
    return 0;
}
}
return 0;
}