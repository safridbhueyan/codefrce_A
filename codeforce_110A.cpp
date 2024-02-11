#include<bits/stdc++.h>
using namespace std;

int main(){
long long int a;
 int l=0;
cin>>a;
string s = to_string(a);
for(int i = 0; i<s.size();i++){
    if(s[i]=='4'|| s[i]=='7')
    l++;
}
if(l==4||l==7){
    cout<<"YES";
} else
cout<<"NO";
return 0;
}
