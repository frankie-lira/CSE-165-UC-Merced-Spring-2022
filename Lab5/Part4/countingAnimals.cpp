//
//  countingAnimals.cpp
//  Part4
//
//  Created by Francisco Lira on 3/1/22.
//

#include "animals.h"
#include <iostream>


using namespace std;

int Animal::count = 0;

int main(int argc, const char * argv[]){
    
    Animal animalOne;
    Animal animalTwo;
    Animal animalThree;
    
    cout << Animal::count << endl;
    return 0;
}
