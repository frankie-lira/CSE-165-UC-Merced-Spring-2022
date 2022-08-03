//
//  Object.h
//  Part3
//
//  Created by Francisco Lira on 3/14/22.
//

#ifndef Object_h
#define Object_h

// Defines class Object
class Object{
public:
    // Static data member to count number of objects
    
    static int count;
    // Default constructor to increase the object count
    Object(){
        count++;
    }
    
    // Copy constructor to increase the object count
    // takes object as reference
   Object(const Object &someObject){
       count = ++someObject.count;
    }
};

#endif /* Object_h */
