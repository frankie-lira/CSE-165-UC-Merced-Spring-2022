//
//  Animal.h
//  Part2
//
//  Created by Francisco Lira on 3/14/22.
//

#ifndef Animal_h
#define Animal_h

#include <iostream>

using namespace std;

class Animal {
    string name;
    int age;
    
public:
    
    Animal(){
        name = "Generic Name";
        age = 0;
    }
    
    Animal(string n, int a){
        name = n;
        age = a;
    }
    
    virtual void talk(){} //added the virtual void function
    
};


#endif /* Animal_h */
