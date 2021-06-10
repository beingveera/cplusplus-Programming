#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;cin>>str;
	char arr[str.length()];
	for (int i = 0; i < str.length(); ++i)
	{
		arr[i]=str[i];
	}

	for (int i = 0; i < str.length(); ++i)
	{
		if (int(arr[i]>=65 && int(arr[i]) <=90))
		{
			cout<<" ";
			cout<<arr[i];
		}
		else{
			cout<<arr[i];
		}
	}
	return 0;
}