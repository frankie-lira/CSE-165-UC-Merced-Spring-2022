//
//  animals.hpp
//  Part3
//
//  Created by Francisco Lira on 3/1/22.
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
    
    Animal(string n, int a){
    cout << "Creating Generic Animal" << endl;
    name = n;
    age = a;
    }
    
    void display (const vector<string> & list){
      
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
    
    virtual ~Animal(){
        cout << "Deleting Generic Animal" << endl;
    }
    
    virtual void feed(){
        cout << "Some meal, please!!" << endl;
    }
    
};

#endif /* animals_hpp */
