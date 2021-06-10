#include<bits/stdc++.h>
using namespace std;

int max(int a,int b,int c){
	if(a>b && a>c ){
		return a;
	}

	else if(b>a && b>c ){
		return b;
	}

	else if(c>b && c>b ){
		return c;
	}
}

int main()
{
	int m=10,n=20,o=30;
	int p=max(m,n,o);
	cout<<p;


}