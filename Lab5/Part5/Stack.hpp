//
//  Stack.hpp
//  Part5
//
//  Created by Francisco Lira on 3/1/22.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

struct Link{
    double data;
    Link* next;
    
    //Changed the parameters so it can receive doubles instaed of void pointers
    void initialize(double dat, Link* nxt) {
        data = dat;
        next = nxt;
    }
};

class Stack{
public:
    
    //Added the two constructors:
    //1st Stack that is the default empty stack
    Stack(){
        head = 0;
    }
    //2nd stack that takes in the integer n and builds a stack of n elements.
    Stack(int n){
        head = 0;
        double elem = 1.0;
        for (int i = 0; i < n; i++){
            push(elem);
            elem += 0.1;
        }
    }
    
    //Deconstructor that that delets all the stack by making calls to pop and printing to the output.
    ~Stack(){
        while (head != 0){
            cout << pop() << " ";
        }
    }
    
    void push(double data){
        Link* newLink = new Link;
        newLink -> initialize(data, head);
        head = newLink;
    }
    
    double pop(){
        if (head == 0)
            return 0;
        
        double result = head->data;
        Link* oldHead = head;
        head = head->next;
        delete oldHead;
        return result;
    }
    
    double peek(){
        if (head == 0) {
            std::cout << "Stack is empty";
        }
        
        return head->data;
    }
    
private:
    Link * head;
};

#endif /* Stack_hpp */
