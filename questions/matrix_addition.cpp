#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int x,y;cin>>x>>y;
	int arr1[x][y],arr2[x][y];
	int arr3[x][y];
	int inp;

	for (int i = 0; i < x; i++)110	100 90
80	70	60
50	40	30	
	{
		for (int j = 0; j < y; j++)
		{
			cin>>inp;
			arr1[i][j]=inp;
			//cout<<arr1[i][j]<<endl;
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin>>inp;
			arr2[i][j]=inp;
		}
	}



	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout<<arr3[i][j];
			if(i<j){
				cout<<"\n";
			}
			else{
				cout<<"\t";
			}
		}
	}

	return 0;
}