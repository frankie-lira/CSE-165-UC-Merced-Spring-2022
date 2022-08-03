//
//  main.cpp
//  Part2
//
//  Created by Francisco Lira on 1/31/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double radius;
    double areaOfCircle;
    double pi = 3.14;
    
    cout << "Enter Radius: ";
    cin >> radius;
    
    areaOfCircle = pi * (radius * radius);
    
    cout << "Area of circle: " << areaOfCircle << "\n";
    return 0;
}
