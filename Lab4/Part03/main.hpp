//
//  main.hpp
//  Part03
//
//  Created by Francisco Lira on 2/22/22.
//

#ifndef main_hpp
#define main_hpp
#include <iostream>

using namespace std;

struct LinkedList {
        struct Link {
               void* data;
               Link* next;
              
               void initialize(void* dat, Link* nxt) {
                   data = dat;
                   next = nxt;
               }
           }* head;

Link *end;
int size;
    
void initialize() {
    head=NULL;
    end=NULL;
    size=0;
}
  
void add(void* dat) {
    Link *lnk=new Link();
    lnk->data=dat;
    lnk->next=NULL;
    
    if(head==NULL){
        head=lnk;
        }
    else{
        end->next=lnk;
        }
    
    end=lnk;
    size++;
}
  
void* get(int index) {
        if(index<0 || index>=size){
                return NULL;
        }
        
        Link* curr=head;
        for(int i=0;i<index;i++){
                curr=curr->next;
        }
        
        return curr->data;
}
  

void cleanup() {
      
        while(head!=NULL){
               
                Link* next=head->next;
                
                delete head;
                
                head=next;
        }
       
        end=NULL;
        size=0;
}
};
#endif
