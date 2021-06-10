#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x;cin>>x;
	int arr[x];
	int val,temp;
	for (int i = 0; i < x; ++i)
	{
		cin>>val;
		arr[i]=val;
	}

	for (int i = 0; i < x; ++i)
	{
		cout<<"index of : "<<i<<"  "<<arr[i]<<endl;
	}

	int des;
	int num;
	string inp;
	cout<<"you want to proceed for next : - Press Yes or No :-"<<endl;
	cin>>inp;
	char k='a';

if(inp == "yes")
{
	while(k!='b')
	{
		cout<<"Enter the place : ";cin>>des;
		cout<<"\n";
		cout<<"Enter the number: ";cin>>num;
		cout<<"\n";

		if(x>=des and des>-1)
		{
			arr[des]=num;
		}

		else
		{
			cout<<"Out of Range";
			break;
		}

		for (int i = 0; i < x; ++i)
		{
			cout<<arr[i]<<endl;
		}

		cout<<"for break the program press b :";cin>>k;
	}
}


}