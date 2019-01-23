#include <iostream>
#include <fstream>
#include <string>
#include "../include/declarations.h"
#include "../include/shape.h"
#include "../include/coordinates.h"
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

    string type = getType(argv[1]);

    cout << "shape type = " << type << endl;           //del

    //4 use cases 

    return 0;
}


