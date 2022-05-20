#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deleteone(vector<int> &);
int main()
{
 vector<int> number;
 int size = 20;
 srand(time(0));
 makevector(number, size);
 printvector(number);
 deleteone(number);
  printvector(number);
}
void makevector(vector<int> &vec, int size)
{
 for(int i=0; i<size; i++)
         vec.push_back(rand() % 10);
}
void printvector(vector<int> vec)
{
 for(int v : vec)
          cout << v << "\t";
 cout << endl;
}
void deleteone(vector<int> &vec)
{
  int count = 0;
      int usernum;

      cin >> usernum;
/*
  find() returns an iterator that points to the value of "username." The while loop will continue lookinf for the value of "username" Once all values matching the value of "username" is removed, then find() will return the iterator that points to the last element in the passed vector which will stop the while loop. 
Erase require the iterator that points to the value of "username"
We can delelete all items which have same value as "username" by having the while looping look for the value and stop the loop once all "username" values have been erased.
*/
  while(find(vec.begin(), vec.end(), usernum) != vec.end()) 
      {
        count++;
        vec.erase(find(vec.begin(),vec.end(),usernum));
      } 
      
      cout <<"Deleted the user name: "<< usernum <<"\n"<<count <<" times"<< endl;

 
}