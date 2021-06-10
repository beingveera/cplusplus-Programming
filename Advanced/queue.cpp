#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	queue<int> first;

	for (int i = 0; i < 10; ++i)
	{
		first.push(i);
		cout<<first.front()<<endl;
	}
cout<<"\n\n";
	for (int i = 0; i < 10; ++i)
	{
		cout<<first.front()<<endl;
		first.pop();
			}

			cout<<"\n\n";
	for (int i = 0; i < 10; ++i)
	{
		cout<<first.back()<<endl;
		first.pop();
			}
	return 0;
}