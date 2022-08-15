
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

// Driver program to test above function
int main()
{
  char* pa;
  cout << "Type a palindrome: ";
  // cin >> pa;
  int l = 0;
  int h = strlen(pa) - 1;

  // Keep comparing characters while they are same
  while (h > l)
  {
    if (pa[l++] != pa[h--])
    {
      printf("%s is not a palindrome\n", pa);
      return 0;
    }
  }
  printf("%s is a palindrome\n", pa);
  return 0;
}