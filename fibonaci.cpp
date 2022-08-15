// Viết chương trình để tính toán và chứa dãy Fibonacci trong một dãy số nguyên F, trong đó F[i] là số Fibonacci thứ i (0 là số Fibonacci thứ 0). Chiều dài của dãy sẽ được nhập bởi người sử dụng.

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, first = 0, second = 1, next, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
      if(i<=1){
        next = i;
      } else {
        next = first + second;
        first = second;
        second = next;
      }
      cout << next << " ";
    }
    return 0;
}