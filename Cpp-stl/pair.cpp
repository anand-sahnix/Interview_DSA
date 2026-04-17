// Pair
/*
A pair in C++ combines two values, possibly of different types, into a single entity, 
useful for storing pairs of values with 'first' and 'second' elements accessible, 
often used in data structures like maps.

Pair is a straightforward container defined in the <utility> header, 
comprising two data elements or objects and can also be used by adding <bits/stdc++.h>


#Syntax
*/
Pair<DataType1, DataType2> variableName; // Declaration
variableName.first = value1; // Assigning a value to the first element
variableName.second = value2; // Assigning a value to the second element
/*

In summary, a pair is a convenient way to bundle two different values together 
and is commonly used in situations where you need to associate related data elements
as key-value pairs.



*/
// #Example
#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, double> myPair = {42, 3.14159};  // pair with int and double data types
    pair<int, char> myPair1 = {0, 'a'};  // pair with int and char data types
    pair<int, string> myPair2 = {21, "Hello World"};  // pair with int and string data types

    // Printing the elements
    cout << "1st Pair First Element: " << myPair.first << ", 1st Pair Second Element: " << myPair.second << endl;
    cout << "2nd Pair First Element: " << myPair1.first << ", 2nd Pair Second Element: " << myPair1.second << endl;
    cout << "3rd Pair First Element: " << myPair2.first << ", 3rd Pair Second Element: " << myPair2.second << endl;
    
    // pair with multiple elements
    pair<int, pair<int, int>> nestedPair = {0, {10, 20}};
    cout << "First: " << nestedPair.first << ", Second 1: " << nestedPair.second.first << ", Second 2: " << nestedPair.second.second << endl;
    
    // array of pairs
    pair<int, string> pairs[] = {{1, "One"},{2, "Two"},{3, "Three"}};
    cout << "2nd Pair in Array: First Element: "<< pairs[1].first << "Second Element: " << pairs[1].second << endl;
    
    return 0;
}

// #Explanation
/*
pair<int, double> myPair = {42, 3.14} A pair with an integer and a double, initialized with values 42 and 3.14

pair<int, char> myPair1 = {0, 'a'} A pair with an integer and a character, initialized as 0 and 'a'

pair<int, string> myPair2 = {21, "Hello"} A pair with an integer and a string, initialized with 21 and "Hello"

pair<int, pair<int, int>> nestedPair = {0, {10, 20}} A pair with an integer and a nested pair of integers, initialized with 0, 10, and 20

pair<int, string> pairs[] = {{1, "One"},{2, "Two"},{3, "Three"}} An array of pairs, each containing an integer and a string, initialized with three pairs
*/



