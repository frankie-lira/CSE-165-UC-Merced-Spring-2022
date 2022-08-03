//
//  main.cpp
//  Part3
//
//  Created by Francisco Lira on 4/19/22.
//

#include <iostream>
#include "Counter.h"

int Counter::count = 0;

int main(int argc, const char * argv[])
{
    Counter * myCounter = new Counter [5];
    Counter * anotherCounter = new Counter [3];
    //    Counter * myCounter = new Counter [8];
    //
    //    Counter * anotherCounter = new Counter [6];
    
    delete [] myCounter;
    
    delete [] anotherCounter;
    
    return 0;
}
