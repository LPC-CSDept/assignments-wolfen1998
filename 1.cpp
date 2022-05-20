#include <iostream>
#include <fstream>
using namespace std;

struct Date
{
string month;
int day;
int year;
};
struct EmpRecord
{
int id;
string name;
int salary;
string depName;
Date dt;
};
main(){
  ofstream writefile;
  writefile.open("text.txt");
  writefile << 1234567 << " " << "John" << " " << "Doe" << " " << 160000 << " " << "Computer" << " " << "Jan" << " " << 31 << " " << 2020 << endl;
  writefile.close();
  ifstream readfile;
  readfile.open("text.txt");
  string line;
  int num;
  readfile >> num;
  cout << num;


    
}