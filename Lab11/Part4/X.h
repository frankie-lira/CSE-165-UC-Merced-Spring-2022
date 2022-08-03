//
//  X.h
//  Lab11
//
//  Created by Francisco Lira on 4/19/22.
//

#ifndef X_h
#define X_h

#include "Obj.h"

class X {
public:
    Obj* o;
    
    X(Obj*pt) {
        o=pt; o->ref();
    }
    
    ~X() {
        o->unref();
    }
};


#endif /* X_h */
