#include <bits/stdc++.h>
using namespace std;

int main(){
	std::vector<int> v;
	int inp;cin>>inp;
	int ch;
	int find=53;
	for (int i = 0; i < inp; ++i)
	{
		cin>>ch;
		v.push_back(ch);
	}

	for (int i = 0; i < inp; ++i)
	{
		(v[i]==find)? cout<<"Element found at index of : "<<i : cout<<"";

	}

}