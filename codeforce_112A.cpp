#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b; cin>>a>>b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
  int d =a.compare(b);
    if(d==0){
        cout<<"0"<<endl;
    }
    else if(d<0){
        cout<<"-1"<<endl;
    }
    else if(d>0) {
        cout<<"1"<<endl;
    }
return 0;
}
