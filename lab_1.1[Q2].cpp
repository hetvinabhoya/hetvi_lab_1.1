#include<iostream>
using namespace std;

int main()
{
	int i;
	char h[200];
	
	cout << "Enter any string : ";
	cin >> h;
	
	for(i=0;i<=h[i];i++)
	{
		if(h[i]>=65 && h[i]<=90)
		{
			h[i]=h[i]+32;
		}
		else if(h[i]>=97 && h[i]<=122)
		{
			h[i]=h[i]-32;
		}
	}
	
	cout << "Toggle case : " << h;
	
	return 0;
}
