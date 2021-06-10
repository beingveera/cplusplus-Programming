#include <bits/stdc++.h>
using namespace std;


// int main(int argc, char const *argv[])
// {
// 	char alpha;cin>>alpha;
// 	switch(alpha){
// 		case 'a':
// 		cout<<"Vowel";
// 		break;
// 		case 'e':
// 		cout<<"Vowel";
// 		break;
// 		case 'i':
// 		cout<<"Vowel";
// 		break;
// 		case 'o':
// 		cout<<"Vowel";
// 		break;
// 		case 'u':
// 		cout<<"Vowel";
// 		break;
// 		default:
// 		cout<<"Consonet";
	
// 	}
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	

string name;
cin>>name;
for (int i = 0; i < name.length(); i++)
{
	if (name[i] == 'a' or
		name[i] == 'e' or
		name[i] == 'i' or
		name[i] == 'o' or
		name[i] == 'u'
		)
	{
		cout<<"Vowel"<<endl;

	}
	else{
		cout<<"Consonet"<<endl;
	}
}

}