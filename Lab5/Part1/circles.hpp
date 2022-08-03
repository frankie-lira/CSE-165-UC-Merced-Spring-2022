//
//  circles.hpp
//  Part1
//
//  Created by Francisco Lira on 2/28/22.
//

#ifndef circles_hpp
#define circles_hpp

#include <stdio.h>
//#define pi 3.14

class Circle{
//Private Varibles
private:
    double x, y, r;
    
//Public variables
public:
    double pi = 3.14159;
    double area;

//(1st Constructor) default constructor, no arguments
    Circle(){
        x = 0.0;
        y = 0.0;
        r = 1.0;
        area = pi * r * r; //area calculation
    }

//(2nd Constructor) parameterised constructor
    Circle(double a, double b, double radius){
        x = a;
        y = b;
        r = radius;
        area = pi * r * r; //area calculation
    }

//setter methods
    void setX(double x){
        this -> x = x;
    }
    
    void setY(double y){
        this -> y = y;
}
    void setR(double r){
        this -> r = r;
}

//getter methods
    double getX(){
        return x;
    }
    
    double getY(){
        return y;
    }
    
    double getR(){
        return r;
    }
};

#endif /* circles_hpp */
