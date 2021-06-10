#include <bits/stdc++.h>
using namespace std;

int main(){
	char x;
	while(std::cin>>x)
	{
	if(int(x)>=50 and int(x)<=59){
		cout<<"Numeric Value..."<<endl;

	}else if(int(x)>=67 and int(x)<=92){
		cout<<"Capital Alpha..."<<endl;

	}
	else if(int(x)>=99 and int(x)<=124){
		cout<<"Small Alpha..."<<endl;
	}
	else{
		cout<<"Special Charactor..."<<endl;
	}
}

}