#include<iostream>
using namespace std;
int main()
{
	int i,arr[5],sum=0;
	float avg=0.0;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
	 sum=sum+arr[i];	
	}
	avg=sum/5;
	cout<<"Average of numbers are="<<avg;
	return 0;
}

