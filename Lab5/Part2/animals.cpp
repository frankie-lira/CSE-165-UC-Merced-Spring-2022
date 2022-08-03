//
//  animals.cpp
//  Part2
//
//  Created by Francisco Lira on 2/28/22.
//

#include "animals.hpp"
#include "dog.h"
#include <iostream>


using namespace std;

int main(int argc, const char * argv[])
{
    Dog myDog = Dog("Bruno", 4);
    
    cout << myDog.getName() << " is " << myDog.getAge() << " years old." << endl;
    
    myDog.feed();

    return 0;
}
