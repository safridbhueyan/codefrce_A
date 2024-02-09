#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    string a_str = to_string(a);
    for(int i=0;i<b;i++){
        if(a_str.back()=='0'){
          c = a/10;
        }
       else { c= a-1;}
       a=c;
       a_str = to_string(a);
    }
    cout<<c;
}
