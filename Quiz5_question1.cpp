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
    int rdnum1,rdnum2,rdnum3,rdnum4,rdnum5;

    rdnum1 =(rand()% (maxValue - minValue + 1)) + minValue;
    rdnum2 =(rand()% (maxValue - minValue + 1)) + minValue;
    rdnum3 =(rand()% (maxValue - minValue + 1)) + minValue;
    rdnum4 =(rand()% (maxValue - minValue + 1)) + minValue;
    rdnum5 =(rand()% (maxValue - minValue + 1)) + minValue;
    cout << "the generated numbers are: " << rdnum1 << ", " << rdnum2 << ", " << 
    rdnum3 << ", " << rdnum4 << ", " << rdnum5 << ". " << endl;

    if (rdnum1 < rdnum2 && rdnum1 < rdnum3 && rdnum1 < rdnum4 && 
    rdnum1 < rdnum5  )
        cout << rdnum1 << " is the minimum value of all random numbers " << endl;
    else if (rdnum2 < rdnum1 && rdnum2 < rdnum3 && rdnum2 < rdnum4 && 
        rdnum2 < rdnum5  )
        cout << rdnum2 << " is the minimum value of all random numbers " << endl;
    else if (rdnum3 < rdnum1 && rdnum3 < rdnum2 && rdnum3 < rdnum4 && 
        rdnum3 < rdnum5  )
        cout << rdnum3 << " is the minimum value of all random numbers " << endl;
    else if (rdnum4 < rdnum1 && rdnum4 < rdnum2 && rdnum4 < rdnum3 && 
        rdnum4 < rdnum5  )
        cout << rdnum4 << " is the minimum value of all random numbers " << endl;
    else if (rdnum5 < rdnum1 && rdnum5 < rdnum2 && rdnum5 < rdnum3 && 
        rdnum5 < rdnum4  )
        cout << rdnum5 << " is the minimum value of all random numbers " << endl;

    

        

}
