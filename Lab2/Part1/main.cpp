//
//  main.cpp
//  Part1
//
//  Created by Francisco Lira on 2/6/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int integer;
    cout << "Enter an Integer: ";
    cin >> integer;
    
    if (integer >= 0)
        cout << "POSITIVE \n";
    else
        cout << "NEGATIVE \n";
    
    if (integer % 2 == 0)
        cout << "EVEN \n";
      else
        cout << "ODD \n";

      return 0;
}
