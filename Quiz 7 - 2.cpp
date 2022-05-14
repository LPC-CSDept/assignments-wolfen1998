// Use this main function.

#include    <iostream>
using namespace std;

void printtriangle(int numbers[][3], int);
int main()
{
    const int SIZE = 3;
    int numbers[SIZE][SIZE] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
    
    printtriangle(numbers, SIZE);
}
void printtriangle(int num[][3], int size)
{
  for (int row2 = 1; row2 < 2; row2++)
    {
      cout << num[row2][row2-1]<< " \n";
      cout << num[row2][row2 - 1 ]<< " \t";
      cout << num[row2][row2]<< " \t \n";
      
      for (int row4 = 0; row4 < 3; row4++)
        {
          cout << num[0][row4 ]<< " \t";
          
        }
        }
      
      
      
}
   
