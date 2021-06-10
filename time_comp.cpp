#include<iostream>
using namespace std;
int flag = 0;
int main(){
	
	//time compleaxsity of O(n) ;
	for(int i=0;i<=5;i++){
		cout<<i<<"\n";
	}
	
	// time complexsity os O(n2) ;
	for(int j=0;j<=10;j++){
		for(int k=0;k<=j;k++){
			cout<<j+k<<"\n";
		}
	}
	
	//OREDER OF MANGNITUDE
	
	// magnitude of order of 3*n ;
	 int n=5;
	 for(int i=1;i<=6;i++){
	 	for(int j =1 ; j<=3*n;j++){
	 		cout<<j<<"\n";
		 }
		 
	 }
}
