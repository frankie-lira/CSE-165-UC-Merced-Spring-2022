#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    vector<string> v;
    ifstream in("code1.cpp");
    string line;
    string longString;
    
    while (getline(in, line)){ //getline returns true if read successfully
        v.push_back(line); // Add the line to the end of v // Add line numbers:
    }
    
    for(int i = 0; i < v.size(); i++){
        longString = longString + " " + v[i];
    }
    
    cout << longString << endl;
    return 0;

}
