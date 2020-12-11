/* File Header
File: util.h
Brief Description: A simple header for Lab 10.1 for CSI-230-01
Author: Courtney Grimes
Due Date: November 09, 2020
Credits: 
*/ 

//header guard
#ifndef UTIL_H 
#define UTIL.H 

#include <vector>
#include <string>
using namespace std;

//forward declaration 
string randomElement(vector<string> monthVec);

/*
Brief Description: Returns a random element from a vector
Paramaters: vector<string> monthVec (vector to extract random element from)
Returns: string (random element from vector)
Credits: C++ Crash Course by Josh Lospinoso
*/

//forward declaration 
double sum(vector<double> doubleVec);

/*
Brief Description: Returns the sum of all the elements within a vector
Paramaters: vector<double> doubleVec (vector to extract elements from)
Returns: double (sum of all elements from vector)
Credits: 
*/

//forward declaration 
double avg(vector<double> doubleVec);

/*
Brief Description:  Returns the average of all the elements within a vector
Paramaters: vector<double> doubleVec (vector to extract elements from)
Returns: double (average of all elements from vector)
Credits: 
*/

//forward declaration 
double lowest(vector<double> doubleVec);

/*
Brief Description: Returns the lowest number of all the elements within a vector 
Paramaters: vector<double> doubleVec (vector to extract elements from)
Returns: double (lowest of all elements from vector)
Credits: 
*/

//forward declaration 
string camelCase(string quoteByDumbledore);

/*
Brief Description: Converts and returns a string in camel case
Paramaters: string quoteByDumbledore (string to convert to camel case)
Returns: string (string converted to camel case)
Credits: https://www.geeksforgeeks.org/camel-case-given-sentence/
*/

//ends the definition
#endif
