#include<iostream>
using namespace std;

int main()
{
	int i,m;
	
	cout << "Enter array's size : ";
	cin >> m;
	
	int h[m];
	
	cout << "Enter array's elements : " << endl;
	
	for(i=0;i<m;i++)
	{
		cout << "h["<< i <<"] = ";
		cin >> h[i];
	}
	 
	cout << "Even numbers : " << endl;

    for(i=0;i<m;i++)
	{
		if(h[i]%2==0)
		{
			cout << h[i] << endl;
		}
	}	
	
	
	return 0;
}
