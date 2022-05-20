#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void gerRandnum(int &, int &, int &);
int  findMin(int , int , int ); 
void printResult(int , int , int , int );

int main(){
  int n1,n2,n3, min;
    gerRandnum(n1, n2, n3);
    min = findMin(n1,n2,n3);
    printResult(n1 , n2 , n3 , min );
}