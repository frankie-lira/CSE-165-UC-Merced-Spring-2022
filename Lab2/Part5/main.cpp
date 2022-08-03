//
//  main.cpp
//  Part5
//
//  Created by Francisco Lira on 2/8/22.
//

#include<iostream>

using namespace std;

int main(){
    double num1,num2;
    double *i,*j;
    
    i =& num1;
    j =& num2;
    
    cout << "Enter the 1st Number: ";
    cin >> num1;
    cout << "Enter the 2nd Number: ";
    cin >> num2;
    
    cout << "Multiply: " << (*i) * (*j) << endl;
    cout << "Addition: " << (*i) + (*j) << endl;
    cout << "Subract: " << (*i) - (*j) << endl;
    cout << "Division: " << (*i) / (*j) << endl;

    return 0;
}
