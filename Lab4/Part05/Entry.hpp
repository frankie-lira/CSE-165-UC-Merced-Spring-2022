//
//  address_book_entry.hpp
//  Part05
//
//  Created by Francisco Lira on 2/22/22.
//

#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>

using namespace std;

struct Entry {
    string name, last, mail;
    void setName(const string first_name){
        name = first_name;
    }
    
    void setLastName(const string last_name){
        last = last_name;
    }
    
    void setEmail(const string email){
        mail = email;
    }
    
    void print(){
        cout<<"First Name:"<< name << endl;
        cout<<"Last Name:"<< last << endl;
        cout<<"Email:"<< mail << endl;
    
    }

};

#endif
