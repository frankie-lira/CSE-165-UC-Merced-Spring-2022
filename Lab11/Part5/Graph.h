//
//  Graph.h
//  Lab11
//
//  Created by Francisco Lira on 4/19/22.
//

#ifndef Graph_h
#define Graph_h

#include "Vertex.h"

using namespace std;

class Graph {
public:
    
    /*! A collection of vertices */
    vector<Vertex*> items;
    
    /*! A method to add a vertex to the items vector */
    void add(Vertex* d){
        //insert your code here
        d -> ref();
        this->items.emplace_back(std::move(d));
        
    }
    
    /*! A method to display the graph as pairs of vertices */
    void print (){
        //insert your code here
        for(int i = 0; i < this -> items.size() - 1; i++){
            if(i % 2 == 0)
                std::cout << this -> items[i] -> getLabel() << " - " << this -> items[i + 1] -> getLabel() << '\n';
        }
        
    }
    
    /*! A method to free up all the space taken up by the graph */
    void deleteAll(){
        //insert your code here
        for(auto& v : this->items){
            v->unref();
            
        }
        
    }
};

#endif /* Graph_h */
