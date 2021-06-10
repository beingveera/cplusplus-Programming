#include <bits/stdc++.h>
using namespace std;
#define Pi 3.14
#define area(r) (Pi*r*r)
#define cur(r) (2*Pi*r)
/*
void circle(float radius){
float area=Pi*Pi*radius;
float cur=2*Pi*radius;
cout<<"The Area of the circle is: "<<area<<endl<<"The Curcumatance of the circle is: "<<cur;

}
int main(){
	circle(10);

}

*/
int main(){
	float radius;
	cin>>radius;
	cout<<area(radius)<<endl;
	cout<<cur(radius);
}




