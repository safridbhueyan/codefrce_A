#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
  string a;
  int c=0,i;
  cin>>a;
sort(a.begin(),a.end());
for(i=0;i<a.length();i++)
{ if(a[i]!=a[i+1])
   {
       c++;
   }
}
if(c%2==0){
    cout<<"CHAT WITH HER!"<<endl;
}
else{
    cout<<"IGNORE HIM!"<<endl;
}
    return 0;
}
