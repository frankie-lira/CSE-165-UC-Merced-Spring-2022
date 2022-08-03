//
//  main.cpp
//  Part4
//
//  Created by Francisco Lira on 2/6/22.
//

#include <iostream>
using namespace std;

void decimalToBinary(int num){
    int binaryNum[32]; //32 its the biggest binayr number ine can wirte in n bits.
    
    int i = 0;
    while (num > 0) {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
    
    cout << endl;
}

void decimalToHexa(int num){
    char hexaDeciNum[100];

    int i = 0;
    while (num != 0) {
        int temp = 0;
        temp = num % 16;

        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        num = num / 16;
    }
 
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j] << "\n\n";
}

int main(){
    int num;
    do{
        cout << "Enter a number : ";
        cin >> num;
        
        if(num == -1){
            break;
        }
        
        cout << "Binary number: ";
        decimalToBinary(num);
        
        cout<<"Hexa Decimal number: ";
        decimalToHexa(num);
    }
    while(num != -1);
    
    return 0;
}
