//
//  dog.h
//  Lab5
//
//  Created by Francisco Lira on 2/28/22.
//

#ifndef dog_h
#define dog_h


#include <iostream>
#include "animals.hpp"

using namespace std;

class Dog : public Animal{
    
public:
    
    Dog(){
        cout << "Creating Dog" << endl;
    }
    
    Dog(string name, int age){
        cout << "Creating Dog" << endl;
        
        setName(name);
        setAge(age);
    }
    
    ~Dog(){
        cout << "Deleting a Dog" << endl;
    }
    
    void feed(){
        cout << "A small bone, please!" << endl;
    }
    
};

#endif /* dog_h */
