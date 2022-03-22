#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    double rdnum;
    int minValue = 0;
    int maxValue = 99;


    srand(time(0));
    int count;
    for (count = 0; count < 5; count++)
    {
        rdnum =(rand()% (maxValue - minValue + 1)) + minValue;
        cout << rdnum << "\n" << endl;
    }
        

}
