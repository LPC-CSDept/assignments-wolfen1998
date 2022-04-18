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
    int getRdnum();
    int i;
    srand(time(0));
    int old_number;
    int randomnum;

    for (i = 1; i<=10; i++ )
    {
        cout << i;
        if ( i = 1)
        {
            old_number = getRdnum();
            ofstream old_num;
            old_num.open("old.txt");
            old_num << old_number;
        }
        if (i > 1)
        {
            int old_num;
            randomnum = getRdnum();
            ifstream read_old_number;
            read_old_number.open("old.txt");
            read_old_number >> old_num;
            if ( randomnum > old_num)
            {
                ofstream write_numbers;
                write_numbers.open("numbers.txt", ios::app);
                write_numbers << randomnum << endl;
                write_numbers.close();

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



