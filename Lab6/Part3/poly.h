//
//  poly.h
//  Part3
//
//  Created by Francisco Lira on 3/8/22.
//

#ifndef poly_h
#define poly_h

#include <iostream>
using namespace std;

class Vec { // 1) imported Vec class to obtain the same vector components
public:
    float x, y;
    //Vec vec1,vec2,vec3,vec4;
    const static Vec null; // supposed to be a null vector that represents (0,0)
    // contructors
    Vec (){ // default
        x = 0.0f;
        y = 0.0f;
    }
    Vec (float x1, float y1){
        x = x1;
        y = y1;
    }
    void add(Vec v){
        x += v.x;
        y += v.y;
    }
    // Vec null();
    void print(){
        cout << "(" << x << "," << y << ")";
    }
};

class Rect  {
public:
    // Vec a,b,c,d
    Vec vec1,vec2,vec3,vec4; // added, rectangles have four sides aka four vectors with their own components
    float y,x,width,length;
    Rect (float x1, float y1, float width1, float length1){ // recieving the floats that define the rectangle
        vec1.x = x1;
        vec1.y = y1;
        
        vec2.x = x1 + width1;
        vec2.y = y1;
        
        vec3.x = x1 + width1;
        vec3.y = y1 - length1;
        
        vec4.x = x1;
        vec4.y = y1 - length1;
    }
    
    void print (){
        vec1.print();
        vec2.print();
        vec3.print();
        vec4.print();
    }
    
    bool contains (Vec v){
        float x = v.x;// identifying vector v components in order to check
        float y = v.y;
        float a1,b1,a2,b2,a3,b3,a4,b4;
        a1 = vec2.x; b1 = vec2.y;
        a2 = vec3.x; b2 = vec3.y;
        a3 = vec4.x; b3 = vec4.y;
        a4 = vec1.x; b4 = vec1.y;
        return check(a1,b1,a2,b2,a3,b3,a4,b4,x,y);
    }
    
    float area(float a1,float b1,float a2,float b2,float a3,float b3){
        float area = (a1 * (b2-b3) + a2 * (b3 - b1) + a3 * (b1-b2)) / 2.0;
        if (area < 0.0f){
            area *= -1.0f;
        }
        return area;
    }
    
    bool check(float a1,float b1,float a2,float b2,float a3,float b3, float a4, float b4, float x, float y){
        float A = area(a1,b1,a2,b2,a3,b3) + area(a1,b1,a4,b4,a3,b3);
        
        float A1 = area(x,y,a1,b1,a2,b2);
        float A2 = area(x,y,a2,b2,a3,b3);
        float A3 = area(x,y,a3,b3,a4,b4);
        float A4 = area(x,y,a1,b1,a4,b4);
        return(A == A1 + A2 + A3 + A4);
        
    }
    /* void contains (){
     if (Vec v) // a given vec is inside or outside
     
     } */
    
};

class RectStash {
    int size;      // Size of each space
    int quantity;  // Number of storage spaces
    int next;      // Next empty space
public:
    RectStash(){
        initialize(sizeof(Rect));
    }
    
    void** storage;
    
    
    void initialize(int sz){
        size = sz;
        quantity = 0;
        storage = 0;
        next = 0;
    }
    
    void cleanup(){
        if(storage != 0) {
            std::cout << "freeing storage" << std::endl;
            delete []storage;
        }
    }
    
    int add(void* element){
        const int inflateSize = 10;
        if(next >= quantity)
            inflate(100);
        storage[next++] = element;
        return(next - 1); // Index number
    }
    
    void* fetch(int index){
        // Check index boundaries:
        assert(0 <= index);
        if(index >= next)
            return 0; // To indicate the end
        // Produce pointer to desired element:
        return storage[index];
        //return &(storage[index * size]);
    }
    
    int count() {
        return next; // Number of elements in CStash
    }
    
    void inflate(int increase){
        assert(increase > 0);
        
        int newQuantity = quantity + increase;
        int newBytes = newQuantity * size;
        int oldBytes = quantity * size;
        void** b = new void*[newBytes];
        
        for(int i = 0; i < oldBytes; i++)
            b[i] = storage[i];
        
        delete []storage;
        storage = b;
        quantity = newQuantity;
    }
};

/*
 public:
 int size;
 int quantity;
 int next;
 void** storage; // storing void pointers bc they can hold anything
 RectStash(){
 initialize(sizeof(Rect));
 }
 ~RectStash();*/


#endif /* poly_h */
