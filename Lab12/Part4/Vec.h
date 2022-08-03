//
//  Vec.h
//  Lab12
//
//  Created by Francisco Lira on 4/26/22.
//

#ifndef Vec_h
#define Vec_h

using namespace std;

class Vec {
public:
    float x;
    float y;
    
    Vec(){
        x = 0;
        y = 0;
    }
    
    Vec (float x, float y){
        this->x = x;
        this->y = y;
    }
    
    Vec operator + (const Vec & v) const{
        return Vec(x + v.x, y + v.y);
    }
    
    Vec operator-(const Vec &v) const { 
        return Vec(x - v.x, y - v.y);
    }
    
    Vec operator*(int value) const {
        return Vec(x * value, y * value);
    }
    
    
};

ostream& operator<< (ostream& o, const Vec & v){
    o << "(" << v.x << ", " << v.y << ")";
    return o;
}

#endif

