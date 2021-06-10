#include<bits/stdc++.h>
using namespace std;
int main(){
	typedef vector<char> s;
	s OP;
	for(int i=0;i<=10;i++){
		cout<<"SIZE : "<<OP.size()<<"\n";
		OP.push_back(char(i+65));

	}
	for (int i = 0; i <=10; i++)
	{
		cout<<OP[i]<<"\n";

	}


}