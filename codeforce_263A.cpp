#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[5][5],indx;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>x[i][j];
            if(x[i][j]==1){
                indx =abs(2-i)+abs(2-j);

            }
        }
    }
    cout<<indx<<endl;


    return 0;
}
