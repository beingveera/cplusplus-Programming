#include <bits/stdc++.h>
using namespace std;
#define size(x) sizeof(x)

template<typename T>

T Size(T data)
{
cout<<data<<"=>"<<sizeof(data)<<endl;
}


int main(){
	Size<int>(100);
	Size<char>('a');
	Size<float>(13.98);

}

