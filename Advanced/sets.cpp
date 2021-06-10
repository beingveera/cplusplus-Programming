#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	set<int> X;
	for (int i = 0; i < 100; ++i)
	{
		X.insert(i);
	}
	cout<<X.count(1);
	int count =0;
	for(auto i : X){
		count+=i;
	}
	cout<<count<<endl;
	count=0;
	X.erase(99);
	for(auto i : X){
		count+=i;
	}
	cout<<count<<endl;
	return 0;

}