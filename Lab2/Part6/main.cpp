//
//  main.cpp
//  Part6
//
//  Created by Francisco Lira on 2/8/22.
//

#include<iostream>

using namespace std;

void getBit(int num);
void setBit(int num);
void clearBit(int num);
void DecToBin(int num);

int main(){
    int num, choice;
    
    cout << "Enter a decimal number: ";
    cin >> num;
    
    DecToBin(num);
    
    cout << endl << "Choose Option Below:" << endl;
    cout << "(1) Get a bit Position " << endl;
    cout << "(2) Set a bit Position " << endl;
    cout << "(3) Clear a bit Position " << endl;
    
    cin >> choice;
    
    switch(choice){
        case 1:
            getBit(num);
            break;
        
        case 2:
            setBit(num);
            break;
        
        case 3:
            clearBit(num);
            break;
        
        default:
            cout << endl << "Invalid Choice";
    }
    
   return 0;
}

void getBit(int num){
    int f;
    
    cout << endl << "Enter the index: ";
    cin >> f;
    
    f = f + 1;
    
    cout << endl << ((num & (1 << (f - 1))) >> (f - 1));
}

void setBit(int num){
    int index;
    
    cout << endl<<"Enter the index: ";
    cin >> index;
    
    int number = ((1 << index) | num);
    DecToBin(number);
}

void clearBit(int num){
    int f;
    
    cout << endl << "Enter the index: ";
    cin >> f;
    
    f = f + 1;
    
    int choice = (num & (~(1 << (f - 1))));
    DecToBin(choice);
}

void DecToBin(int num){
    int a[10], i;
    for(i = 0; num > 0; i++){
        
        a[i] = num % 2;
        num = num/2;
        
    }

    cout << endl << "Binary output is: ";
    
    for(i = i - 1; i >= 0; i--){
        cout << a[i];
   }
    cout << "\n";
  
}
