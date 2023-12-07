#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
  string a,b,c;

  do{
  getline(cin,a);
  b =toupper(a[0]);
  c=a.replace(0,1,b);
   cout<<c<<endl;
  }
  while(a.length()>1000);

    return 0;
}
