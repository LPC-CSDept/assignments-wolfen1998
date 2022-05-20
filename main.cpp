#include <iostream>
#include <cmath>
using namespace std;




int main() {
  const int NUM = 10;
  int numbers[10]= {20,25,30,70,75,80,100,110,115,120};
  for (int count = 0; count < NUM; count++ )
  {
    if (abs(numbers[count] - numbers[count - 1]) < 10 && abs(numbers[count] - numbers[count + 1]) < 10 )
      cout << "This number's adjacents is less than ten " << numbers[count]<< "\n";
  }
}