#include "./shape.h"

class point: public shape{
    public:
    point(int amountOfVertices);

    string getType();
    double area();
    double circumreference();
    coordinate position();
    bool isConvex();
    int distance();
};

point::point(int amountOfVertices){
    coords = new coordinate[amountOfVertices];
}

string point::getType(){
    type = "point";
    return type;
}

double point::area(){
    return -1;
}

