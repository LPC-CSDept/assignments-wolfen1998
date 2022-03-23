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
	{
		
		

		cout << "Enter the Employee ID ";
		int ID;
		cin >> ID;
		outputFile << ID << endl;
		cin.ignore();
		cout << "Enter the Employee Name ";
		string name;
    	getline (cin,name);
		outputFile << name << endl;

		cout << "Enter the Employee's Department ";
		string emp_dep;
		cin >> emp_dep;
		outputFile << emp_dep << endl;

		cout << "Enter the Employee's salary ";
		double emp_salary;
		cin >> emp_salary;
		outputFile << emp_salary << endl;

		
	}
    
    
    

}