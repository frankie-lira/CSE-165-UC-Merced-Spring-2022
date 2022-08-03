//
//  Fib.h
//  Lab12
//
//  Created by Francisco Lira on 4/26/22.
//

#ifndef Fib_h
#define Fib_h

class Fib{ //Initaiated Fib Class
public:
    static int secondLast, last;
    
    Fib(){}
    int next(){
        int nxt = secondLast + last;
        secondLast = last;
        last = nxt;
        
        return last;
    }
    
    int next(bool val){
        if(val){
            secondLast = 0;
            last = 1;
        }
        return this->next(); //refers to first next function
    }
};

#endif /* Fib_h */
