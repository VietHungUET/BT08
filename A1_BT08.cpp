#include<bits/stdc++.h>
using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout<<&x<<endl;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây
   y=yval;
   cout<<&y;
}
int main()
{
   f(7);
   g(11);
   // Địa chỉ của x và y là giống nhau
    //Do x là biến cục bộ lên sau khi kết thúc hàm thì x sẽ bị xóa đi và y khởi tạo lại ở vị trí đó
   return 0;
}
