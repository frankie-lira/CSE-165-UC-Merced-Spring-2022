//
//  circles.cpp
//  Part1
//
//  Created by Francisco Lira on 2/28/22.
//

#include "circles.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]){
    Circle myCircle;
    
    cout << "Center:\t(" << myCircle.getX() << ", " << myCircle.getY() << ")" << endl;
    cout << "Radius:\t" << myCircle.getR() << endl;
    cout << "Area:\t" << myCircle.area << endl;
    
    myCircle.setX(1);
    myCircle.setY(2);
    myCircle.setR(3);
    
    cout << endl;
    
    cout << "Center:\t(" << myCircle.getX() << ", " << myCircle.getY() << ")" << endl;
    cout << "Radius:\t" << myCircle.getR() << endl;
    
    return 0;
}
