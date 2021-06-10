#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int x;cin>>x;
	int count=0;
	for (int i = 1; i <= x; ++i)
	{
		if(x%i==0){
			count++;
		}
	}
	cout<<count<<endl;
	for (int i = 1; i <= x; ++i)
	{
		if(x%i==0){
			cout<<i<<" ";
		}
	}

	

	return 0;
}