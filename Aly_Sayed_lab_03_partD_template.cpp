/*

Read the accompanying PDF for instructions

Programmer : Aly Sayed
    Date       : 01/31/2017
    Project 1  : Lab 3, program A
    TA Info    : Aida aghaziz@cs.odu.edu
Description: Write a program that prompts the user to
 input values for radius & height. The program then calclulates surface area and volume
 of a sphere and of a spherical cap on the sphere.
(A)  User input is captured from the user defined input file
    ,and results are written to the screen and to the custom named file.
(B)  User input is captured from the keyboard, and a decision
     structure is implemented to insure that the user input is
     neither zero or negative values/.

 Implement the above programs for credit, and then create two more versions
 of the program to submit for credit:

(C) Implement a for-loop, so that program A runs three
 times before exiting. Save this version as

(D) Implement a do-while loop in program B, so that the program runs once,
 and then prompts the user to enter a choice as to whether
 they would like to continue or not. Save this version as

*/

#include <iostream>     // input and output functionality
#include <fstream>      // for input and output files
#include <iomanip>      // output formatting
#include <cmath>        // math functions
#include <string>

using namespace std;

const double PI  = 3.1415926535897932;

int main()
{
/// (1) output progam information
    cout << "*************************************\n";
	cout << "* LAB Three cs150~Spring~2017 LAB 3 *\n";
	cout << "*      PART A B C D                 *\n";
	cout << "* Author: Aly Sayed                 *\n";
	cout << "* TA Name:     aida               ? *\n";
	cout << "* TA Email:  agaziz@cs.odu.edu    ? *\n";
	cout << "* Program Description:              *\n";
    cout << "*                                   *\n"
            "*                                   *\n"
            "*                                   *\n"
            "*                                   *\n";
	cout << "*************************************\n";


/// (2)  variable declarations

double radius;
double height;
double volume_sphere;
double area_sphere;
double volume_cap;
double area_cap;
char flag= 'Z';


do{



/// (3) prompt user for input values for radius, height



//open and validate output file


    // (a) prompt for radius
cout << "What is the radius" << endl;
cin  >> radius;


    // (b) prompt for height
cout << "What is the height" << endl;
cin >> height;

/// (x) Calculate ODU NOODULE:

 if (radius <=0 || height <=0 ){

    cout << "Error! You entered a number lesws than zero " << endl;
    return 1;

 }

volume_sphere  = 4/3*PI*(pow(radius, 3));

/// (x) Calculate ODU NOODULE:

area_sphere  = 4*PI*(pow(radius,2));

/// (x) Cap:

volume_cap  = 1.0/3.0*PI*pow(height,2)*(3*radius-height);

/// (x) Cap:

area_cap  = 2*PI*radius*height;

cout << scientific;

cout << "Volume of the sphere: " << volume_sphere << endl;

cout << "Surface area of the sphere: " << area_sphere << endl;

cout << "Do you want to continue? (Y/N)" <<endl;
cin >> flag;
}while(flag=='Y');


    cout <<"\n\n";
    return 0;
}
///========================================================================
