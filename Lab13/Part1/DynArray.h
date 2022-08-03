//
//  DynArray.h
//  Lab13
//
//  Created by Francisco Lira on 5/2/22.
//

#ifndef DynArray_h
#define DynArray_h

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class DynArray{
private:
    vector<T> arr;
public:
    DynArray(){}
    
    void add(T num){
        this->arr.push_back(num);
    }
    
    T operator[](int index){
        return this->arr[index];
    }
    
    int size(){
        return this->arr.size();
    }
};


#endif /* DynArray_h */
