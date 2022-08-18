#include <cmath>
#include <iostream>
#include <string>
using namespace std;
/******************************************************************************
 * Support Functions: these functions below are optional. If you want your code
                      to be clearer, you can implement them. However if you
                      dont know how to use funtion in programming, dont worry,
                      you dont have to implement them, and you just add a comment
                      in each of them.
*******************************************************************************/
int move(string moves)
{
  /*TODO: add your code here*/
  int x = 0, y = 0, length = moves.size();
  for (int i = 0; i < length; i = i + 2)
  {
    char letter = moves[i];
    int step = (int)moves[i + 1] - 48;
    switch (letter)
    {
    case 'U':
      x += step;
      break;
    case 'D':
      x -= step;
      break;
    case 'L':
      y -= step;
      break;
    case 'R':
      y += step;
      break;
    default:
      break;
    }
  }
  float distanceNeedRough = sqrt(x * x + y * y);
  return round(distanceNeedRough);
}
bool isPrime(int n)
{
  /*TODO: add your code here*/
  bool flag = true;

  if (n < 2)
    return flag = false;

  int i = 2;
  while (i < n)
  {
    if (n % i == 0)
    {
      flag = false;
      break; /*Chỉ cần tìm thấy 1 ước số là đủ và thoát vòng lặp*/
    }
    i++;
  }
  return flag;
}
bool isSquared(int n)
{
  /*TODO: add your code here*/
  bool flag = false;

  int i = 0;
  while (i <= n)
  {
    if (pow(i, 2) == n)
    {
      flag = true;
      break;
    }
    i++;
  }

  return flag;
}
int main()
{
  string moves;
  int distance;
  bool primality, squared;
  /// =======================================================
  /*
      The following code initializes variable `moves`
  */
  /// BEGIN   TESTCASE
  cin >> moves;
  /// END     TESTCASE
  /*---------------------------------
   * Calculate the distance
   * Remember to assign calculated value to variable `distance`
   */
  /*TODO: add your code here*/
  distance = move(moves);

  /*---------------------------------*/
  cout << "Khoang cach xe da di chuyen tu vi tri ban dau toi diem hien tai: "
       << distance << '\n';

  /*---------------------------------
   * Check if distance is prime
   * Remember to assign appropriate value to variable `primality`
   */
  /*TODO: add your code here*/
  primality = isPrime(distance);
  /*---------------------------------*/
  /*---------------------------------
   * Check if distance is squared
   * Remember to assign appropriate value to variable `squared`
   */
  /*TODO: add your code here*/
  squared = isSquared(distance);
  /*---------------------------------*/
  if (primality)
  {
    cout << "So " << distance << " la so nguyen to\n";
  }
  if (squared)
  {
    cout << "So " << distance << " la so chinh phuong\n";
  }
  return 0;
}
