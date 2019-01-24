#include <iostream>
#include <fstream>
#include <string>
#include "../include/declarations.h"
//#include "../include/shape.h"
#include "../include/coordinates.h"
//#include "../include/point.h"
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

    int amountOfVertices = getAmountOfVertices(argv[1]);

    coordinate * coordArray = new coordinate[amountOfVertices];

    setCoords(coordArray, argv[1]);

    coordArray[0].show();       //del
    coordArray[1].show();       //del



    string type = getType(argv[1], amountOfVertices);

    cout << "shape type = " << type << endl;           //del

    

    
    if (amountOfVertices == 1){
        //point point(amountOfVertices);
    }



    

    //4 use cases 

    return 0;
}


