#include <iostream>
#include <fstream>
#include <string>
#include "declarations.h"
using namespace std;

//checks so that all requierments for the file was met.s
bool checkIfValid(string file){          
    bool isValid = false;
    isValid = checkIfFileExist(file);

    if (isValid == true){
        isValid = checkForEmpty(file);
    }

    if (isValid == true){
        isValid = checkForCharacters(file);
    }

    if (isValid == true){
        isValid = checkForMultipleLines(file);
    }

	if (isValid == true){
		isValid = checkForUneven(file);
	}

    return isValid;

}

//checks so that the file (argv[1]) actually exist.
bool checkIfFileExist(string file){
	string str;
	bool fileExist;

    ifstream myFile(file);
    if (myFile.fail()){
        cout << "error: " << file << " does not exist." << endl;
		fileExist = false;
    }
    else{
		
        fileExist = true;
    }
    myFile.close();
    return fileExist;
}

//checks so that the input file contains anything
bool checkForEmpty(string file){
	ifstream myReadFile;
	string str;
	bool isValid = true;
	myReadFile.open(file);

	getline(myReadFile, str);

	if (str.size() == 0){
		isValid = false;
		cout << "Error: file contains nothing." << endl;
	}

	myReadFile.close();

	return isValid;
}

//checks so that the file does not contain any characters.
bool checkForCharacters(string file){
	char num;
	bool isValid = true;

	ifstream myReadFile;
	myReadFile.open(file);

	while (myReadFile >> num && isValid == true)
	{
		if (isdigit(num) || num == '-') {
			isValid = true;
		}
		else {
			isValid = false;
			cout << "error: file contains characters" << endl;
		}
	}
	
	myReadFile.close();
	return isValid;
}

//checks so that the file does not contain more than 1 line.
bool checkForMultipleLines(string file){
	string str;
	bool isValid = true;
    ifstream myFile;
    int count = 0;

    myFile.open(file);
    while (!(myFile.eof())){
        getline(myFile, str);
        count++;
    }
    
	if (count > 1){
		isValid = false;
		cout << "error: the file contains to many lines." << endl;
	}
	else{
		isValid = true;
	}
    myFile.close();

    return isValid;
}

//check if the amount of numbers in the input file is uneven
bool checkForUneven(string file){
	int num;
	int count = 0;
	ifstream myFile;
	myFile.open(file);

	while (myFile >> num){
		count++;
	}
	
	myFile.close();

	bool isValid = false;
	if (count % 2 == 0){
		isValid = true;
	}
	else if (count % 2 == 1){
		isValid = false;
		cout << "error: invalid file, uneven amount of numbers" << endl;
	}

	return isValid;
}
