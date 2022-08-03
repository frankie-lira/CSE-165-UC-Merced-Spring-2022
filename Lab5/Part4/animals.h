//
//  animals.h
//  Part4
//
//  Created by Francisco Lira on 3/1/22.
//

#ifndef animals_h
#define animals_h

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {

private:

    string name;
    int age;
    
    
public:
    
    //added static int count which serves as the counting for the objects created
    static int count;
    
    Animal(){
        cout << "Creating Generic Animal" << endl;
        name = "Generic Animal";
        age = 0;
        
        //count++ increments the number of objects as it cerates one
        count++;
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
