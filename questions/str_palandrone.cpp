#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string first;cin>>first;

	string second = first;
	char st[first.length()];
	for (int i = first.length()-1; i >= 0; i--)
	{
		st[first.length()-i]=first[i];
	}

	for (int i = 0; i < first.length(); ++i)
	{
		if(st[i]==first[i]){
			cout<<st[i]<<endl;
			//cout<<"Matched"<<endl;
		}
		else{
			//cout<<"Unmacthed"<<endl;
			cout<<st[i];
		}
	}
	return 0;
}