#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string x;cin>>x;
	char arr[x.length()];
	char arr1[x.length()];
	for (int i = 0; i < x.length(); ++i)
	{
		arr[i]=x[i];
		arr[i]=char(int(arr[i])+90);
		arr1[i]=arr[i];
	}

	cout<<"Incrypted Password : ";
	for (int i = 0; i < x.length(); ++i)
	{
		cout<<arr1[i]<<"";
	}
	return 0;
}