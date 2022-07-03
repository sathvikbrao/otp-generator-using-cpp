#include<bits/stdc++.h>
using namespace std;
class digotp4{
 private:
  int otp;
  public:
   void genotp()
   {
    srand(time(0));
    otp=(rand()%10000)+1;
   }
   void sendotp()
   {
   cout<<otp<<endl;
   }


};
int main()
{
    digotp4 o1;
    o1.genotp();
    o1.sendotp();
    return 0;
}