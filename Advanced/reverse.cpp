#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;cin>>x;
	int len;cin>>len;
int temp;

	for (int i = 0; i < len; ++i)
	{
		temp=x%10;
		cout<<temp;
		x=x/10;7
	}

	return 0;
}