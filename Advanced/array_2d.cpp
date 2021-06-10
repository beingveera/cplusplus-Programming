#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
int arr[3][3];
for (int i = 0; i < 3; ++i)
{
	for (int j = 0; j < 3 ; ++j)
	{
		cin>>arr[i][j];
	}
}

for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 3 ; j++)
	{
		if(j==2){
			cout<<arr[i][j];
			cout<<"\n";
		}
		else{
			cout<<arr[i][j];
			cout<<"\t";
		}
		
		
	}
}


}