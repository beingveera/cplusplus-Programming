#include <bits/stdc++.h>
using namespace std;

int gross(std::vector<int> arr){
	int sum=0;
	for (int i = 0; i <arr.size() -1; ++i)
	{
		cout<<arr[i]<<"  ";
		sum=sum+arr[i];
	}
	return sum;

}

int main(){
	int x;
	
	std::vector<int> v;
	for (int i = 0; i < 5; ++i)
	{
	cin>>x;
	v.push_back(x);
	}
	int siz=v.size();
	int grosses=gross(v);
	cout<<"Toatl gross salery is : "<<grosses<<endl;
}