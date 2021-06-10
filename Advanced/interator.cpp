#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int inp;cin>>inp;int srt;
	std::vector<int> v;
	for (int i = 0; i < inp; ++i)
	{
		cin>>srt;
		v.push_back(srt);
	}

	reverse(v.begin(),v.end());

	for(auto n : v){
	//	cout<<n<<endl;
	}


	sort(v.begin(),v.end());

	for(auto z : v){
	//	cout<<z<<endl;
	}

	random_shuffle(v.begin(),v.end());


	for(auto h:v){
		cout<<h<<endl;
	}


		return 0;
}