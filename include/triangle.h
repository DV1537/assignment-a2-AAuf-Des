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
    sides = new double[amountOfVertices];
    coordSize = amountOfVertices;

    for(int i = 0; i < amountOfVertices; i++){
        coords[i].x = coordinateArray[i].x;
        coords[i].y = coordinateArray[i].y;
    }

    centerCoord.x = (coords[0].x + coords[1].x + coords[2].x) / 3;
    centerCoord.y = (coords[0].y + coords[1].y + coords[2].y) / 3;

}

string triangle::getType(){
    type = "triangle";
    return type;
}

double triangle::area(){
    double area = 0;

    area = abs((coords[0].x *(coords[1].y - coords[2].y) + coords[1].x *(coords[2].y - coords[0].y) + coords[2].x *(coords[0].y - coords[1].y))/2 );

    return area;
}


double triangle::circumreference(){
    double circumreference = 0;
    
    for(int i = 0; i < coordSize; i++){
        if (i != coordSize - 1){
            sides[i] = sqrt(pow(coords[i].x - coords[i+1].x , 2) + pow(coords[i].y - coords[i+1].y, 2));
        }

        else{
            sides[i] = sqrt(pow(coords[i].x - coords[0].x , 2) + pow(coords[i].y - coords[0].y, 2));
        }        
    }

    for(int i = 0; i < coordSize; i++){
        circumreference = circumreference + sides[i];
    }

    return circumreference;
}

coordinate triangle::position(){
    return centerCoord;
}

bool triangle::isConvex(){
    return false;
}

int triangle::distance(){

    return 0;
}