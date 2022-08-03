//
//  main.cpp
//  Part06
//
//  Created by Francisco Lira on 2/22/22.
//

#include <iostream>
#include "AddressBook.h"

using namespace std;


int main(int argc, const char * argv[]){
    string name1, lastname1, email1;
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> name1;
        cin >> lastname1;
        cin >> email1;
        
        Addressbook myEntry;
        myEntry.setName(name1);
        myEntry.setLastname(lastname1);
        myEntry.setEmail(email1);
        myEntry.print();
        
    }
    return 0;
    
}
