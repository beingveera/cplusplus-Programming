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
	for (int i = 0; i < x; ++i)
	{
		if(arr[i]<0){
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}