//
//  main.cpp
//  Part01
//
//  Created by Francisco Lira on 2/22/22.
//

#include "main.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream file;
    struct Stash s;
    double number;
    
    file.open("input.txt");
    s.initialize(10);
    
    while(!file.eof()){
        file >> number;
        s.add(&number);
    }
    
    file.close();
    
    cout << "Num of elements in stash: " << s.count();

     for(int i = 0; i < s.count() -1 ; i++)
         cout << "\nLine " << i + 1 << " : " << *(double*)s.fetch(i);
    
    cout << "\n";
    
    s.cleanup();
    
    system("pause");
    
    return 0;
    
}
