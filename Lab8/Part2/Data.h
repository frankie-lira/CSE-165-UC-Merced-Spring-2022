//
//  Data.h
//  Part2
//
//  Created by Francisco Lira on 3/28/22.
//

#ifndef Data_h
#define Data_h

#include <iostream>
#include <vector>

using namespace std;

class Data{
private:
    vector<int> arr;
    
public:
    void add(int num){
        arr.push_back(num);
        
    }
    
    void sort(){
        int j, temp;
        for (int i = 0; i < arr.size(); i++){
            j = i;
            while (j > 0 && arr[j] < arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
    }
    
    void print(){
        
        for(int i=0;i<arr.size();i++)
            cout<<arr[i]<<" ";
        cout<<'\n';
    }
};

#endif /* Data_h */
