#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

	std::vector<int> v1;
	std::vector<int> v2;

	int len1;cin>>len1;
	int len2;cin>>len2;

	int inp; 

	for (int i = 0; i < len1; ++i)
	{
		cin>>inp;
		v1.push_back(inp);
	}

	for (int i = 0; i < len2; ++i)
	{
		cin>>inp;
		v2.push_back(inp);
	}

	reverse(v1.begin(),v1.end());
	reverse(v1.begin(),v1.end());

	std::vector<int> v3;
	int sun;
	for (int i = 0; i < len1; ++i)
	{
		sun=v1[i]+v2[i];
		v3.push_back(sun);
	}
	return 0;
}