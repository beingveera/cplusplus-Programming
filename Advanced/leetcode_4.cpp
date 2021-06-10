#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	std::vector<int> v1;
	std::vector<int> v2;
	std::vector<int> v3;

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


	v1.insert(v1.end(),v2.begin(),v2.end());

	// for(auto j : v1){
	// 	cout<<j<<endl;
	// }

	sort(v1.begin(),v1.end());

	int n=(v1.size()/2);
	float x=(v1[n]+v1[n+1])/2;
	cout<<x<<endl;
	return 0;
}