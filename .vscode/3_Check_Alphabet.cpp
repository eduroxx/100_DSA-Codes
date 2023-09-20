// Q3 -Write a program to identify if the character is an alphabet or not//

#include<iostream>
using namespace std;

int main()
{
    char alpha;
    cin>>alpha;

    if((alpha >='a' && alpha <='z') || (alpha >='A' && alpha <='Z'))
    cout<< alpha << " is an Alphabet " ;
    else
    cout<< alpha << " is not an Alphabet";

    return 0;
}

