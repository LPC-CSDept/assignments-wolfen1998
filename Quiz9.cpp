#include < iostream >
#include < stream>
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