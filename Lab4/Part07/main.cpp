//
//  main.cpp
//  Part07
//
//  Created by Francisco Lira on 2/22/22.
//

#include<stdio.h>
#include<iostream>

using namespace std;

struct OnecharOnedouble{
    
    char charcater;
    double doub;
    
};

struct TwocharOnedouble{
    char charcater1;
    char charcater2;
    double doub;

};

struct ThreecharOnedouble{
    char charcater1 , charcater2, charcater3;
    double doub;
    
};

struct FourcharOnedouble{
    char charcater1, charcater2, charcater3, charcater4;
    double doub;

};

struct EmptyStruct{

};

struct OneCharOneIntOnechar{
    char charcater;
    int i;
    char charcater2;
    
};

struct TwoCharOneInt{
    char cha, chb;
    int i;
    
};

int main(){
    struct OnecharOnedouble onecharOnedouble;
    struct TwocharOnedouble twocharOnedouble;
    struct ThreecharOnedouble threecharOnedouble;
    struct FourcharOnedouble fourcharOnedouble;
    struct EmptyStruct emptyStruct;
    struct OneCharOneIntOnechar oneCharOneIntOnechar;
    struct TwoCharOneInt twoCharOneInt;
    
    cout << "1 Char, 1 Double: " << sizeof(onecharOnedouble) << endl;
    
    cout << "2 Char, 1 Double:  " << sizeof(twocharOnedouble) << endl;
    
    cout << "3 Char, 1 Double: " << sizeof(threecharOnedouble) << endl;
    
    cout << "4 Char, 1 Double: " << sizeof(fourcharOnedouble) << endl;
    
    cout << "Empty: " << sizeof(emptyStruct) << endl;
    
    cout << "1 Char, 1 Int, 1 Char: " <<  sizeof(oneCharOneIntOnechar) << endl;
    
    cout << "2 Char, 1 Int: " << sizeof(twoCharOneInt) << endl;
    
}
