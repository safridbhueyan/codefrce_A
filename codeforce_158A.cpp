#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0; cin>>n>>k;
     int a[n];
    for(int i=0; i <n ; i++)
   {
       cin>>a[i];
   }
    for(int i=0; i <n ; i++)
   {
      if(a[i]>=a[k-1]&& a[i]>0)// k-1 coz its starts with 0 to k which is k-1
       {
           sum++;
       }
   }
   cout << sum <<endl;


    return 0;
}
