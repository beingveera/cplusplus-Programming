#include <bits/stdc++.h>
using namespace std;

float percentage(vector<int> subject)
{
	int sum=0,Total=500;
	float per;
	for (int i = 0; i < subject.size(); ++i)
	{
		sum=sum+subject[i];
	}

	return((sum*100)/Total);

}

int main(){
int mark;
vector<int> v;
for (int i = 0; i < 5; ++i)
{
	cin>>mark;
	v.push_back(mark);
	//cout<<v[i]<<"\n";
}
cout<<percentage(v)<<"%";
//double Final=percentage(v);
//cout<<"Total percentage is : "<<Final<<"%";


}