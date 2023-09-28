#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string sum,ReArr;
    cin>>sum;
    for(i=0;i<sum.size();i++)
    {
        if(sum[i]!='+')
        {
            ReArr.push_back(sum[i]);
        }}
        sort(ReArr.begin(),ReArr.end());
        cout<<ReArr[0];
        for(i=1;i<ReArr.length();i++)
        {
            cout<<"+"<<ReArr[i];
        }




    return 0;
}
