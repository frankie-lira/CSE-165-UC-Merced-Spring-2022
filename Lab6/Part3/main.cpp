#include <iostream>
#include "poly.h"
using namespace std;

int main (){
    // read line of input here?
    // after reading 4 negative float vals, stop.
    RectStash *myStash = new RectStash();
    float x,y,length, width;
    
    
    cin >> x;
    cin >> y;
    cin >> length;
    cin >> width;
    
    while ((x > 0)||(y > 0)||(length > 0) || (width > 0)){
        Rect *rectangle = new Rect(x, y, width, length);
        myStash->add(rectangle);
        cin >> x;
        cin >> y;
        cin >> length;
        cin >> width;
        
    }
    
    cin >> x;
    cin >> y;
    
    while (x != -99 && y != -99){
        Vec *vecXY = new Vec(x,y);
        for (int i = 0; i < myStash->count(); i++){
            Rect temp = *(Rect*)myStash->fetch(i);
            if (temp.contains(*vecXY)){
                cout << "in ";
                
            }else{
                cout << "out ";
                
            }
        }
        
        cout << " " << endl;
        cin >> x;
        cin >> y;
    }
    
    
    
}

