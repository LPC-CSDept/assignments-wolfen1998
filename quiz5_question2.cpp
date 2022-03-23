#include <iostream>
using namespace std;
int main(){
    int N;
    int M;
    cout << "Enter Your Base Number: ";
    cin >> N;
    cout << "Enter Your Exponent: ";
    cin >> M;
    cout << N << " to power numbers are" << endl;
    int num ;
    int outputs = 1;
    for (num = 1; num <= M; num++ )
    {
        outputs *= N;
        cout <<outputs << endl;
    }
    

   

}
}