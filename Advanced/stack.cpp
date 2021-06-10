#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	stack<int> user;
	for(int i=0;i<=100;i++){
		user.push(i);
		cout<<user.top()<<endl;
	}
	cout<<"\n\n";
		for(int i=0;i<=100;i++){
		user.pop();
		cout<<user.top()<<endl;
	}

	return 0;
}