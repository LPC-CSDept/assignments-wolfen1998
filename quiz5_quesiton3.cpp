#include <iostream>

using namespace std;
int main()
{
    int N = 1;
    int M = 25;
    int num;
    cout << "The prime numbers from "<< N << " to "<< M <<" are: ";
    for (num = N; num <= M; num++)
    {
        if (M == 2)
        {
            cout << "2 is a prime number.";
            break;
        }
        else if (num==2)
        {
            cout << num << ", ";
        }
        else if (num % 2 != 0)
            cout << num<< ", ";
    
    }
    

   

}