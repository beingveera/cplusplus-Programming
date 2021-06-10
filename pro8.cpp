#include <bits/stdc++.h>
using namespace std;
#define sum(a,b) pow(a,b)
int main(){
	int lim,po,ok,add=0;
	cin>>lim;
	cin>>po;
	for(int i=1;i<=lim;i++){
		ok=sum(i,po);
		//cout<<ok<<"\n";
		add=add+ok;
		
	}
	cout<<add<<"\n";
}