#include<bits/stdc++.h>
using namespace std;
int main(){
string a;
cin>>a;
string b;
cin>>b;
int n= a.length();
for(int i=0; i<n/2;i++)
{
    char temp = a[i];
    a[i]=a[n-i-1];
    a[n-i-1] = temp;
}
if(a==b){
    cout<<"YES";
}
else cout<<"NO";
return 0;
}
