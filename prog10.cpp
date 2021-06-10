#include <bits/stdc++.h>
using namespace std;

int fib(int n){
	int a=0,b=1,c,i;
	cout<<a<<" "<<b<<" ";
	if(n>0){

	for(int i=2;i<=n;++i){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
}
}
int main(){
	int x;
	
	fib(x);

	return 0;

}