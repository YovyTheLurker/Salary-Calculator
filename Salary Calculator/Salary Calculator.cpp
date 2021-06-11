// Salary Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{ //This fisrt part will calculate monthyly income based on annual salary
    float annualSalary;
    cout << "Please enter your annual salary ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is ";

    //This part will calculate how much user will accumulate in 10 years based on input

    cout << "In ten years, you will earn " << annualSalary * 10;

    system("pause>0");
}
