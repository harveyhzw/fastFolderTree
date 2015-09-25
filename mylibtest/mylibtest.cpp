// mylibtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "functions.h"
#include <iostream>

using namespace std;
using namespace Funcs;

int main()
{
    double a = 7.4;
    int b = 99;

    cout << "a + b = " <<
        MyMathFuncs::Add(a, b) << endl;
    cout << "a - b = " <<
       MyMathFuncs::Subtract(a, b) << endl;
    cout << "a * b = " <<
        MyMathFuncs::Multiply(a, b) << endl;
    cout << "a / b = " <<
       MyMathFuncs::Divide(a, b) << endl;

    try
    {
        cout << "a / 0 = " <<
            MyMathFuncs::Divide(a, 0) << endl; 
    }
    catch (const invalid_argument &e) 
    {
        cout << "Caught exception: " << e.what() << endl; 
    }

    return 0;
}
