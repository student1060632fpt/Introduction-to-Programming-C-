// phần include và khai báo sử dụng thư viện
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  // khai báo và đọc các điểm số vào
  int R;
  float V;
  cin >> R;
  // phần thân chính, nơi mà sinh viên bổ sung, điều chỉnh code để hoàn thành chương trình
  V = R * (5.0 / 1023.0);
  // dieu kien cua den dang tat
  if (V < 1.4)
    cout << "Den led dang tat" << endl;
  // dieu kien cua den sang mo
  else if (V < 2.5)
    cout << "Den led co do sang mo" << endl;
  // dieu kien cua den sang trung binh
  else if (V < 5)
    cout << "Den led co do sang trung binh" << endl;
  // dieu kien cua den sang toi da
  else if (V == 5)
    cout << "Den led co do sang toi da" << endl;
  else
    cout << "Den led bi doan mach" << endl;
  return 0;
}