#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRdnum();

int getRdnum(int);
int getRdnum(int, int);



int main(){
  int randomNum;
  int n1,n2;
  
  randomNum = getRdnum();
  cout << "Random number from 0 to 100: "<<randomNum<<endl;
  

  cout << "Type a number for n1: "
  cin >> n1;
  randomNum2 = getRdnum (n1);
  cout << "Random number from 0 to " << n1 <<: "<<randomNum<<endl;
  cout << "Type a number for n1 and n2 with space in between numbers: ";
  cin >> n1 >> n2;
  randomNum3 = geetRdnum (n1,n2);
  
    
  srand(time(0));
  
  
  
}
int getRdnum(){
  int minValue = 0;
  int maxValue = 100;
  rdnum =(rand()% (maxValue - minValue + 1)) + minValue;
  return rdnum;
}
int getRdnum(int n1){
  int maxValue;
  int minValue = 0;
  maxValue = n1;
  rdnum =(rand()% (maxValue - minValue + 1)) + minValue;
  return rdnum;
}
int getRdnum(int n1, int n2){
  int maxValue;
  int minValue;
  maxValue = n2;
  minValue = n1;
  rdnum =(rand()% (maxValue - minValue + 1)) + minValue;
  return rdnum;
}