#include <iostream>
#include <fstream>
#include <string>
#include "declarations.h"
using namespace std;

class shape{
    public:
    virtual double getArea() = 0;

}; 


int main(int argc, const char * argv[])
{
    string str;
    bool isValidFile;
    ifstream myFile;

    isValidFile = checkIfValid(argv[1]);

    if (isValidFile == false){
        cout << "invalid file" << endl;
    }
    else if (isValidFile == true){
        cout << "file is valid" << endl;
    }

    


    myFile.close();

    cout << str << endl;

    return 0;
}


