#include <iostream>
#include <fstream>
using namespace std;
struct Name

{
  string fName;
  string lName;
};
struct Date
{
string month;
int day;
int year;
};
struct EmpRecord
{
int id;
Name name;
int salary;
string depName;
Date date;
};
void constructStructure(&EmpRecord);

main(){
  EmpRecord employee;
  ifstream readfile;
  readfile.open("employee.txt");
  string line;
  int num;
  string temp;
  while (readfile >> employee.id >> employee.name.fName >> employee.name.lName >> employee.salary >> employee.depName >> employee.date.month >> employee.date.day >> employee.date.year)
    {


  
  cout << employee.id<< " ";
  cout << employee.name.fName<< " ";
  cout << employee.name.lName<< " ";
  cout << employee.salary<< " ";
  cout << employee.depName<< " ";
  cout << employee.date.month<< " ";
  cout << employee.date.day<< " ";
  cout << employee.date.year<< endl;

    }

  



    
}