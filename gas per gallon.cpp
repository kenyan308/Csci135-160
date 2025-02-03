// Name: Kenyan Dunkley
// Description: This program calculates the miles per gallon a car gets.
// Date: 2/1/2019
// Instructor: Tong Yi

#include <iostream>
using namespace std;
int main() 
{
    double miles;
    double gallons;
    double cost;
    double mpg;
    cout << "Enter the number of miles driven: ";
    cin >> miles;
    cout << "Enter the number of gallons used: ";
    cin >> gallons;
    mpg = miles / gallons;
    cout << "Enter the cost per gallon: ";
    cin >> cost;
    cout << "The cost per 100 miles is: " << (100.0 / mpg) * cost << endl;
    cout << "The cost per 100 miles is: " << (100.0 / mpg) * cost << endl;
    return 0;
}
