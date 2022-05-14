#include <iostream>
#include <cmath>
using namespace std;


int findMax(int[],int, int);

int main() {
  
  const int NUM = 10;
  int numbers[10]= {20,2295,306,705,75,80,552100,1102,11522,1202222};
  int from;
  int to;
  cout << "Type the starting range"<<endl;
  
  cin >> from;
  cout << "Type the ending range"<<endl;
  cin >> to;
  int highest;
  highest = findMax(numbers, from, to);  
  cout << "The highest number within range from " << from << " to " << to << " is: " << highest;


  }


int findMax(int numbers[], int from, int to)
  {
    int highest = numbers[0];
    for ( int count = from - 0; count < to ; count++)
    {
      if (numbers[count] > highest)
      {
        highest = numbers [count ];
      }
    }
    return highest;
  }
  