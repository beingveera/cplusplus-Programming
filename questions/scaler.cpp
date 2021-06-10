#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x; cin>>x;
	int arr[x][x];
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < x; ++j)
		{
			if(i==j){
				arr[i][j]=1;
			}
			else{
				arr[i][j]=0;
			}
		}
	}


	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < x; ++j)
		{
			cout<<arr[i][j];
			if(j>i){
				cout<<"\n";
			}
			else{
				cout<<"\t";
			}
		}
	}
	return 0;
}