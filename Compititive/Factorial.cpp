#include<bits/stdc++.h>
using namespace std;

class Factorial
{
public:
	int number;int facts=1;
	int fact(int number){
		for (int i = 1; i <=number; ++i)
		{			
			facts=facts*i;
		}
		return facts;
	}	
};

int main(int argc, char const *argv[])
{
	Factorial user;
	int x;
	cin>>x;
	cout<<user.fact(x);
	return 0;
}