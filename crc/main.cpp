#include <iostream>
#include <fstream>
#include <string>
#include "../include/declarations.h"
#include "../include/shape.h"
#include "../include/coordinates.h"
#include "../include/point.h"
using namespace std;

int main(int argc, const char * argv[])
{
    if (argc != 2){
        cout << "you need one input file" << endl;
    }

    string str;
    bool isValidFile;
    ifstream myFile;

    isValidFile = checkIfValid(argv[1]);

    if (isValidFile != true)
    {
        cout << "error: invalid file" << endl;
        exit(EXIT_FAILURE);
    }

    int amountOfCoordinates = getAmountOfCoordinates(argv[1]);

    coordinate * coordArray = new coordinate[amountOfCoordinates];

    setCoords(coordArray, argv[1]);

    string type = getType(coordArray, amountOfCoordinates);

    cout << "shape type = " << type << endl;           //del

    

    
    if (type == "point"){
        point point(amountOfCoordinates, coordArray);

        point.position();

    }


    



    

    //4 use cases 

    return 0;
}


