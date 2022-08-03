//
//  main.cpp
//  Part08
//
//  Created by Francisco Lira on 2/27/22.
//


#include<iostream>
#include<fstream>
#include "main.hpp"

using namespace std;

int main(){

ifstream file;

struct Stash s;

double number;

file.open("input.txt");

s.initialize(10);

while(!file.eof())

{

file>>number;

s.add(&number);

}

file.close();

cout<<"\nNumber of elements in stash: "<<s.count();

for(int i=0; i<s . count(); i++)

cout<<"\nElement at number "<<i<<" is: "

<<*(double*)s.fetch(i);

cout<<"\n";

s.cleanup();

system("pause");

return 0;

}

