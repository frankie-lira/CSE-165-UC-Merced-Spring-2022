//
//  main.cpp
//  Part02
//
//  Created by Francisco Lira on 2/22/22.
//

#include "main.hpp"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
//int main(){
//    ifstream file;
//    struct Stack s;
//    float number;
//
//    file.open("input.txt");
//    s.initialize();
//
//    while(!file.eof()){
//        file >> number;
//        s.push(&number);
//    }
//
//    file.close();
//
//    cout << "Amount of elements in the stack: " << number;
//
//
//   cout << "\n";
//
//    file.close();
//
//}

#include<iostream>
#include<fstream>
#include<string>
#include "main.hpp"

using namespace std;

int main() {
    Stack s;
    s.initialize();
    
    ifstream infile;
    infile.open("input.txt");
    
    if(!infile){
        cout << "The requested file was not Found" << endl;
    }
    
    double k ;
    int count = 0;
    
    while(infile >> k){
        double *d = new double(k);
        s.push(d);
        ++count;

    }
    
    while(count > 0){
        cout << (*((double *)(s.pop()))) <<" ";
        --count;
    }
    
    cout << endl;
    s.cleanup();
    
}

