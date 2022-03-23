#include <iostream>
#include <fstream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
	int num, emp_num;
	cout << "How many employees? ";
	cin >> emp_num;
    ofstream outputFile;
    outputFile.open("Employee.txt");
	for (num = 1; num <= emp_num; num++)