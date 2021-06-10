#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x;cin>>x;
	int y;cin>>y;

	int arr1[x];
	int arr2[y];
	int arr3[x+y];

	int inp1,inp2;

	for (int i = 0; i < x; ++i)
	{
		cin>>inp1;
		arr1[i]=inp1;
	}

	for (int i = 0; i < y; ++i)
	{
		cin>>inp2;
		arr2[i]=inp2;
	}

	for (int i = 0; i < x+y; ++i)
	{
		if(x>i){
			arr3[i]=arr1[i];
		}
		else{
			arr3[i]=arr2[i-x];
		}
	}

	for (int i = 0; i < x+y; ++i)
	{
		cout<<arr3[i]<<endl;
	}

	return 0;
}