#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;cin>>x;
	int arr[x];int inp;

	for (int i = 0; i < x; ++i)
	{
		cin>>inp;
		arr[i]=inp;
	}

	int even_count=0;
	int odd_count=0;
	for (int i = 0; i < x; ++i)
	{
		if(arr[i]%2==0){
			even_count++;
		}
		else{
			odd_count++;
		}
	}
	cout<<"Total even number in array : "<<even_count<<endl;
	cout<<"Total Odd Number in array : "<<odd_count<<endl;
}