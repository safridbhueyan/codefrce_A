#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
int x[3];                    // we took an int array size of 3
int sum=0;                  // initialize the each line sum value for 1
int count =0;              // for each line sum of 2 and more then 2 count 1 and store
for(int i=0; i<n; i++)
{    sum = 0;            // to reset the value for each line of sum
    for(int j =0;j<3;j++){
        cin>>x[j];
        if(x[j]==1){sum++;}
        }

if(sum>=2){count++;}

}
cout<<count<<endl;

   return 0;
}
