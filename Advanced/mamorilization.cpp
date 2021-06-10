#include <bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 100

int arr[MAX];

void init(){
	for (int i = 0; i < MAX; i++)
	{
		arr[i]=NIL;
	//	cout<<arr[i]<<endl;
	}
}

int febo(int x){
	if(arr[x] == NIL){
		if(x<=1){
			arr[x]=x;
		}
		else{
			arr[x]=febo(x-1)+febo(x-2);
		}
	}
	return arr[x];
}

int main(int argc, char const *argv[])
{
	init();
	int x;cin>>x;
	int a = febo(x);
	cout<<a<<endl;
	//febo(x);
	return 0;
}