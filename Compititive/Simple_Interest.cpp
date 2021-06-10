#include <bits/stdc++.h>
using namespace std;
#define interest(balance,time,rate) (balance*(1+(time*rate)))

int main(int argc, char const *argv[])
{
	/*
	int x=10000;
	int y=2;
	int z=10;

	int final=x*(1+(y*z));
	cout<<final;
	
	return 0;
	*/
	float bal,time,rate;
	cin>>bal>>time>>rate;
	cout<<interest(bal,time,rate);

}