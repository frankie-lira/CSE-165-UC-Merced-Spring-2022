//
//  Vertex.h
//  Lab11
//
//  Created by Francisco Lira on 4/19/22.
//

#ifndef Vertex_h
#define Vertex_h

#include "Shared.h"

using namespace std;

class Vertex : public Shared {
    string label;
    double data[1000000];
    
public:
    
    /*! Constructor prints out the label after vertex is initialized */
    Vertex(string l){
        label = l;
        for (int i = 0; i < 1000000; i++) {
            data[i] = i;
        }
        cout << "Creating " << label << endl;
    }
    
    /*! Accessor method for the label of the vertex */
    string getLabel(){
        return label;
    }
    
    /*! Destructor prints out the label of the vertex when deleting */
    ~Vertex(){
        cout << "Deleting " << label << endl;
    }
};

#endif /* Vertex_h */
