/* Header
File: main.cpp
Brief Description: driver file for Lab 10.1 for CSI-230-01
Author: Courtney Grimes
Due Date: November 09, 2020
Credits: Devin Paden,  C++ Crash Course by Josh Lospinoso
*/ 

#include <iostream>
#include <vector>
#include "util.h"
using namespace std;

int main()
{
    // String Vectors
    vector <string>  monthVec;
    monthVec.push_back("January");
    monthVec.push_back("Feburary");
    monthVec.push_back("March");
    monthVec.push_back("April");
    monthVec.push_back("May");
    monthVec.push_back("June");
    monthVec.push_back("July");
    monthVec.push_back("August");
    monthVec.push_back("September");
    monthVec.push_back("October");
    monthVec.push_back("November");
    monthVec.push_back("December");

   cout << "\n";
   cout << "The String Vector Elements are: ";
   for(int i = 0; i < monthVec.size(); i++)
    {
        cout << monthVec[i] << " ";  
    }
    cout << endl;

    // Function randomElement
    cout << "\n";
    cout << randomElement(monthVec) << ", was randomly selected from the String Vector Elements!" << endl;

    // Double Vectors
    vector <double>  doubleVec;
    doubleVec.push_back(3.14);
    doubleVec.push_back(1.77);
    doubleVec.push_back(2.71);
    doubleVec.push_back(1.64);
    doubleVec.push_back(1.61);

   cout << "\n";
   cout << "The Double Vector Elements are: ";
   for(int i = 0; i < doubleVec.size(); i++)
    {
        cout << doubleVec[i] << " ";  
    }
    cout << endl;

    // Function sum
    cout << "\n";
    cout <<  sum(doubleVec) << " is the sum of the Double Vector Elements!" << endl;

    // Function avg
    cout << "\n";
    cout <<  avg(doubleVec) << " is the average of the Double Vector Elements!" << endl;

    // Function lowest
    cout << "\n";
    cout <<  lowest(doubleVec) << " is the lowest of the Double Vector Elements!" << endl;

    // Multi-word String
    string quoteByDumbledore = "Happiness can be found, even in the darkest of times, if one only remembers to turn on the light!";
    cout << "\n";
    cout << "The multi-word string before camel case is applied is: " << quoteByDumbledore << endl;
    
    // Function camelCase
    cout << "\n";
    cout <<  camelCase(quoteByDumbledore) << " is the multi-word string after camel case is applied!" << endl;

}