#include <iostream>
#include "Object.h"

using namespace std;

Coord3D::Coord3D(){}

Coord3D::Coord3D(int x1, int y1, int z1){
    this ->x = x1;
    this->y = y1;
    this->z = z1;
}

Coord3D::~Coord3D(){}

void Coord3D::print(){
    cout << "x = " << this->x << ", y = " << this->y << ", z = " << this->z << '\n';
    
}


Object* Coord3D::multiply(const Object* other) const{
    const type_info& type = typeid(*other);
    
    if(typeid(*this).name() == type.name()){
        const Coord3D* c = dynamic_cast<const Coord3D*>(other);
        Coord3D* coord = new Coord3D(c->x * this->x, c->y * this->y, c->z * this->z);
        return coord;
    }
    
    const Number* temp = dynamic_cast<const Number*>(other);
    Coord3D* coord = new Coord3D(temp->num * this->x, temp->num * this->y, temp->num * this->z);
    
    return coord;
}

Number::Number(){
    this -> num = 0;
    
}

Number::Number(int num){
    this -> num = num;
    
}

Number::~Number(){}

void Number::print(){
    cout << "num = " << this -> num << '\n';
    
}

Object* Number::multiply(const Object* other) const {
    const type_info& type = typeid(*other);
    if(type.name() == typeid(*this).name()){
        Number* num = new Number(this->num * dynamic_cast<const Number*>(other)->num);
        return num;
    }
    
    const Coord3D* o = dynamic_cast <const Coord3D*>(other);
    Coord3D* coord = new Coord3D(o -> x * num, o -> y * num,  o -> z * num);
    return coord;
}


int main() {
    
    Object *n = new Number(4);
    Object *coord = new Coord3D(1, 2, 3);
    
    Object *res1 = coord -> multiply(n);
    Object *res2 = n -> multiply(coord);
    Object *res3 = coord -> multiply(coord);
    Object *res4 = n -> multiply(n);
    
    res1->print();
    res2->print();
    res3->print();
    res4->print();
}




