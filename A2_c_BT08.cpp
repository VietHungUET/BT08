#include<bits/stdc++.h>
using namespace std;
int main()
{
 double a[4]={1.5,2.0,3.9};
 for(double*cp=a;(*cp)!='\0';cp++)
 {
   cout << (void*) cp << " : " << (*cp) << endl;

 }
return 0;

}
