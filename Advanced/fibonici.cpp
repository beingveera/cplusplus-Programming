#include <bits/stdc++.h>
using namespace std;

int fibo(int x){
	if(x<=1){
		return x;
	}
	return fibo(x-1)+fibo(x-2);
}
int main(int argc, char const *argv[])
{
	
	cout<<fibo(5)<<"\n";
}