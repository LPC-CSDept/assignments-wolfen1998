#include <iostream>
#include <cmath>
using namespace std;

void swapTwoValues(int &, int &);
void swapTwoValues(float &, float &);

int main() {
 double Fvalue1, Fvalue2; 
 int Ivalue1, Ivalue2;

 cout << "Enter Two integer values (with space in between the numbers) to be swapped ";
 cin >> Ivalue1>>Ivalue2;
 cout << "Enter Two floating values (with space in between the numbers) to be swapped ";
 cin >> Fvalue1 >> Fvalue2;
 swapTwoValues(Ivalue1 , Ivalue2) ;
 cout << Ivalue1 << " " << Ivalue2 << endl;
 cout << Fvalue1 << " " << Fvalue2 << endl;
}
void swapTwoValues(int &Ivalue1, int &Ivalue2){
  int temp1;
  int temp2;
  temp1 = Ivalue1;
  temp2 = Ivalue2;
  Ivalue1= temp2;
  Ivalue2= temp1;
  
}
void swapTwoValues(double &Fvalue1, double &Fvalue2){
  double temp1;
  double temp2;
  temp1 = Fvalue1;
  temp2 = Fvalue2;
  Fvalue1= temp2;
  Fvalue2= temp1;
}

