
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

// Driver program to test above function
int main()
{
  string a;
  cout << "Type number: ";
  cin >> a;


  for(int i = 0; i < a.length(); i++){
    cout << a[i] << " ";
  }
 
  return 0;
}