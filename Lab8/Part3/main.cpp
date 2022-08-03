//
//  main.cpp
//  Part3
//
//  Created by Francisco Lira on 3/28/22.
//

#include <iostream>
#include <fstream>
#include "Sortable.h"

using namespace std;

int main(int argc, char const *argv[]){
    // sortable for integer char and strings
    Sortable <int> integer;
    Sortable <char> character;
    Sortable <string> strings;
    
    ifstream file1("input1.txt");
    ifstream file2("input2.txt");
    ifstream file3("input3.txt");
    
    // get input in each container
    int temp;
    while(file1 >> temp)
        integer.push_back(temp);
    
    string chr;
    while(file2>>chr)
        character.push_back(chr[0]);
    
    string str;
    while(file3>>str)
        strings.push_back(str);
    // sort the containers
    integer.sort();
    character.sort();
    strings.sort();
    
    // print the data
   // cout<<"Output1: ";
    for(int &c:integer)
        cout << c << " ";
    cout<<"\n";
   // cout<<"\nOutput2: ";
    for(char &c:character)
        cout<<(char)c<<" ";
    cout<<"\n";
   // cout<<"\nOutput3: ";
    for(string &str:strings)
        cout<<str<<" ";
    cout<<"\n";
    
    // close the files
    file1.close();
    file2.close();
    file3.close();
    
    return 0;
    
}
