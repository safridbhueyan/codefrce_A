#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
	cin>>n;
	int a=n/5;
	n=n%5;
	int b=n/4;
	n=n%4;
	int c=n/3;
	n=n%3;
	int d=n/2;
	n=n%2;
	int e =n/1;
	cout<<a+b+c+d+e<<endl;
}
