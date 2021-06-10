#include<iostream>
using namespace std;
int main(){
	int arr[10] = {6,3,5,9,1,4,5,8,2,7};
	int n=10,temp=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j--){
			if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
			}
		}
	}

	
	

}

int swap(int a , int b){
	int temp=0;
	temp=a;
	a=b;
	b=temp;
}
