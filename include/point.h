#include "./shape.h"

class point: public shape{
    public:
    point(int amountOfVertices, coordinate * coordinateArray);

    string getType();
    double area();
    double circumreference();
    coordinate position();
    bool isConvex();
    int distance();
};

point::point(int amountOfVertices, coordinate * coordinateArray){
    coords = new coordinate[amountOfVertices];

    for(int i = 0; i < amountOfVertices; i++){
        coords[i].x = coordinateArray[i].x;
        coords[i].y = coordinateArray[i].y;
    }
    cout << "constructor show: " << endl;
    for(int i = 0; i < amountOfVertices; i++){
        cout << "(" << coords[i].x << ", " << coords[i].y << ")" << endl;
    }

    centerCoord = coords[0];
}

string point::getType(){
    type = "point";
    return type;
}

double point::area(){
    return -1;
}

double point::circumreference(){
    return 0;
}

coordinate point::position(){
    return centerCoord;
}

bool point::isConvex(){
    return false;
}

int point::distance(){
    return 1;

    //not done
}

