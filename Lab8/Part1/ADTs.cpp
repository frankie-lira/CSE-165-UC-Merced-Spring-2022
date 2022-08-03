//
//  main.cpp
//  Part1
//
//  Created by Francisco Lira on 3/28/22.
//

#include <iostream>
//#include "Derived.h"
#include "ADT.h"

using namespace std;

int main(int argc, const char * argv[]){
    
    ADT * someVar = new Derived;
    someVar -> doSomething();
    someVar -> doSomethingElse();
    
    return 0;
}

