#include<bits/stdc++.h>
using namespace std;

int main(){

	string a;cin>>a;
	string b;cin>>b;
	cout<<a<<"\n"<<b;

	bitset<3> A(string("010"));
	bitset<3> B(string("111"));
	cout<<"\n"<<(A&B)<<endl;
	cout<<"\n"<<(A|B)<<endl;
	cout<<"\n"<<(A^B)<<endl;
}

