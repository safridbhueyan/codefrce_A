#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int k =  ((m+a-1)/a)*((n+a-1)/a);
    cout<<k<<endl;


    return 0;
}
