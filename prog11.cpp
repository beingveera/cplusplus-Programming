#include <bits/stdc++.h>
using namespace std;
int main()
{

int arr[8]={3,4,3,2,4,6,7,5};
int mn[8];
int temp;
for (int i = 0; i < 8; i++)
{
	for (int j = 0; j < 8; j++)
	{
		if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			cout<<temp<<" ";
		}
		cout<<arr[j]<<" ";
		
	}

}


}