//
//  main.cpp
//  Part03
//
//  Created by Francisco Lira on 2/22/22.
//

#include "main.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream infile("input.txt");
    
    LinkedList list;
    list.initialize();
    float input;
    
    while(infile>>input){
     
        float* f=new float(input);
     
        list.add(f);
    }
    
    for(int i=0;i<list.size;i++){
                float* f=(float*)(list.get(i));
                cout<<*f<<" ";
        }
        cout<<endl;
    
        for(int i=0;i<list.size;i++){
                delete (float*)list.get(i);
        }
    
        list.cleanup();
        return 0;
}
