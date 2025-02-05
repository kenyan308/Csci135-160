// Name: Kenyan Dunkley
// Description: This program calculates the miles per gallon a car gets.
// Date: 2/1/2019
// Instructor: Tong Yi

#include <iostream>
using namespace std;
int main() 
{
   // double miles;
    double gallons;
    double cost;
    double mpg;
    double price;
    double distance;
    
    //cout << "Enter the number of miles driven: ";
    //cin >> miles;
    cout << "Enter the number of gallons used: ";
    cin >> gallons;
    //mpg = miles / gallons 
    cout << "Enter the number of miles per gallons: ";
    cin >> mpg;
    cout << "Enter the price per gallons: ";
    cin >> price;
    cost = (100.0/ mpg) * price;
    cout << "The cost per 100 miles is: " << cost << endl;
    distance = gallons * mpg;
    cout << "The distance per 100 miles is: " << distance << endl;
    return 0;
}

