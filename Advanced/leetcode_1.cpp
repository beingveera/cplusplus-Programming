#include <bits/stdc++.h>
using namespace std;

// int get(<std::vector<int>,std::vector<int>){

// }
int main(){
	std::vector<int> v;
	int x;cin>>x;
	int inp;
	int target=10;
	for (int i = 0; i < x; ++i)
	{
		cin>>inp;
		v.push_back(inp);
	}	

	// for(auto k :v){
	// 	cout<<k<<endl;
	// }
pair<int ,int> com;
	for(auto x : v){
		for(auto y : v){
			if(x+y==target){
				cout<<"Run Succesfully"<<endl;
				//cout<<x<<" "<<y<<endl;
				exit(0);
			}
			else{
				cout<<"ERROR!!!!"<<endl;
			}
		}
	}


}

