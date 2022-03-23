#include <iostream>
#include <fstream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
    int value;
    ifstream inFile;
    inFile.open("Employee.txt");
    inFile >> value;
    inFile.close();
    cout << value;

}


