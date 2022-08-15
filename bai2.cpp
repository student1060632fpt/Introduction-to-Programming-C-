#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct ThongtinSV_t
{
  int MSSV;
  char hoten[80];
  float diemtoan, diemly, diemhoa;
} ThongtinSV;

ThongtinSV Danhsach[1000]; // Chứa danh sách sinh viên
int nSoluongSV = 0;

void NhapDanhsachSV()
{
  int mssv = 0;
  cout << "Nhap thong tin sinh vien thu 1: \n";
  cout << "-ma sinh vien: ";
  cin >> mssv;
  while (mssv != 0)
  {
    int index = nSoluongSV;
    nSoluongSV++;
    Danhsach[index].MSSV = mssv;
    cout << "-ho ten: ";
    cin >> Danhsach[index].hoten;
    cout << "-diem toan: ";
    cin >> Danhsach[index].diemtoan;
    cout << "-diem ly: ";
    cin >> Danhsach[index].diemly;
    cout << "-diem hoa: ";
    cin >> Danhsach[index].diemhoa;

    cout << "Nhap thong tin sinh vien thu " << nSoluongSV + 1 << ": \n";
    cout << "-ma sinh vien: ";
    cin >> mssv;
  }
} // Sinh viên hoàn thiện hàm này
void InSinhvienDiemcaonhat(int nMonhoc)
{
  switch (nMonhoc)
  {
  case 1:
  {
    int indexMax = 0;
    for (int i = 1; i < nSoluongSV; i++)
    {
      if (Danhsach[i].diemtoan > Danhsach[indexMax].diemtoan)
      {
        indexMax = i;
      }
    }
    cout << "Diem toan cao nhat la " << Danhsach[indexMax].diemtoan << ". \n";
    break;
  }
  case 2:
  {
    int indexMax = 0;
    for (int i = 1; i < nSoluongSV; i++)
    {
      if (Danhsach[i].diemly > Danhsach[indexMax].diemly)
      {
        indexMax = i;
      }
    }
    cout << "Diem ly cao nhat la " << Danhsach[indexMax].diemly << ". \n";

    break;
  }
  case 3:
  {
    int indexMax = 0;
    for (int i = 1; i < nSoluongSV; i++)
    {
      if (Danhsach[i].diemhoa > Danhsach[indexMax].diemhoa)
      {
        indexMax = i;
      }
    }
    cout << "Diem hoa cao nhat la " << Danhsach[indexMax].diemhoa << ". \n";

    break;
  }
  default:
    break;
  }
} // Sinh viên hoàn thiện hàm này
void InDanhsachTheoDiemTB()
{
  for (int i = 0; i < nSoluongSV; i++)
  {
    cout << "Sinh vien thu " << i + 1 << ": \n";
    cout << "-ma sinh vien: " << Danhsach[i].MSSV  <<  " \n";
    cout << "-ho ten: " << Danhsach[i].hoten  <<  " \n";
    cout << "-diem trung binh: " << (Danhsach[i].diemhoa + Danhsach[i].diemly + Danhsach[i].diemtoan) / 3  <<  " \n";
  }
} // Sinh viên hoàn thiện hàm này
int main()
{
  NhapDanhsachSV();
  InSinhvienDiemcaonhat(1);
  InSinhvienDiemcaonhat(2);
  InSinhvienDiemcaonhat(3);
  InDanhsachTheoDiemTB();
  return 0;
}
