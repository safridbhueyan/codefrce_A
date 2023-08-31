#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0; cin>>n;

for(int i=0;i<n;i++)
{  string x; cin>>x;
if(x=="X++"){ p++; }
else if(x=="++X"){ ++p; }
else if(x=="X--"){ p--; }
else if(x=="--X"){ --p; }
}
cout<<p<<endl;
return 0;
}
