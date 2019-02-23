/******************************************************************
*
*   File:        prog.cc
*
*   Author:      Johnathan Bachtel
*
*   Date:        2/23/2019
*
*   Description: This program will take a length in meters and 
*                centimeters from a user input and convert that
*                to feet and inches  
*
******************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

//Function prototype
void metricToEnglish(int meters, int centimeters, double &feet, double &inches);

// Main Program
int main()
{

// Variables
int meters, centimeters;
double feet, inches;

// Prompt to enter variable
cout << "Enter the length in meters: ";
cin >> meters;
cout << "Enter the length in centimeters: ";
cin >> centimeters;

// Lengths before converting to metric
cout << ":::: Before converting ::::" << endl;
cout << "meters = " << meters << endl;
cout << "centimeters = " << centimeters << endl;

// Minor formatting
cout << endl;
cout << endl;

// Function call
metricToEnglish(meters, centimeters, 
                feet, inches);

// Lengths after converting to metric
cout << ":::: After converting ::::" << endl;
cout << "feet = " << feet << endl;
cout << "inches = " << inches << endl;

// Minor formatting
cout << endl;
cout << endl;

return 0;
}    


// Function
void metricToEnglish(int meters, int centimeters, double &feet, double &inches){

// Arithmetic to convert
feet = meters * 3.281;
inches = centimeters / 2.54;

}
