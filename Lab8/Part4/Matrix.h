//
//  Matrix.h
//  Lab8
//
//  Created by Francisco Lira on 3/28/22.
//

#ifndef Matrix_h
#define Matrix_h

#include <cstring>
#include <cstddef>
#include <string>
#include <vector>
#include "Sortable.h"

using namespace std;
using std::size_t;

template<class T>

class Matrix : public Sortable<T> {
    public:
    int row, column;

    Matrix(int row, int col){
        this -> row = row;;
        column = col;

    }

    void print() {
        for (size_t i = 0; i < row; i++){
            for (size_t j = 0; j < column; j++){

                cout << this -> at(j + column * i) << " ";
           
            }
            cout << endl;
        }


    }

    bool resize(int row) {
        int elements = this-> row * column;
    
        if (elements % row != 0 ){
            return false;
        }
        
        else {
            this -> row = row;
            column = elements / row;
            return true;
        }


    }




};
#endif
