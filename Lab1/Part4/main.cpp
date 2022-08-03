//
//  main.cpp
//  Part4
//
//  Created by Francisco Lira on 1/31/22.

#include<iostream>
#include<fstream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    ifstream myFile("words.txt");
    int count = 0;
    
    char string[20], input[20];
    
    cout << "Enter a word: ";
    cin >> input;
    
    while(myFile){
        myFile >> string;
        
        if(strcmp(string, input) == 0){ //strcmp compares the two string parameters
            count++;
        }
    }
    
    cout << "Their is a total of " << count << " occurances of the word, " << input << "\n";
    myFile.close();
 
 return 0;
 
}
