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

	int p;cin>>p;

	for (int i = 0; i < p; ++i)
	{
		if(x>p){
			arr[p]=arr[p+1];
			arr[p+1]=
		}
	}


	for (int i = 0; i < x; ++i)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}