#include <bits/stdc++.h>
using namespace std;

int main(){


int len;cin>>len;
int num;
std::vector<int> v;
std::vector<int> v1;
for (int i = 0; i < len; i++)
{
	cin>>num;
	v.push_back(num);
}



int max = v[0];
for(auto i : v){
	if(max<i){
		max=i;
		v1.push_back(max);
		//cout<<max<<endl;
	}
}

 cout<<max;
// for(auto j : v1){
// 	cout<<j<<endl;
// }


}
