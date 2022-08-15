#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

float grade[1000] = {4, 6, 8.2, 9.9, 10}; // Chứa danh sách điểm của sinh viên
int nCount = 5;                           // số lượng sinh viên của lớp học
int pHist[5];

float GradeAverage()
{
  float sum = 0;
  for (int i = 0; i < nCount; i++)
  {
    sum += grade[i];
  }
  float result = sum / nCount;

  return result;
}
void BuildScoreHist()
{
  int kem = 0, tb = 0, kha = 0, gioi = 0, xs = 0;
  for (int i = 0; i < nCount; i++)
  {
    if (grade[i] >= 0 && grade[i] < 5)
    {
      kem++;
    }
    else if (grade[i] < 6.5)
    {
      tb++;
    }
    else if (grade[i] < 8.0)
    {
      kha++;
    }
    else if (grade[i] < 9.0)
    {
      gioi++;
    }
    else if (grade[i] <= 10.0)
    {
      xs++;
    }
  }
  cout << "So diem kem: " << kem << " \n";
  cout << "So diem tb: " << tb << " \n";
  cout << "So diem kha: " << kha << " \n";
  cout << "So diem gioi: " << gioi << " \n";
  cout << "So diem xuat sac: " << xs << " \n" << endl;
}
int main()
{

  float diemtb = GradeAverage();
  cout << "Diem trung binh la " << diemtb << ". \n";
  BuildScoreHist();

  return 0;
}
