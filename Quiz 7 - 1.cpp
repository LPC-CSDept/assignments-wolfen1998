#include <iostream>
#include <cmath>
using namespace std;




int main() {
  const int NUM = 10;
  int numbers[10]= {20,25,30,70,75,80,100,119,115,129};
  if (abs(numbers[0] - numbers [1]) < 10)
    cout <<"Difference between " << numbers[0]<< " and its adjacent number is less than 10"<< endl;
  for (int count = 1; count < NUM; count++ )
  {

    if (abs(numbers[count] - numbers[count - 1]) < 10 && abs(numbers[count] - numbers[count + 1]) < 10 )
      cout <<"Difference between " << numbers[count]<< " and its adjacent numbers is less than 10"<< endl;
  }
}