#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x;cin>>x;
	int arr[x];int inp;
	char ch[x];
	int count=0;
	for (int i = 0; i < x; ++i)
	{
		cin>>inp;
		arr[i]=inp;
	}

	for (int i = 0; i < x; ++i)
	{
		ch[i]=char(i+65);
	}

	string str = "lokesh";
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j <x; ++j)
		{
			if(arr[i]==arr[j]){
				count++;
			}
		}
	}

	cout<<count/x;

	// for (int i = 0; i < x; ++i)
	// {
	// 	cout<<ch[i]<<endl;
	// }
	return 0;
}