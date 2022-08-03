//
//  ADT.h
//  Part1
//
//  Created by Francisco Lira on 3/28/22.
//

#ifndef ADT_h
#define ADT_h

#include <iostream>

using namespace std;
class ADT {
    
public:
    virtual void doSomething() = 0;
    virtual void doSomethingElse() = 0;
    virtual void dontDoThis() = 0;
};

class Derived: public ADT {
    
public:
    void dontDoThis() {
        cout<<"Dont Do This"<<endl;
    }
    void doSomethingElse() {
        cout<<"Do Something Else"<<endl;
    }
    void doSomething() {
        cout<<"Do Something"<<endl;
    }
};


#endif /* ADT_h */
