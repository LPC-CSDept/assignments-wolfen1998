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
        int randomnum;
        int old_random;
        if (i != 1)
        {
            ofstream oldnumber;
            oldnumber.open("old_random.txt");
            oldnumber << old_random;



        }
        int randomnumber;
        int isGreater();
        
        
        int greater_or_not;
        int getRdnum();
        
        ofstream outputFile1;
        outputFile1.open("random.txt");
        
        randomnum = getRdnum();
        outputFile1 << randomnum << endl;

        if (i == 1)
        {
            ofstream numbersFile;
            numbersFile.open("numbers.txt");
            numbersFile << randomnum << "\n";
        }
        else 
        {
            if (randomnum > old_random)
            {
                ofstream numbersFile;
                numbersFile.open("numbers.txt");
                numbersFile << randomnum << "\n";
            }
        }
        

    
        
        
        }
        
    }
    



int getRdnum()
{
    int rdnum1;

    int minValue = 1;
    int maxValue = 50;
    rdnum1 =(rand()% (maxValue - minValue + 1)) + minValue;
    return rdnum1;
}



