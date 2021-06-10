#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int > v;
	int inp;cin>>inp;
	int ch;
for (int i = 0; i <= inp; i++)
{
	cin>>ch;
	v.push_back(ch);
}
	
	int low=0;int high=inp;
	int mid;int find=49;
	while(low<=high){
		mid=(low+high)/2;
		//cout<<mid<<endl;
		if(find == v[mid]){
			cout<<"Element find At "<<mid<<endl;
			break;
		}
		else if(find<v[mid]){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return 0;
}