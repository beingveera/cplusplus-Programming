#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	map<int ,int> start;
	for (char i=' ';i<='~';i++)
	{
		start[i]=int(i);
	}
	for(auto j : start){
		cout<<j.first<<" == "<<char(j.second)<<endl;
	}
	return 0;
}