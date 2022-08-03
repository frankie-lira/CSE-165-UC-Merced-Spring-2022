//
//  main.cpp
//  Part3
//
//  Created by Francisco Lira on 2/6/22.
//

#include <iostream>

using namespace std;

bool primeCheck(int n){
    
    if (n <= 1)
        return false;
    
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    
    return true;
}

void primePrint(int n){
    for (int i = 2; i <= n; i++){
        if (primeCheck(i))
            cout << i << "\n";
    }
}

int main(){
    int n;
    
    cout << "Enter an integer: ";
    cin >> n;
    
    primePrint(n);
}
