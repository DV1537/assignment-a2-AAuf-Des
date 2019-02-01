#ifndef COORDINATES_H
#define COORDINATES_H

#include <iostream>
using namespace std;

struct coordinate{
    public:
    double x;
    double y;
    double kVal;

    void show(){
        cout << "(" << x << ", " << y << ")" << endl;
    }
};



#endif