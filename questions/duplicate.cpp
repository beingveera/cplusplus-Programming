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

	int npx[x];

	for (int i = 0; i < x; ++i)
	{
		npx[i]=arr[i];
	}

	sort(arr,arr+x);
	int count=0;

	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < x-1; ++j)
		{
			if(arr[i]==arr[j+1]){
				count++;
				//cout<<count<<endl;
			}
		}
	}

	cout<<"Total no of repeated : "<<count/x;
	return 0;
}