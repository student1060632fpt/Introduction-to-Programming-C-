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
 
}
bool isPrime(int n)
{
  /*TODO: add your code here*/
}
bool isSquared(int n)
{
  /*TODO: add your code here*/
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

  /*---------------------------------*/
  cout << "Khoang cach xe da di chuyen tu vi tri ban dau toi diem hien tai: "
       << distance << '\n';

  /*---------------------------------
   * Check if distance is prime
   * Remember to assign appropriate value to variable `primality`
   */
  /*TODO: add your code here*/

  /*---------------------------------*/
  /*---------------------------------
   * Check if distance is squared
   * Remember to assign appropriate value to variable `squared`
   */
  /*TODO: add your code here*/

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
