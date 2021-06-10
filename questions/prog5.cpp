#include<bits/stdc++.h>
using namespace std;
int main(){
typedef pair<int,int> x;
	x y,z;
	int arr[6]={2,4,6,8,10,12};
	for(int i=0;i<6;i++){
		if(i>=0&&1>=i){
			y.first=arr[0];
			y.second=arr[1];
		}
		else if(i>=2&&4>=i){
			z.first=arr[2];
			z.second=arr[3];
		}
	}
	cout<<y.first<<" "<<y.second<<"\n";
	cout<<z.first<<" "<<z.second<<"\n";
	cout<<y.first*10;
}