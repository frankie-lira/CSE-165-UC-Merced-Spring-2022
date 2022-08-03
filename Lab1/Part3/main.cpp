//
//  main.cpp
//  Part3
//
//  Created by Francisco Lira on 1/31/22.
//
#include <string>
#include<fstream>
#include<iostream>

using namespace std;

int main() {
    ifstream myFile("words.txt");

    int count = -1;
    char character;

    while(myFile) {
        myFile.get(character);
        if(character == ' '|| character == '\n')
            count++;
    }

    cout<<"Number of whitespace-separated words: " << count << "\n" << endl;
    myFile.close();

    return 0;
}

