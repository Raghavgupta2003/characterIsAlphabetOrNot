#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter a character : ";
	cin>>ch;
	int CH=(int)ch; // ASCII values an to z->97 to 122 and for A to Z ->65 to 90
	if((CH>=65 && CH<=90)||(CH>=97 && CH<=122))
	{
		cout<<ch<<" is  an alphabet";
	}
	else
	{
		cout<<ch<<" is not an alphabet";
	}
}
