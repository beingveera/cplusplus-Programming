#include<bits/stdc++.h>
using namespace std;


int main(){

deque<int> user;
for (int i = 0; i < 5; ++i)
{
	user.push_back(i);
	user.push_front(i+1);
	for(auto j : user){
		cout<<j<<"  ";
	}
}


cout<<"\n\n";

for (int i = 0; i < 5; ++i)
{
	user.pop_back();
	user.pop_front();
	for(auto j : user){
		cout<<j<<"  ";
	}
}

}