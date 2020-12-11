/* Header
File: util.cpp
Brief Description: functions implementation file for Lab 10.1 for CSI-230-01
Author: Courtney Grimes
Due Date: November 09, 2020
Credits: C++ Crash Course by Josh Lospinoso
*/ 

#include "util.h"
#include <iostream>

string randomElement(vector<string> monthVec)
{
    srand (time(0));
    return monthVec[rand()%monthVec.size()];
}

double sum(vector<double> doubleVec)
{
    double sum = 0.0;
    for(double n : doubleVec)
    {
        sum += n;
    }
    return sum; 
}

double avg(vector<double> doubleVec)
{
   double sum = 0.0;
    for(double n : doubleVec)
    {
        sum += n;
    }
    return sum / double(doubleVec.size());
}

double lowest(vector<double> doubleVec)
{
   double lowest = doubleVec[0];
    for(double n : doubleVec)
    {
        if(n < lowest)
            lowest = n;
    }
    return lowest;
}

string camelCase(string quoteByDumbledore)
{
    // variable to store the new camel case string in
    string caseChange = "";
    const char * space = " ";
    // changes first letter in the string to lowercase
    caseChange += tolower(quoteByDumbledore[0]); 
    for(int i = 1; i < quoteByDumbledore.length(); i++)
    {
        // checks for spaces within the string
        if(quoteByDumbledore[i] == ' ')
        {
            // if there was a space, converts the first letter after the space to uppercase
            quoteByDumbledore[i+1] = toupper(quoteByDumbledore[i+1]);
        }
        else
        {
            // if no space, copies character
            caseChange += quoteByDumbledore[i];
        }
    }
    return caseChange;
}