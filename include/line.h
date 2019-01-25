#include "./shape.h"

class line: public shape{
    public:
    line(int amountOfVertices, coordinate * coordinateArray);

    string getType();
    double area();
    double circumreference();
    coordinate position();
    bool isConvex();
    int distance();
};

line::line(int amountOfVertices, coordinate * coordinateArray){
    coords = new coordinate[amountOfVertices];

    for(int i = 0; i < amountOfVertices; i++){
        coords[i].x = coordinateArray[i].x;
        coords[i].y = coordinateArray[i].y;
    }

    cout << "constructor show: " << endl;
    for(int i = 0; i < amountOfVertices; i++){
        cout << "(" << coords[i].x << ", " << coords[i].y << ")" << endl;
    }

    centerCoord.x = (coords[0].x + coords[1].x) / 2;
    centerCoord.y = (coords[0].y + coords[1].y) / 2;
    cout << "constructor centercoord.show(): " << endl;
    centerCoord.show();    
}


string line::getType(){
    type = "line";
    return type;
}

double line::area(){
    return -1;
}

double line::circumreference(){
    return 0;
}

coordinate line::position(){
    return centerCoord;
}

bool line::isConvex(){
    return false;
}

int line::distance(){
    return 1;

    // not done
}
