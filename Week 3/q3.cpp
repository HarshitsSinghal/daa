#include<iostream>
using namespace std;
void Qs(int [],int,int);
int partition(int[],int,int);
int main()
{
	int tc,i,j,n,a[100];
	cout<<"enter number of test cases: ";
	cin>>tc;
	for(i=0;i<tc;i++)
	{
		cout<<"enter size of array: ";
		cin>>n;
		cout<<"enter elements:"<<endl;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int l=0;
		int h=n-1;
		Qs(a,l,h);
		int flag=0;
		for(j=0;j<n-1;j++)
		{
			if(a[j]==a[j+1])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}	
	}
	return 0;
}
void Qs(int a[],int l,int h)
{
	if(l<h)
	{
		int p =partition(a,l,h);
		Qs(a,l,p-1);
		Qs(a,p+1,h);
	}
}
int partition(int a[],int l,int h)
{
	int piv=a[h];
	int i=l-1;
	for(int j=l;j<h;j++)
	{
		if(a[j]<=piv)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[h]);
	return i+1;
}
							

