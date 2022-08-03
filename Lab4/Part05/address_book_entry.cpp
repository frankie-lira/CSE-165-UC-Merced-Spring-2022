//
//  address_book_entry.cpp
//  Part05
//
//  Created by Francisco Lira on 2/22/22.
//

#include <iostream>
#include "Entry.hpp"
int main(int argc, const char * argv[]){
    string name, lastname, email;
    
    cin >> name;
    cin >> lastname;
    cin >> email;
    
    Entry myEntry;
    
    myEntry.setName(name);
    myEntry.setLastName(lastname);
    myEntry.setEmail(email);
    
    myEntry.print();
    
    return 0;
}

