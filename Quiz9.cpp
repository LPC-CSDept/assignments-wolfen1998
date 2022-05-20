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

void construct(EmpRecord &);

main(){
  EmpRecord employee;
  construct(employee);
  }

  

void construct(EmpRecord &p){
  
  ifstream readfile;
  readfile.open("employee.txt");
  string line;
  int num;
  string temp;
  while (readfile >> p.id >> p.name.fName >> p.name.lName >> p.salary >> p.depName >> p.date.month >> p.date.day >> p.date.year)
    {  
  cout << p.id<< " ";
  cout << p.name.fName<< " ";
  cout << p.name.lName<< " ";
  cout << p.salary<< " ";
  cout << p.depName<< " ";
  cout << p.date.month<< " ";
  cout << p.date.day<< " ";
  cout << p.date.year<< endl;
    }



    }

  



    
