#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int i;
    srand(time(0));

    for (i = 1; i<=10; i++ )
    {

        int getRdnum();
        int randomnum;
        ofstream outputFile;
        outputFile.open("random.txt");
        
        randomnum = getRdnum();
        outputFile << randomnum << endl;
        int isGreater(randomnum);
        int i;
        cout << randomnum<< endl;
        
    }
    

}
bool isGreater
int getRdnum()
{
    int rdnum1;

    int minValue = 1;
    int maxValue = 50;
    rdnum1 =(rand()% (maxValue - minValue + 1)) + minValue;
    return rdnum1;
}



