#include<bits/stdc++.h>
using namespace std;
#define Area(base,height) (.5*base*height)

/*
int main(){
	pair<int,int> tri;

	cin>>tri.first;
	cin>>tri.second;

	cout<<Area(tri.first,tri.second)<<endl;
}

*/

int main(){
	int x;
	std::vector<int> v;
	if(v.empty()){
		for (int i = 0; i < 2; ++i)
		{
			cin>>x;
			v.push_back(x);
		}	
	}
	cout<<Area(v[0],v[1])<<endl;



}