//
//  vect.h
//  Part1
//
//  Created by Francisco Lira on 3/8/22.
//

#ifndef vect_h
#define vect_h

#include <iostream>
using namespace std;

class Vec {
public:
    float x, y;
    
    const static Vec null; // supposed to be a null vector that represents (0,0)
    
    Vec (){ // default constructor with no inputs
        x = 0.0f;
        y = 0.0f;
    }
    Vec (float x1, float y1){ //constructor with input of 2 cordinates
        x = x1;
        y = y1;
    }
    void add(Vec v){
        x += v.x;
        y += v.y;
    }
    // Vec null();
    void print(){
        cout << "(" << x << "," << y << ") \n";
    }
};
const Vec Vec::null(0.0f,0.0f); // initializing the static null class

#endif /* vect_h */
