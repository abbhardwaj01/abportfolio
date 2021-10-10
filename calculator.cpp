#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

void add();
void sub();
void multiply();
void division();
void Square();
void SquareRoot();
void exit();

int main()
{
int Operator;
do
{
    cout<<"Select an operation from the Calculator"
     "\nPress 1 for Addition"
     "\nPress 2 for Subtraction"
     "\nPress 3 for Multiplication"
     "\nPress 4 for Division"
     "\nPress 5 for Square"
     "\nPress 6 for Square Root"
     "\nPress 7 to Exit"
     "\n \n Make a choice: ";
     cin >> Operator;

   switch (Operator)
     {
     case 1:
    add();   // call add() function to find the Addition
    break;
    case 2:
    sub();   // call sub() function to find the subtraction
    break;
    case 3:
    multiply(); // call multiply() function to find the multiplication
    break;
    case 4:
    division(); // call division() function to find the division
    break;
    case 5:
    Square(); // call Square() function to find the square of a number
    break;
    case 6:
    SquareRoot(); // call SquareRoot() function to find the Square Root of the given number
    break;
    case 7:
    exit(0);   // terminate the program
    break;
    default:
    cout <<"Something is wrong..!!";
    break;
    }
    cout <<" \n------------------------------\n";
    }while(Operator != 7);

    return 0;

    }

void add()
{
int n, sum = 0, i, number;
cout <<"How many numbers you want to add: ";
cin >> n;
cout << "Please enter the number one by one: \n";
for (i = 1; i <= n; i++)
{
cin >> number;
sum = sum + number;
}
cout << "\n Sum of the numbers = "<< sum;
}
void sub()
{
int num1, num2, z;
cout <<" \n Enter the First number = ";
cin >> num1;
cout << "\n Enter the Second number = ";
cin >> num2;
z = num1 - num2;
cout <<"\n Subtraction of the number = " << z;
}
void multiply()
{
int num1, num2, mul;
cout <<" \n Enter the First number = ";
cin >> num1;
cout << "\n Enter the Second number = ";
cin >> num2;
mul = num1 * num2;
cout <<"\n Multiplication of two numbers = " << mul;
}
void division()
{
int num1, num2, div = 0;
cout <<" \n Enter the First number = ";
cin >> num1;
cout << "\n Enter the Second number = ";
cin >> num2;
while ( num2 == 0)
     {
     cout << "\n Divisor cannot be zero"
         "\n Please enter the divisor once again: ";
         cin >> num2;
         }
div = num1 / num2;
cout <<"\n Division of two numbers = " << div;
}
void Square()
{
int num1;
float sq;
cout <<" \n Enter a number to find the Square: ";
cin >> num1;
sq = num1 * num1;
cout <<" \n Square of " << num1<< " is : "<< sq;
}
void SquareRoot()
{
float n;
int num;
cout << "\n Enter the number to find the Square Root:";
cin >> num;
n = sqrt(num);
cout <<" \n Square Root of " << num<< " is : "<< n;

}
