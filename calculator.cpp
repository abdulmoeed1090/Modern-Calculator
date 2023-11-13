#include <iostream>
#include <cmath>
using namespace std;

// check operator function
bool checkopr(char opr)
{

    if (opr == '+' || opr == '-' || opr == '*' || opr == '/')
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* Addition function */
double add(double tre1, double tre2)
{
    return (tre1 + tre2);
}

/* subtract function */
double subtract(double num1, double num2)
{
    return (num1 - num2);
}

/* multiply function */
double multiply(double num1, double num2)
{
    return (num1 * num2);
}

/* divide function */
double divide(double num1, double num2)
{
    return (num1 / num2);
}
string armStrongNumbers(double num1, double num2)
{
    // variables
    int last, mid, first, a;
    // using for-loop
    for (int i = 99; i <= 999; i++)
    {
        a = i;
        last = a % 10;
        a = a / 10;
        mid = a % 10;
        a = a / 10;
        first = a % 10;
        if (((first * first * first) + (last * last * last) + (mid * mid * mid)) == i)
        {
            cout << i;
        }
    }
    return " is the armstrong number between 99-999 is:";
}
int binaryToDecimal(int num1, int num2, int num3)
{
    int decimal = 0;
    decimal = decimal + (num3 * pow(2, 0));
    decimal = decimal + (num2 * pow(2, 1));
    decimal = decimal + (num1 * pow(2, 2));

    return decimal;
}

// function to check wether the input is binary or not
int checkBinaryInput(int num1, int num2, int num3)
{
    if ((num1 == 0 || num1 == 1) && (num2 == 0 || num2 == 1) && (num3 == 0 || num3 == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int choice ;
    cout << "Welcome to calculator:\nEnter 1 for addition\nEnter 2 for subtraction\nEnter 3 for mulitiplication\nEnter 4 for checking armstrong number\nEnter 5 for binary to decimal conversion...\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }
}
