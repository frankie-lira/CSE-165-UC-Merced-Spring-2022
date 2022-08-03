//
//  display.hpp
//  Part3
//
//  Created by Francisco Lira on 3/1/22.
//

#ifndef display_hpp
#define display_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

#include "animals.hpp"

using namespace std;


void display (const vector<Animal*> &list){
    for (int i = 0; i < list.size(); i++) {
        cout << list[i] -> getName() << endl;
        
    }
    
}

#endif /* display_hpp */
