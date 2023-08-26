#include<iostream>
using namespace std;

int main(){
int N,i,p,j,count;
int x[50];
cin>> N;
for(i=1;i<=N;i++){
        count=0;
    cin>>p;
    for(j=0;j<p;j++){
        cin>>x[j];
    if(x[j]%2!=0){
  count++;
}}
 if(count%2==0){
    cout<<"Yes\n";
}
else{ cout<<"No\n";  }
}
}



