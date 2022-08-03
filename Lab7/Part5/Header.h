//
//  Header.h
//  Part5
//
//  Created by Francisco Lira on 3/14/22.
//

#ifndef Header_h
#define Header_h

#include <iostream>
#include <vector>

class AppRect{
public:
    int x, y, w, h;
    AppRect(int x, int y, int w, int h)
    {
        this -> x = x;
        this -> y = y;
        this -> w = w;
        this -> h = h;
    }
};


class AppWindow{ //AppWindow Class
protected:
    AppRect* self; //Memeber
public:
    
    AppWindow(){ //Default constructor
        self = new AppRect(0, 0, 0, 0);
    }
    
    AppWindow(int x, int y, int w, int h){ //1st Constructor
        self = new AppRect(x, y, w, h);
    }
    
    AppWindow(const AppRect& r){ //Second Constructor
        self = new AppRect(r.x, r.y, r.w, r.h);
    }
    
    const AppRect& rect(){ //Method to retrive the rectangle
        return *self;
    }
    
    virtual void resize(int w, int h){ //Resize Method
        self -> w = w;
        self -> h = h;
    }
};

class CircleWin : public AppWindow{ //CicleClass win class derived from AppWindow

private:
    double radius;

public:
    
    CircleWin(int x, int y, int w, int h){
        
        self -> x = x;
        self -> y = y;
        self -> w = w;
        self -> h = h;
        (w < h) ? radius = w : radius = h;
    }
    
    CircleWin(const AppRect& r){
        self -> x = r.x;
        self -> y = r.y;
        self -> w = r.w;
        self -> h = r.h;
        (r.w < r.h) ? radius = r.w : radius = r.h;
    }
    
    void resize(int w, int h){
        (w < h) ? radius = w : radius = h;
        std::cout << "radius: " << radius << std::endl;
    }
};

class RectWin : public AppWindow{//RectWin win class derived from AppWindow

private:
    double area;
    
public:
    RectWin(int x, int y, int w, int h){
        self -> x = x;
        self -> y = y;
        self -> w = w;
        self -> h = h;
        area = w * h;
    }
    
    RectWin(const AppRect& r){
        self -> x = r.x;
        self -> y = r.y;
        self -> w = r.w;
        self -> h = r.h;
        area = r.w * r.h;
    }
    
    void resize(int w, int h){
        self -> w = w;
        self -> h = h;
        area = w * h;
        std::cout << "area: " << area << std::endl;
    }
};

#endif /* Header_h */
