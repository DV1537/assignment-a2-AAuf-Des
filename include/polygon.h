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

    coordSize = amountOfVertices;

    for(int i = 0; i < amountOfVertices; i++){
        coords[i].x = coordinateArray[i].x;
        coords[i].y = coordinateArray[i].y;
    }

    for(int i = 0; i < amountOfVertices; i++){
            centerCoord.x += coords[i].x;
            centerCoord.y += coords[i].y;
    }

    centerCoord.x /= amountOfVertices;

    centerCoord.y /= amountOfVertices;

    centerCoord.show();

    system("pause");
}


string polygon::getType(){
    type = "polygon";

    return type;
}

double polygon::area(){
    double total = 0;
    double area = 0;

    int j = coordSize - 1;

    for(int i = 0; i < coordSize; i++){
        total += (coords[j].x + coords[i].x ) * (coords[j].y - coords[i].y);
        j = i;
    }

    area = abs(total/2);

    cout << "area: " << area << endl;

    return area;
}


double polygon::circumreference(){
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

coordinate polygon::position(){
    return centerCoord;
}

bool polygon::isConvex(){
    return false;
}

int polygon::distance(){
    return 0;
}