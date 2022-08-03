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
        std::cout << this -> ID << " created\n";
    }
    
    ~Counter(){
        std::cout << this->ID << " destroyed\n";
    }
    
    void* operator new[](size_t sz){
        //std::cout << "new " << (sz / sizeof(Counter)) - 2  << " starting at " << count << '\n';
        cout << "new " << (sz / sizeof(Counter)) - 2  << " counters starting at " << count << '\n';
        void* mem = std::malloc(sz);
        return mem;
        
    }
    
    void operator delete[](void* mem){
        cout << "delete counters\n";
        free(mem);
    }
};

#endif /* Counter_h */

