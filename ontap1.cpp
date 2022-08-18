
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int F(int n, int x, int y)
{
  if (n == 0)
    return x;
  else
    return (y + F(n - 1, x - 1, y + 1));
  return 0;
}
// Driver program to test above function
int main()
{
  int FC = F(3, 4, 5);
  cout << FC;

  return 0;
}