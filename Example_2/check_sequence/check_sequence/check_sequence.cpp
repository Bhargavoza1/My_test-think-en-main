#include <string>
#include <iostream>
using namespace std;

// this function will check all s2 is subset of s1

bool IsitSame(string s1, string s2 )
{
    //assigning local int to get length of string.
    int _lens1 = s1.length();
    int _lens2 = s2.length();

    int _j = 0;  
 
    //iterating both string in for loop

    // what this thing is doing?
    /*this loop will check every elements in sequence. 
    * for example if s1 = Iloveyou , s2 = oyou
    * it will check first element of s2 in s1 in increment way.
    * if it present inside s1 then s2 will increase by 1.
    * 
    * Note s1 will not iterating angain from 0.
    * 
    * 0      n        2    n        2    n
    * |      |  ->    |    |  ->    |    |
    * v      v        v    v        v    v
    * Iloveyou      Iloveyou      Iloveyou
    * 
    *                here           next inter
    *                founded
    * 
    * 0  n           0  n           1 n
    * |  |      ->   |  |     ->    | |
    * v  v           v  v           v v
    * oyou           oyou          oyou
    * 
    */

    for (int i = 0; i < _lens1 && _j < _lens2; i++)
        if (s1[i] == s2[_j])
            _j++;

   
    // _j is equal to the length of string s2 it will pass true value else false
    return _j == _lens2;
}

int main()
{
    string S1 /*= "I love you"*/;
    string S2  /*= "oyou"*/;

     cout << "Enter string s1: ";
     getline(std::cin, S1);
     //cout << endl;
     cout << "Enter string s2: ";
     getline(std::cin, S2);
     cout << endl;
 
    IsitSame(S1, S2 ) ? cout << "Yes": cout << "No";
    return 0;
}