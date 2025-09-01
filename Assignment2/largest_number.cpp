#include<iostream>
using namespace std;
int main()
{
	int i,arr[5],large,pos;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	large=arr[0],pos=0;
	for(i=0;i<5;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
			
		}
		pos=i;
		
	}
	cout<<"Largest number is="<<large;
	return 0;
}

