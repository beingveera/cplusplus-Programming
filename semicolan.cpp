#include <bits/stdc++.h>
using namespace std;
class model {
public:
	int no;
	string one;
	string two;
	int no1;
};
int main() {
	model user;
	cin>>user.no;
	cin>>user.one;     
	cin>>user.two;     
	cin>>user.no1;         
	
	cout<<user.no<<"\n";
	cout<<user.one<<", "<<user.two<<"\n";
	cout<<user.no1<<"\n\n";

	cout<<user.no<<","<<user.one<<","<<user.two<<","<<user.no1<<"\n";


	

	return 0;
}