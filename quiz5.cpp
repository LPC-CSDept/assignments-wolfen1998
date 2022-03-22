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

    rdnum1 =(rand()% (maxValue - minValue + 1)) + minValue;
    rdnum2 =(rand()% (maxValue - minValue + 1)) + minValue;
    rdnum3 =(rand()% (maxValue - minValue + 1)) + minValue;
    rdnum4 =(rand()% (maxValue - minValue + 1)) + minValue;
    rdnum5 =(rand()% (maxValue - minValue + 1)) + minValue;

    if (rdnum1 < rdnum2 && rdnum1 < rdnum3 && rdnum1 < rdnum4 && 
    rdnum1 < rdnum5  )
        cout << rdnum1 << "is the smallest number" << endl;
    else if (rdnum2 < rdnum1 && rdnum2 < rdnum3 && rdnum2 < rdnum4 && 
        rdnum2 < rdnum5  )
        cout << rdnum2 << "\n" << endl;
    else if (rdnum3 < rdnum1 && rdnum3 < rdnum2 && rdnum3 < rdnum4 && 
        rdnum3 < rdnum5  )
        cout << rdnum3 << "\n" << endl;
    else if (rdnum4 < rdnum1 && rdnum4 < rdnum2 && rdnum4 < rdnum3 && 
        rdnum4 < rdnum5  )
        cout << rdnum4 << "\n" << endl;
    else if (rdnum5 < rdnum1 && rdnum5 < rdnum2 && rdnum5 < rdnum3 && 
        rdnum5 < rdnum4  )
        cout << rdnum5 << "\n" << endl;

    

        

}
