//
//  main.cpp
//  Part1
//
//  Created by Francisco Lira on 3/14/22.
//

#include <iostream>
#include "refs.h"

using namespace std;

int main(int argc, char* args[])
{
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    triple(num);
    
    cout << num << endl;
    
    return 0;
}
