//
//  main.cpp
//  Part3
//
//  Created by Francisco Lira on 3/14/22.
//

#include <iostream>
#include "Object.h"

using namespace std;

int Object::count = 0;

Object f(Object someObject){
    return someObject;
}

int main(int argc, const char * argv[])
{
    
    Object myObject;
    
    Object another = f(myObject);
    
    cout << another.count << endl;
    return 0;
}
