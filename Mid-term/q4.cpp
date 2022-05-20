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
  
  srand(time(0));
  
  
  
}
int getRdnum(){
  rdnum1 =(rand()% (maxValue - minValue + 1)) + minValue;
}