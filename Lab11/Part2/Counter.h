//
//  Counter.h
//  Lab11
//
//  Created by Francisco Lira on 4/19/22.
//

#ifndef Counter_h
#define Counter_h

#include <iostream>

using namespace std;

class Counter{
public:
    static int count;
    int ID;
    
    Counter():ID(count++){
        cout << this -> ID << " created\n";
    }
    
    ~Counter(){
        cout << this->ID << " destroyed\n";
    }
    
    void* operator new(size_t sz){
        cout << "new\n";
        
        void* mem = malloc(sz);
        return mem;
    }
    
    void operator delete(void* mem){
        cout << "delete\n";
        free(mem);
    }
};

#endif /* Counter_h */
