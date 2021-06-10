#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> v1;
	std::vector<int> v2;
	std::vector<int> v3;

	int ch1,ch2;cin>>ch1;
	int inp1,inp2;
	for (int i = 0; i < ch1; ++i)
	{
		cin>>inp1;
		v1.push_back(inp1);
	}

	cin>>ch2;
	for (int i = 0; i < ch2; ++i)
	{
		cin>>inp2;
		v2.push_back(inp2);
	}

(v1 == v2) ? cout<<"Equal" : cout<<"Not Equal";
	return 0;

}