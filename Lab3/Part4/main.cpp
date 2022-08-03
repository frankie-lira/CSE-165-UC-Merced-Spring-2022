//
//  main.cpp
//  Part4
//
//  Created by Francisco Lira on 2/15/22.
//

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<string>> V(10);
    string input;

    cout << "Enter Strings: \n";
    cin >> input;

    while(input != "quit"){
        int inputLen = input.size();

        if(inputLen != 0){
            V[inputLen - 1].push_back(input);
        }

        cin >> input;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < V[i].size(); j++){
            cout << V[i][j] << " ";

        }
        cout << endl;

    }
}



