//
//  animals.cpp
//  Part3
//
//  Created by Francisco Lira on 3/1/22.
//

#include "animals.hpp"
#include "dog.h"
#include "display.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    int num;
    //receives number of objects
    cin >> num;
    
    string type, name;
    int age;
    
    //animal vector
    vector<Animal*> animalVector;
    
    for(int i = 0; i < num; i++){
        cin >> type >> name >> age;
        
        if(type == "A"){
            animalVector.push_back(new Animal(name, age));
        }
        
        else{
            animalVector.push_back(new Dog(name, age));
        }
    }
    
    display(animalVector);
    
    
    return 0;
}
