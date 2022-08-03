//
//  Stack.cpp
//  Part5
//
//  Created by Francisco Lira on 3/1/22.
//

#include <iostream>
#include "Stack.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    {
        Stack s1;
        for ( int i=1; i<5; i++ )
            s1.push ( double(i)/2.0 );
    }
    
    
    cout << endl;
    
    {
        Stack s2(4);
    }
    cout<<"end. \n";
    return 0;
}

