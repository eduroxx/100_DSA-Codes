//Q2- Write a program to identify if the character is a vowel or consonant //


#include<iostream>
using namespace std;

int main()
{
char ch;
cin>>ch;

if(ch=='a' || ch == 'e' || ch == 'i' || ch =='o' || ch== 'u' || ch=='A' || ch == 'E' || ch == 'I' || ch =='O' || ch== 'U')
{
cout<< ch << " is a Vowel" <<endl;
else
cout<< ch << "is a Consonant " <<endl;
}
return 0;
}

