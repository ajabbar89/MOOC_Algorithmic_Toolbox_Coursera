#include<iostream>
#include<math.h>

using namespace std;

int dp_change(int *a,int n,int money)
{
	int num;
	int numofCoins[money+1];
	numofCoins[0] = 0;
	int m,i;
	int max = 10000;
	for(m=1;m<=money;m++)
	{
		numofCoins[m] = max;
		for(i=0;i<n;i++)
		{
			if(m >= a[i])
			{	num = numofCoins[m-a[i]] + 1;
				if( num < numofCoins[m]) 
					numofCoins[m] = num;
			}
		}	
	}
	/*
	for(i=0;i<=money;i++)
		cout<<"numofCoins["<<i<<"] = "<<numofCoins[i]<<"\n";
	for(i=0;i<n;i++)
		cout<<"a["<<i<<"] = "<<a[i]<<"\n";
		*/
	return numofCoins[money];
}


int main()
{
	int money;
	cin>>money;
	int n;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int coin_count=0;
	coin_count = dp_change(a,n,money);
	cout<<"minimum coin count for change = "<<coin_count<<"\n";
	return 0;
}
