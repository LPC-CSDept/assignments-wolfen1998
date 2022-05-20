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
void findEmpSalary(EmpRecord);
void findDepartment(EmpRecord);

main(){
  EmpRecord employee;
  construct(employee);
  findEmpSalary(employee);
  findDepartment(employee);
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
  cout << p.date.year<<"\n"<< endl;
    }
  readfile.close();
  }
void findEmpSalary(EmpRecord p)
  {
ifstream readfile;
  readfile.open("employee.txt");
  string line;
  int num;
  string temp;
  bool FalseOrTrue;
  FalseOrTrue = false;
  while (readfile >> p.id >> p.name.fName >> p.name.lName >> p.salary >> p.depName >> p.date.month >> p.date.day >> p.date.year)
    {
        bool FalseOrTrue;
   if (p.salary > 100000)
   {
     
     cout << p.name.fName << " " << p.name.lName << " "<< "has a salary of more than $100,000\n" <<endl;
     FalseOrTrue = true;
     
   }
      
    }
  if (FalseOrTrue == false)
      {
        cout << "\nNo one has a salary of more than 100k. \n \n";
      }




    
    
  readfile.close();
  }

void findDepartment(EmpRecord p)
{
  
  ifstream readfile;
  readfile.open("employee.txt");
  string line;
  int num;
  string temp;
  bool FalseOrTrue;
  FalseOrTrue = false;
  while (readfile >> p.id >> p.name.fName >> p.name.lName >> p.salary >> p.depName >>   p.date.month >> p.date.day >> p.date.year)
    {
      if (p.depName == "Computer")
      {
        FalseOrTrue = true;
        cout << p.name.fName << " " << p.name.lName << " "<< "works in Computer Department"<<endl;
      }
    }
  if (FalseOrTrue == false)
  {
    cout << "No one works in Computer department in here. \n " << endl;
  }



  
}
    

  



    
