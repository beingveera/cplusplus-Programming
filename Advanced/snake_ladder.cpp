#include <bits/stdc++.h>
using namespace std;
 

 int dies(){
 	int val;
 	int data=rand()%100;
 	return data;
 }
int main(int argc, char const *argv[])
{
	std::vector<int> block;
	for (int i = 1; i <= 100; ++i)
	{
		block.push_back(i);
	}

	//Snake
	int snake=[24,56,75,39,90,96,45];
	int ladder=[5,20,31,47,59,67,80];

	int out;
	for (int i = 1; i <=100; ++i)
	{
		out=dies();
		for (int j = 0; j < snake.length(); ++j)
		{
			if(i==i){
				block[i]=block[i]-j;
			}
		}

		for (int k = 0; k < ladder.length(); ++k)
		{
			if(k==i){
				block=block[i]+j;
			}
		}
		
		

		}
	}
}
