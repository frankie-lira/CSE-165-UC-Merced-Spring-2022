//
//  main.cpp
//  Part5
//
//  Created by Francisco Lira on 2/15/22.
//

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<string>> V(10);
    string input;
    
    int temp = 0;
    
    cout << "Enter Strings: \n";
    cin >> input;
    
    while(input != "quit" || input.size() > 10){
        temp = 0;
        if (find(V[input.size()].begin(), V[input.size()].end(), input) != V[input.size()].end()){
            temp = 1;
        }
        if (temp == 0){
            V[input.size()].push_back(input);
        }
        cin >> input;
    }
     
    for (int i = 0; i < V.size(); ++i){
        if (V[i].size() != 0){
            cout << i*V[i].size() << " " << V[i].size() << endl;
        }
    }
    return 0;
 }
