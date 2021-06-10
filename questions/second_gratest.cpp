#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x;cin>>x;
	int arr[x];
	int inp;

	for (int i = 0; i < x; ++i)
	{
		cin>>inp;
		arr[i]=inp;
	}

	sort(arr,arr+x);
	// for (int i = 0; i < x; ++i)
	// {
	// 	cout<<arr[i]<<endl;
	// }

	cout<<arr[x-2];
	return 0;
}