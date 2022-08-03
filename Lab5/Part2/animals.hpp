//
//  animals.hpp
//  Part2
//
//  Created by Francisco Lira on 2/28/22.
//

#ifndef animals_hpp
#define animals_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
    string name;
    int age;
    
    
public:
    
    Animal(){
        cout << "Creating Generic Animal" << endl;
        name = "Generic Animal";
        age = 0;
    }
    
    void display (const vector<Animal*> & list){
        
    }
    
    string getName(){
        return name;
    }
    
    void setName(string name){
        this->name = name;
    }
    
    int getAge(){
        return age;
    }
    
    void setAge(int age){
        this->age = age;
    }
    
    ~Animal(){
        cout << "Deleting Generic Animal" << endl;
    }
    
    void feed(){
        cout << "Some meal, please!!" << endl;
    }
    
};

#endif /* animals_hpp */
