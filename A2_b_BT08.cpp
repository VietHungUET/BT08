#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a[4]={1,2,3};
 for(int*cp=a;(*cp)!='\0';cp++)
 {
   cout << (void*) cp << " : " << (*cp) << endl;

 }
return 0;

}
