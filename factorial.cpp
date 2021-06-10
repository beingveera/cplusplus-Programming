#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int sum=1;
	while(x!=1){
		sum=sum*x;
		x=x-1;
	}
	cout<<sum;

}