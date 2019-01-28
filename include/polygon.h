#include "./shape.h"

class polygon: public shape{
    public:
    polygon(int amountOfVertices, coordinate * coordinateArray);

    string getType();
    double area();
    double circumreference();
    coordinate position();
    bool isConvex();
    int distance();
};

polygon::polygon(int amountOfVertices, coordinate * coordinateArray){
    coords = new coordinate[amountOfVertices];
    sides = new double[amountOfVertices];

    
}