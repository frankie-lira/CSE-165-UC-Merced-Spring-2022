//
//  main.cpp
//  Part2
//
//  Created by Francisco Lira on 2/6/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int integer = 1;
    
    while(integer != 0){
        
    cout << "Enter an Integer: ";
    cin >> integer;
        
        if (integer != 0){
            if (integer > 0)
                cout << "POSITIVE \n";
            else
                cout << "NEGATIVE \n";
            
            if (integer % 2 == 0)
                cout << "EVEN \n";
            else
                cout << "ODD \n";
        }
        else{
            return 0;
            
        }
    }
}

