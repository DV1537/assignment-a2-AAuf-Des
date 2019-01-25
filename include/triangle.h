#include "./shape.h"

class triangle: public shape{
    public:
    triangle(int amountOfVertices, coordinate * coordinateArray);

    string getType();
    double area();
    double circumreference();
    coordinate position();
    bool isConvex();
    int distance();
};

triangle::triangle(int amountOfVertices, coordinate * coordinateArray){
    coords = new coordinate[amountOfVertices];

    for(int i = 0; i < amountOfVertices; i++){
        coords[i].x = coordinateArray[i].x;
        coords[i].y = coordinateArray[i].y;
    }

    cout << "constructor show: " << endl;
    for(int i = 0; i < amountOfVertices; i++){
        cout << "(" << coords[i].x << ", " << coords[i].y << ")" << endl;
    }

    centerCoord.x = (coords[0].x + coords[1].x + coords[2].x) / 3;
    centerCoord.y = (coords[0].y + coords[1].y + coords[2].y) / 3;

    cout << "constructor centercoord.show(): " << endl;
    centerCoord.show();

}

string triangle::getType(){
    type = "triangle";
    return type;
}

double line::area(){
    
}