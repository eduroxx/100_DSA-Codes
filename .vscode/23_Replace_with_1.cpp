#include<iostream>
using namespace std;

int main()
{
int n;
cin >> n;
string a = to_string(n); 

for (int i = 0; i < a.length(); i++)
{
    if (a[i] == '0')
    a[i] = '1';
    
    cout << a[i];    
}
}