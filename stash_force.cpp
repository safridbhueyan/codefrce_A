#include<iostream>
using namespace std;
int main(){
    int N,i,bread,cheese,ham,sum,repo;

cin>> N;
for(i=1;i<=N;i++){
    cin>> bread >> cheese>> ham;
sum= cheese+ham;
if(bread==sum){
    repo= (2*bread-1);
}
else if(bread>sum){
    repo=(2*sum+1);

}
else if(bread<sum){
    repo= (2*bread-1);
}
cout<< repo <<endl;

}

}
