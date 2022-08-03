//
//  main.cpp
//  Part2
//
//  Created by Francisco Lira on 2/8/22.
//

#include <iostream>
using namespace std;

int main(){
    int number;
    char letter;
    
    string output = "";
    
    while(true){
        cin >> letter >> number;
       
        if(number >= 0){
            while(number > 0){
                output = output + letter;
                number--;
            }
        }
        
        else if(number == -1){
            output = output + "\n";
        }
        else if(number == -2)
            break;
    }
    cout << output << endl;
    return 0;
}



