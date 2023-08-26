#include<iostream>
using namespace std;
int main()
{   
	int n,i,j,k,a[10],max,min;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min){
			min=a[i];k=i;
		}
	}
	a[k]=a[0];a[0]=min;
	for(i=0;i<n;i++)
	{
		if(a[i]>max) {
		max=a[i];j=i;}
	}
	a[j]=a[n-1];a[n-1]=max;
	for(i=0;i<n;i++)
	{
	  cout<<a[i]<<" ";}
	return 0;
	
}
	
	
