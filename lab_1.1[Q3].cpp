#include<iostream>
using namespace std;

int main()
{
	int i=2020;
	int j=3030;
	int a[400];
	int h,b=0;
	
	cout << "Leap years : " << endl;
	
	for(h=i;h<=j;h++)
	{
		if(h%4==0)
		{
			a[b] = h;
			b++;
		}
	}
	for(h=0;h<b;h++)
    {
    	cout << a[h] << endl;
	}
	return 0;
}
