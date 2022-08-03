//
//  Obj.h
//  Lab11
//
//  Created by Francisco Lira on 4/19/22.
//

#ifndef Obj_h
#define Obj_h

#include "Shared.h"
#include <iostream>

class Obj : public Shared {
public:
    std::string n;
    Obj(std::string name){
        this->n = name;
        std::cout << "New " << this->n << '\n';
    }
    ~Obj(){
        std::cout << "Delete " << this->n << '\n';
    }
};

#endif /* Obj_h */
