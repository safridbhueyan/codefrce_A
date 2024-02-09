#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string p =s;
transform(p.begin(),p.end(),p.begin(), :: toupper);
string l =s;
 transform(l.begin(),l.end(),l.begin(), :: tolower);
int x=0,y=0;
for(int i = 0 ; i< s.size(); i++){

    if(s[i]== p[i]){

    x++;

}
else if(s[i] == l[i]){
    y++;

}}

if(x<=y)
    cout<<l;
else cout<<p;
return 0;
}
