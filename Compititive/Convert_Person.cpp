#include <bits/stdc++.h>
using namespace std;
#define rev(str) for(int i=str.length()-1;i>=0;i--)


int main(){
	string name="Veeras";
	/*
	string name;
	cin>>name;
	for (int i = name.length()-1; i >=0 ; i--)
	{
		cout<<name[i];
	}
	*/

	//reverse(name.begin(),name.end());
	//cout<<name;

	rev(name){
		cout<<name[i];
	}


}