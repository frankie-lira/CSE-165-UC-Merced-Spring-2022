//
//  main.cpp
//  Part1
//
//  Created by Francisco Lira on 5/2/22.
//

#include <iostream>
#include <math.h>

#include "DynArray.h"

using namespace std;

template <class A, class X>

void set_five(A& a)
{
    X x = 0;
    for (int i = 0; i < 5; i++)
    {
        x = (X)(2.0*cos(double(i)));
        a.add(x);
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(int argc, const char * argv[])
{
    DynArray<float> fa;
    set_five<DynArray<float>, float>(fa);

    DynArray<int> ia;
    set_five<DynArray<int>, int>(ia);
    return 0;
}
