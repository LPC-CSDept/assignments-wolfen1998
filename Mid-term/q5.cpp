#include <iostream>
#include <fstream>
using namespace std;

void getInput(int &, int &);
bool isSame(int,int);
void intDivision(int &, int &, int &);
void fileWrite(int,int);
void repeat();


int main(){
  bool check;
  int result;
  
  int n1,n2;
  getInput(n1,n2);
  cout << "The two numbers are: "<< n1 << " " << n2 << endl;
  check = isSame(n1,n2);
  if (check == true)
  {
    cout << "The numbers are the same." << endl;
    exit(0);
  }
  intDivision(n1,n2,result);
  cout<< "The integer of the two given numbers is: " << result << endl;
  cout << "The number will be written to text file: numbers.txt" << endl;
  ofstream writeToFile;
  writeToFile.open("numbers.txt");
  writeToFile << result;
  cout << "Type y to repeat the program. Type anything else to quit" << endl;
  string repeatOrNot;
  cin >> repeatOrNot;

  repeatOrNot = "n";
  while (repeatOrNot == "y")
    {
    repeat();
    }
  
}

void getInput(int &n1,int &n2){
  cout << "Type two integer numbers with space in between them: ";
  cin >> n1 >> n2;
  



}
bool isSame(int n1, int n2)
{
  if (n1 == n2){
    return true;
  }
  else
  {
    return false;
  }
}
void intDivision(int &n1, int &n2, int &result){
  if (n1 > n2)
  {
    result = n1/n2;
  }
  else
  {
    result = n2/n1;
  }
}

void repeat(){
  bool check;
  int result;
  
  int n1,n2;
  getInput(n1,n2);
  cout << "The two numbers are: "<< n1 << " " << n2 << endl;
  check = isSame(n1,n2);
  if (check == true)
  {
    cout << "The numbers are the same." << endl;
    exit(0);
  }
  intDivision(n1,n2,result);
  cout<< "The integer of the two given numbers is: " << result << endl;
  cout << "The number will be written to text file: numbers.txt" << endl;
  ofstream writeToFile;
  writeToFile.open("numbers.txt");
  writeToFile << result;
  cout << "Type y to repeat the program. Type anything else to quit" << endl;
  string repeatOrNot;
  cin >> repeatOrNot;

  
  while (repeatOrNot != "y")
    {
    repeat();;
    }
  
}