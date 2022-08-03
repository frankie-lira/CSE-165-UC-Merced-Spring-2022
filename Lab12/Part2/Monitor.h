//
//  Monitor.h
//  Lab12
//
//  Created by Francisco Lira on 4/26/22.
//

#ifndef Monitor_h
#define Monitor_h

using namespace std;

class Monitor{
public:
   void incident(){
       count++;
   }
    
   void print(){
       cout << "Count: " << count << endl;
   }
    
private:
   static int count;
    
};



#endif /* Monitor_h */
