//
//  main.cpp
//  Part3
//
//  Created by Francisco Lira on 2/8/22.
//

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int input;
    vector<int> inputVector;
    
    while(1){
        cin >> input;
        
        if(input > 0)
            inputVector.push_back(input);
        
        if(input < 0){
            for(int i = 0; i < inputVector.size(); i++){
                if(abs(input) == inputVector[i])
                    inputVector.erase(inputVector.begin() + i);
                
            }
            
        }
        
        if(input == 0){
            int sum = 0;
            for(int i = 0;i < inputVector.size(); i++){
                sum += inputVector[i];
                cout << inputVector[i] << " ";
                
            }
            cout << sum << endl;
            break;
            
        }
        
    }
    return 0;
}
