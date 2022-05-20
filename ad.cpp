#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void gerRandnum(int &, int &, int &);
int  findMin(int , int , int ); 


int main(){
    int n1,n2,n3, min;
    gerRandnum(n1, n2, n3);
    min = findMin(n1,n2,n3);
    cout << n1<< " " << n2<< " " <<" " << n3 << endl;
    
    cout  << " The lowest number is:  " << min ;
    
    
}
void gerRandnum(int &n1, int &n2, int &n3){
    srand(time(0));
    n1 =rand();
    n2 = rand();
    n3 = rand();
}
int  findMin(int n1, int n2, int n3){
if (n1 < n2 && n1 < n3)
{
    
    return n1;
}
else if (n2 < n1 && n2 < n3)
{
    
    return n2;
}
else if (n3 < n1 && n3 < n2)
{
    
    return n3;
}

}