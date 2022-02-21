#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    unsigned seed;
    unsigned seed = time(0);
    int num1,num2,num3;
    num1 = rand();
    num2 = rand();
    num3 = rand();
    cout << "The first number is "<< num1 << endl;
    cout << "The second number is "<< num2 << endl;
    cout << "The third number is "<< num3 << endl;
    cout << "The sum of the numbers is "<< num1 + num2 + num3<<endl;
    cout << "The average of the numbers is " << (num1 +num2 + num3)/3;

}