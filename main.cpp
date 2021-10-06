#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cout << "If the number is in a+bi form it's an imaginary number\nIf a number is given we can check whether it's root is an imaginary number or not\n Input number to be checked: " << endl;
    cin>>x;
    if(x<0)
    {
        cout<<"Imaginary Number\nRoot of"<<x<<" is: "<<sqrt(-1*x)<<"i";
    }
    else
        cout<<"Not an imaginary number";

    return 0;
}
