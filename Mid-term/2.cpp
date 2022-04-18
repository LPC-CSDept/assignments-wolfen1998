#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("students.txt");
    string name1, name2, name3, name4, name5, name6, name7, name8, name9, name10;
    int score_name1,score2_name1, score_name2, score2_name2, score_name3,score2_name3,score_name4,score2_name4,score_name5,score2_name5,score_name6,score2_name6,score_name7,score2_name7,score_name8,score2_name8,score_name9,score2_name9,score_name10,score2_name10;

    inFile >> name1;
    inFile >> score_name1;
    inFile >> score2_name1;
    cout << "Student name: " << name1<< " Score 1: " << score_name1 << 
    " score 2: " << score2_name1 << " Sum: " << (score_name1 + score2_name1 ) <<
    " Avg:  " << (score_name1 + score2_name1)/2  << endl;
    
    inFile >> name2;
    inFile >> score_name2;
    inFile >> score2_name2;
    cout << "Student name: " << name2<< " Score 1: " << score_name2 << 
    " score 2: " << score2_name2 << " Sum: " << (score_name2 + score2_name2 ) <<
    " Avg:  " << (score_name2 + score2_name2)/2  << endl;

    inFile >> name3;
    inFile >> score_name3;
    inFile >> score2_name3;
    cout << "Student name: " << name3<< " Score 1: " << score_name3 << 
    " score 2: " << score2_name3 << " Sum: " << (score_name3 + score2_name3 ) <<
    " Avg:  " << (score_name3 + score2_name3)/2  << endl;

    inFile >> name4;
    inFile >> score_name4;
    inFile >> score2_name4;
    cout << "Student name: " << name4<< " Score 1: " << score_name4 << 
    " score 2: " << score2_name4 << " Sum: " << (score_name4 + score2_name4 ) <<
    " Avg:  " << (score_name4 + score2_name4)/2  << endl;

    inFile >> name5;
    inFile >> score_name5;
    inFile >> score2_name5;
    cout << "Student name: " << name5<< " Score 1: " << score_name5 << 
    " score 2: " << score2_name5 << " Sum: " << (score_name5 + score2_name5 ) <<
    " Avg:  " << (score_name5 + score2_name5)/2  << endl;

    inFile >> name6;
    inFile >> score_name6;
    inFile >> score2_name6;
    cout << "Student name: " << name6<< " Score 1: " << score_name6 << 
    " score 2: " << score2_name6 << " Sum: " << (score_name6 + score2_name6 ) <<
    " Avg:  " << (score_name6 + score2_name6)/2  << endl;

    inFile >> name7;
    inFile >> score_name7;
    inFile >> score2_name7;
    cout << "Student name: " << name7<< " Score 1: " << score_name7 << 
    " score 2: " << score2_name7 << " Sum: " << (score_name7 + score2_name7 ) <<
    " Avg:  " << (score_name7 + score2_name7)/2  << endl;

    inFile >> name8;
    inFile >> score_name8;
    inFile >> score2_name8;
    cout << "Student name: " << name8<< " Score 1: " << score_name8 << 
    " score 2: " << score2_name8 << " Sum: " << (score_name8 + score2_name8 ) <<
    " Avg:  " << (score_name8 + score2_name8)/2  << endl;

    inFile >> name9;
    inFile >> score_name9;
    inFile >> score2_name9;
    cout << "Student name: " << name9<< " Score 1: " << score_name9 << 
    " score 2: " << score2_name9 << " Sum: " << (score_name9 + score2_name9 ) <<
    " Avg:  " << (score_name9 + score2_name9)/2  << endl;

    inFile >> name10;
    inFile >> score_name10;
    inFile >> score2_name10;
    cout << "Student name: " << name10<< " Score 1: " << score_name10 << 
    " score 2: " << score2_name10 << " Sum: " << (score_name10 + score2_name10 ) <<
    " Avg:  " << (score_name10 + score2_name10)/2  << endl;





    inFile.close();
}