#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string a;
cin>>a;

int A=0,D=0;
for(int i =0 ; i<n; i++){

    if(a[i]=='A'){
        A++;
    }
    else D++;
}
if(A==D){
    cout<<"Friendship";
}
else if(A>D){

    cout<<"Anton";

}
else  cout<<"Danik";

return 0;
}
