#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main() 
{
  int choice;
  cin >> choice;
  if (choice == 1)
  {  
    double radius;
    double area;
    const double pi = 3.14159;
    cout << "You chose to calculate the Area of a Circle\nWhat is the radius of the circle? ";
    cin >> radius;
    if (radius < 0)
      cout << " The radius cannot be less than zero. Rerun the program please to try again. ";
      return(0);
        
    
    area = pi * pow(radius,2);
    cout << "The are of the Cricle is"<< area<< endl;
  }
  if (choice == 2)
  {
    double width, length;
    double area;
    cout << "You chose to calculate the Area of a Rectangle\nWhat is the length and width?\nFirst type the length then put a space and type the width \n";
    cin >> length >> width;
    if (length < 0 or width < 0)
      cout << " The length or width cannot be less than zero. Rerun the program please to try again. ";
      return(0);
    area = length * width;
    cout << "The are of the Rectangle is "<< area<< endl;
    
  }
  if (choice == 3)
  {
    double height, base, area;
    const double half = 0.5;
    cout << "You chose to calculate the Area of a Triangle\nWhat is the height and the base of the triangle? \nType the height then put a space and then type the base ";
    cin >> height >> base;
    if (height < 0 or base < 0)
      cout << " The height or base cannot be less than zero. Rerun the program please to try again. ";
      return(0);
    area = (base*height*half);
    cout << "The area of the Triangle is " << area << endl;
  }
  if (choice == 4)
    cout << "You Chose to Quit the Program. ";
    return(0);
    
  
}