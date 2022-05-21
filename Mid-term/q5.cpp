#include <iostream>
using namespace std;

void getInput(int &, int &);
bool isSame(int,int);
void intDivision(int,int);
void fileWrite(int,int);


int main(){
  bool check;
  int n1,n2;
  getInput(n1,n2);
  cout << "The two numbers are: "<< n1 << " " << n2 << endl;
  check = isSame(n1,n2);
  if (check == true)
  {
    cout << "The numbers are the same." << endl;
    exit(0);
  }
  else
  {
    check == false;
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