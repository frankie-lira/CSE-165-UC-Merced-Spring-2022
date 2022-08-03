//
//  main.cpp
//  Part4
//
//  Created by Francisco Lira on 3/28/22.
//
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "Sortable.h"
#include "Matrix.h"

using namespace std;
using std::size_t;

int main(){
    int row, column;

    //vector<int> arr;

    cout << "Enter the row size: ";
    cin >> row;
    cout << "Enter the column size: ";
    cin >> column;
    

    Matrix<int> vec1(row, column);
    Matrix<char> vec2(row, column);
    
    for (int i = 0; i < row*column; i++){
        int ran = rand() % 10 + 1;
        vec1.push_back(ran);
       // cout << vec1[i] << endl;
        char ranChar = rand() % 26 + 97;
        vec2.push_back(ranChar);
    }

    cout << "Before Sort: " << endl;
    vec1.print();
    cout << "\n" ;
    vec2.print();
    
    vec1.sort();
    cout << "\n" ;
    vec2.sort();

    cout << "After Sort: " << endl;
    vec1.print();
    
    cout << "\n" ;
    vec2.print();
    cout << endl;
    cout << "Enter new row number: ";
    cin >> row;
    
    if (vec1.resize(row)){
        
        vec1.print();
    }
    cout << endl;
    if (vec2.resize(row)){
         vec2.print();
        

    }
}
