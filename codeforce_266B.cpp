
#include<bits/stdc++.h>
using namespace std;

int main(){

int n,t;
cin>>n>>t;
string arr;
cin>>arr;
while(t!=0)
{for(int i=0;i<n;i++)
{
    if(arr[i]=='B'&& arr[i+1]=='G')
    {
        swap(arr[i],arr[i+1]);
        i++;
    }

}t--;}
 cout<<arr<<endl;
return 0;
}
