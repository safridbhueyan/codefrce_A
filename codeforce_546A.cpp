#include<bits/stdc++.h>
using namespace std;
int main(){
int cost,cash,want,borrow=0;
cin>>cost>>cash>>want;
for(int i =1;i<=want;i++)
{
    borrow+=(cost*i);
}
if(cash>=borrow){
    cout<<0<<endl;
}
else if(borrow>cash){
cout<<borrow-cash<<endl;
}
return 0;
}

