//
//  Cat.h
//  Part2
//
//  Created by Francisco Lira on 3/14/22.
//

#ifndef Cat_h
#define Cat_h


#include "Animal.h"

class Cat : public Animal {
public:
    
    Cat() : Animal(){}
    
    Cat (string n, int a) : Animal(n, a){}
    
    void talk (){
        cout << "Meow, meow!" << endl;
    }
};


#endif /* Cat_h */
