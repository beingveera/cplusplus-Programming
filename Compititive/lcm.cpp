#include <bits/stdc++.h>
using namespace std;

int main(){
	


	int num1;cin>>num1;
	int num2;cin>>num2;

	pair<int,int> group;
	make_pair(num1,num2);
	group.first=num1;
	group.second=num2;

	while(num1 != num2 ){
		if(num1 > num2){
			num1-=num2;
		}
		else{
			num2-=num1;
		}
	}

	int final = (group.first*group.second)/num1;

	cout<<final;


}

/*
int num1;cin>>num1;
int num2;cin>>num2;

int hcf=num1;int temp=num2;

while(hcf != temp){
	if(hcf > temp){
		hcf-=temp;
	}
	else{
		temp-=hcf;
	}
}

int lcm=(num1*num2)/hcf;

cout<<lcm;

*/


