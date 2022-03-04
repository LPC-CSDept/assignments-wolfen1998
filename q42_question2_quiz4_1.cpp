#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
  double RATE_1KG_OR_LESS,RATE_2KG_TO_6,RATE_6KG_TO_10,RATE_10KG_TO_20;
	RATE_1KG_OR_LESS = 1.1;
	RATE_2KG_TO_6 = 2.2;
	RATE_6KG_TO_10 = 3.7;
	RATE_10KG_TO_20 = 4.8;
  double totalCharge;

         
  double weight, distance;
  cout << "This program will calcualte the price for shipping a package";
  cout << "Please type the weight of the package and the how far the shipping distance is.\nFirst type the weight and put a space then type the distance in miles\n";
  cin >> weight >> distance;
  cout << setprecision(2) << fixed;
  if (distance < 10 || distance > 3000)
  {
    cout << "The distance cannot be less than 10 miles or 3000 miles. ";
    return(0);
  }
    
  if (weight < 2 || weight > 20)
  {
    cout << "The weight cannot be less 2KG or more than 20KG.";
    return(0);
  }
  if (weight <= 2)
  {
    totalCharge = ((distance/500)*RATE_1KG_OR_LESS);
  }
  if (weight > 2 && weight <= 6)
  {
    totalCharge = ((distance/500)*RATE_2KG_TO_6);
  }
  if (weight > 6 && weight <= 10)
  {
    totalCharge = ((distance/500)*RATE_6KG_TO_10);
  }
  if (weight > 10 && weight <= 20)
  {
    totalCharge = ((distance/500)*RATE_10KG_TO_20);
  }
	cout << "The price for shipping is $" << totalCharge << endl;
}