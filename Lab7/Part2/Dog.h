//
//  Dog.h
//  Part2
//
//  Created by Francisco Lira on 3/14/22.
//

#ifndef Dog_h
#define Dog_h

#include "Animal.h"

class Dog : public Animal {

public:
    
    Dog () : Animal(){}
    
    Dog (string n, int a) : Animal(n, a){}
    
    void talk(){
        cout << "Woof, woof!" << endl;
    }
};

#endif /* Dog_h */
