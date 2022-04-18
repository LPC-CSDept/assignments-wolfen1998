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
    ofstream oldnumber;
    oldnumber.open("old_random.txt");

    for (i = 1; i<=10; i++ )
    {
        int randomnum;
        int old_random;
        if (i > 1)
        {
            ifstream oldnumber;
            oldnumber.open("old_random.txt");
            
            
            oldnumber >> old_random;



        }
        
        int getRdnum();
        
        ofstream outputFile1;
        outputFile1.open("random.txt");
        
        randomnum = getRdnum();
        cout << randomnum << endl;
        outputFile1 << randomnum << endl;

        if (i == 1)
        {
            ofstream numbersFile;
            numbersFile.open("numbers.txt", ios::app);
            numbersFile << randomnum << "\n";
        }
        else 
        {
            if (randomnum > old_random)
            {
                ofstream numbersFile;
                numbersFile.open("numbers.txt", ios::app);
                numbersFile << randomnum << "\n";
                numbersFile.close();
            }
        }
        oldnumber << randomnum;
        

    
        
        
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



