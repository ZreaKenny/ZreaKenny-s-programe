#include<iostream>
using namespace std;
int main()
{
	int a[114514]={-1,1,4,5,1,4};
	int x=5;
	int left=1,right=5,mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(a[mid]<=x)left+mid+1;
		else right = mid-1;
	}
	cout<<a[right]<<endl;
	return 0;
}
