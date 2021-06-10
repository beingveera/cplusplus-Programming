#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{int x;cin>>x;
int len;cin>>len;int i=0;
int temp;
while(i<=len){
	temp=x%10;
	cout<<temp;
	x=x/10;
	i++;
}
return 0;
}