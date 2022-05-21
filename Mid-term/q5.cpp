#include <iostream>
#include <fstream>
using namespace std;

void getInput(int &, int &);
bool isSame(int,int);
void intDivision(int &, int &, int &);
void fileWrite(int);
void repeat();


int main(){
  /* 
   I first initialize two ints, n1 and n2. I send these two variables as parameters
   to function getInput which will ask the user to assign numbers to these variables
   then I send these two variables to IsSame() to see if the numbers are the same 
   if they are the same then the program will exit.
   then I call intDivision which will divide the two numbers accordingly and 
   return the value to the variable that called it
   then I call fileWrite() to write the file to the text file.
   Then i ask the user if the program should be repeated, if the end user types y
   the code will repeat itself


   
   */
  bool check;
  int result;
  
  int n1,n2;
  getInput(n1,n2);
  cout << "The two numbers are: "<< n1 << " " << n2 << endl;
  check = isSame(n1,n2);
  if (check == true)
  {
    cout << "The numbers are the same." << endl;
    exit(0);
  }
  intDivision(n1,n2,result);
  cout<< "The integer of the two given numbers is: " << result << endl;
  cout << "The number will be written to text file: numbers.txt" << endl;
  fileWrite(result);

  cout << "Type y to repeat the program. Type anything else to quit" << endl;
  string repeatOrNot;
  repeatOrNot = "n";
  
  cin >> repeatOrNot;

  //for some reason here the while loop would continue even if repeatOrNot was not equal to "y". 
  //So I used if condition and it works perfectly fine
  if (repeatOrNot == "y")
    {
      //repeat() contains all code in main function.
    repeat();
    }
  
}

void getInput(int &n1,int &n2){
  cout << "Type two integer numbers with space in between them: ";
  cin >> n1 >> n2;
  



}
bool isSame(int n1, int n2)
{
  if (n1 == n2){
    return true;
  }
  else
  {
    return false;
  }
}
void intDivision(int &n1, int &n2, int &result){
  if (n1 > n2)
  {
    result = n1/n2;
  }
  else
  {
    result = n2/n1;
  }
}
// since i can't call the main() so I copied everything in main function and put it here. If the user wants the program to run again, then the main() will call repeat function
// which will call itself if the user wills so
void repeat(){
   
  bool check;
  int result;
  
  int n1,n2;
  getInput(n1,n2);
  cout << "The two numbers are: "<< n1 << " " << n2 << endl;
  check = isSame(n1,n2);

  if (check == true)
  {
    //if n1 and n2 are the same, check will be equal to true and the user will be
    // informed that the numbers are the same and  the program will end.
    cout << "The numbers are the same." << endl;
    exit(0);
  }
  intDivision(n1,n2,result);
  cout<< "The integer of the two given numbers is: " << result << endl;
  cout << "The number will be written to text file: numbers.txt" << endl;
  fileWrite(result);

  cout << "Type y to repeat the program. Type anything else to quit" << endl;
  string repeatOrNot;
  repeatOrNot = "n";
  
  cin >> repeatOrNot;

  
  if (repeatOrNot == "y")
    {
    // repeats the code if the user types y when asked
    repeat();
    }
  
}
void fileWrite(int result)
  {
  ofstream writeToFile;
  //opens the file in append mode
  writeToFile.open("numbers.txt", ios_base::app);
  writeToFile << result << "\n";
  writeToFile.close();
  }