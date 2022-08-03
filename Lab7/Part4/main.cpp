//
//  main.cpp
//  Part4
//
//  Created by Francisco Lira on 3/14/22.
//

#include <iostream>
#include "Object.h"

using namespace std;

int Object::count = 0;

Object f(Object someObject){
    return someObject;
    // decrement the parameter object's count by 1 before returning it
      // so that the object's count is not increased because of the passed object
//      someObject.count--;
//      return someObject;
}

int main(int argc, const char * argv[])
{
    
    Object *myObject;
    
    Object another = f(*myObject);
    
    cout << another.count << endl;
    return 0;
}
