#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRdnum();

int getRdnum(int);
int getRdnum(int, int);


//I call 3 functions. I ask te user to provide the numbers for int getRdnum(int) and int getRdnum(int, int) functions.
int main(){
  int randomNum, randomNum2, randomNum3;
  int n1,n2;
  
  randomNum = getRdnum();
  cout << "Random number from 0 to 100: "<<randomNum<<endl;
  

  cout << "Type a number for n1: ";
  cin >> n1;
  randomNum2 = getRdnum (n1);
  cout << "Random number from 0 to " << n1  <<": " <<randomNum2<<endl;
  cout << "Type a number for n1 and n2 with space in between numbers: ";
  cin >> n1 >> n2;
  randomNum3 = getRdnum (n1,n2);
  cout << "Random number from " << n1 << " to " << n2 << ": " <<randomNum3<<endl;
  
    
  srand(time(0));
  
  
  
}
//
int getRdnum(){
  int rdnum;
  int minValue = 0;
  int maxValue = 100;
  // this code is from textbook which gives you a random number from minValue to maxValue. 
  rdnum =(rand()% (maxValue - minValue + 1)) + minValue;
  return rdnum;
}
int getRdnum(int n1){
  int rdnum;
  int maxValue;
  int minValue = 0;
  maxValue = n1;
  // I make maxValue equal to the value of n1 which is then used as minimum range.
  rdnum =(rand()% (maxValue - minValue + 1)) + minValue;
  return rdnum;
}
int getRdnum(int n1, int n2){
  int rdnum;
  int maxValue;
  int minValue;
  maxValue = n2;
  minValue = n1;
   // I make maxValue equal to the value of n1 which is then used as minimum range and make n2 equal to maxValue which will be equal to max range.
  rdnum =(rand()% (maxValue - minValue + 1)) + minValue;
  return rdnum;
}
//the picked random number will be returned to the variable that calle the function.