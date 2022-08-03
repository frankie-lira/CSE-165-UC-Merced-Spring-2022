//
//  main.cpp
//  Part6
//
//  Created by Francisco Lira on 2/15/22.
//

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector <string> inputVector;
    string input;
    
    while(input != "quit"){
        cin >> input;
        
        int inputLength = input.length();
        
        if(inputLength < 4){
            for(int i = 0; i < inputVector.size(); i++)
                if(inputVector[i].substr(0, inputLength) == input)
                    cout << inputVector[i] << " ";
        }
      
        else if(input != "quit" && inputLength >= 4)
            inputVector.push_back(input);
    }
    return 0;
}
