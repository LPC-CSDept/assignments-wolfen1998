#include <iostream>

using namespace std;
int main()
{
    int N ;
    int M ;
    cout << "type the beginning number";
    cin >> N;
    cout << "type the end number";
    cin >> M;
    while ( N < 1 && M > 99)
    {
        cout << "The numbers must range 1 to 99 ";
        cout << "type the beginning number";
        cin >> N;
        cout << "type the end number";
        cin >> M;
    }

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