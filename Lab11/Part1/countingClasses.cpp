//
//  main.cpp
//  Part1
//
//  Created by Francisco Lira on 4/19/22.
//

#include <iostream>
#include "Counter.h"

int Counter::count = 0;

int main(int argc, const char * argv[]){
    Counter * myCounter = new Counter;
    Counter * anotherCounter = new Counter;
    
    
    delete myCounter;
    delete anotherCounter;
    
    return 0;
}
