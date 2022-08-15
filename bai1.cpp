
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

typedef struct ThongtinHH_t
{
  int nID;
  string strTen;
  float fGia;
  int nSl;
} ThongtinHH; // Sinh viên hoàn thiện

ThongtinHH danhsach[1000]; // Chứa danh sách các mặt hàng
int nSLMatHang = 0;        // Số lượng các mặt hàng

void hienthi_Menu()
{
  cout << "Lua chon chuc nang \n";
  cout << "1. Hien thi kho hang \n";
  cout << "2. Mat hang ton kho nhieu nhat \n";
  cout << "3. Nhap hang \n";
  cout << "4. Xuat hang \n";
} // Sinh viên hoàn thiện
void hienthi_Khohang()
{
  cout << setw(13) << left << "Ma mat hang";
  cout << setw(20) << left << "Ten";
  cout << setw(15) << left << "Don gia";
  cout << setw(8) << left << "So luong" << endl;
  cout << setfill('-');
  cout << setw(55) << "-" << endl;
  cout << setfill(' ');
  for (int i = 0; i < nSLMatHang; i++)
  {
    cout << setw(13) << left << danhsach[i].nID;
    cout << setw(20) << left << danhsach[i].strTen;
    cout << setw(15) << left << danhsach[i].fGia;
    cout << setw(8) << left << danhsach[i].nSl << endl;
  }
} // Sinh viên hoàn thiện
void timTonkho_nhieunhat()
{
  if (nSLMatHang == 0)
  {
    cout << "Hien tai chua co mat hang nao \n";
    system("pause");
  }
  int maxIndex = 0;
  for (int i = 1; i < nSLMatHang; i++)
  {
    if (danhsach[i].nSl > danhsach[maxIndex].nSl)
    {
      maxIndex = i;
    }
  }
  cout << "Mat hang co so luong ton kho nhieu nhat \n";
  cout << "Ma mat hang: " << danhsach[maxIndex].nID << " \n";
  cout << "Ten mat hang: " << danhsach[maxIndex].strTen << " \n";
  cout << "Don gia: " << danhsach[maxIndex].nSl << " \n";
  cout << "So luong: " << danhsach[maxIndex].nSl << " \n";
} // Sinh viên hoàn thiện
void nhapHang()
{
  int maMH;
  int slNhapThem = 0;
  cout << "Nhap ma mat hang: ";
  cin >> maMH;
  for (int i = 0; i < nSLMatHang; i++)
  {
    if (danhsach[i].nID == maMH)
    {

      cout << "Cap nhap so luong nhap them cua mat hang nay: ";
      cin >> slNhapThem;
      danhsach[i].nSl += slNhapThem;
    }
  }
  if (nSLMatHang == 0 || slNhapThem == 0)
  {
    int index = nSLMatHang;
    nSLMatHang++;
    danhsach[index].nID = maMH;
    cout << "Ten mat hang: ";
    cin >> danhsach[index].strTen;
    cout << "Don gia: ";
    cin >> danhsach[index].fGia;
    cout << "So luong: ";
    cin >> danhsach[index].nSl;
  }

} // Sinh viên hoàn thiện

/*Tạo hàm xóa 1 phần tử trong mảng*/
void xoaMatHang(int position)
{
  /* Dịch phần tử về đầu mảng từ vị trí xóa */
  for (int i = position; i < nSLMatHang - 1; i++)
  {
    danhsach[i] = danhsach[i + 1];
  }
  /*Thay đổi giá trị phần tử cuối cùng thành NULL*/
  danhsach[nSLMatHang - 1].fGia = 0.0;
  danhsach[nSLMatHang - 1].nID = 0;
  danhsach[nSLMatHang - 1].nSl = 0;
  danhsach[nSLMatHang - 1].strTen = "";
  nSLMatHang--;
}

void xuatHang()
{
  int maMH;
  int slXuat = 0;
  bool daXuat = false;
  cout << "Nhap ma mat hang: ";
  cin >> maMH;
  for (int i = 0; i < nSLMatHang; i++)
  {
    if (danhsach[i].nID == maMH)
    {
      cout << "Nhap so luong xuat mat hang nay: ";
      cin >> slXuat;

      if (slXuat == danhsach[i].nSl)
      {
        cout << "Da xoa mat hang nay \n";
        xoaMatHang(i);
        daXuat = true;
      }
      else if (slXuat > danhsach[i].nSl)
      {
        cout << "So luong xuat phai be hon so luong mat hang";
      }
      else if (slXuat < danhsach[i].nSl)
      {
        danhsach[i].nSl -= slXuat;
        daXuat = true;
      }
    }
  }
} // Sinh viên hoàn thiện

int main()
{
  int nLuachon;
  do
  {
    hienthi_Menu();
    cout << "Nhap chuc nang: ";
    cin >> nLuachon;
    switch (nLuachon)
    {
    case 1:
      hienthi_Khohang();
      break;
    case 2:
      timTonkho_nhieunhat();
      break;
    case 3:
      nhapHang();
      break;
    case 4:
      xuatHang();
    }
  } while (nLuachon >= 1 && nLuachon <= 4);
  return 0;
}
