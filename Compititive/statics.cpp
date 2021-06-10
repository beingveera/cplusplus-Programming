#include<bits/stdc++.h>
using namespace std;
#define min(nm,mu) (nm-mu)
#define mix(ja) (ja*ja)
int main(){

    int x;cin>>x;
    int inp;

    vector<int> vec;
    vector<int> vec1;

    for(int i=0;i<x;i++)
    {
        cin>>inp;
        vec.push_back(inp);
    }

    
    int sum=0;
    for(auto i : vec){
        sum+=i;
        //1025698
    }

    float mu=(sum/vec.size());
    //cout<<vec.size()<<endl;
    //51284
    
    float ran; 
    float ran1;
    for(auto j:vec){
        ran=min(j,mu);
        ran1=mix(ran);
        //cout<<ran1<<endl;
        vec1.push_back(ran1); 
    }

    int sums=0;
    for(auto k : vec1){
        sums+=k;

    }
    float fin=(sums/vec1.size());
    //cout<<fin;
    cout<<sqrt(sums/vec1.size());
}