#include <iostream>
#include <vector>

using namespace std;

string convert (string input){
    string newInput = "";
    for (int i = 0; i < input.size(); i++){
        newInput += tolower(input[i]);
    }
    return newInput;
}

int main(){
    string input;
    vector<string> inputVector;
    cout << "String: " << endl;
    cin >> input;
    input = convert(input);
    
    while (input != "quit" ){
        if (input.size() > 1){
            inputVector.push_back(input);
        }
        if (input.size() == 1){
            for (int i = 0; i < inputVector.size(); i++){
                if (inputVector[i].substr(0, 1) == input.substr(0,1)){
                    cout << inputVector[i] << "\n";
                    
                }
            }
        }
        cin >> input;
        input = convert(input);
    }
}
