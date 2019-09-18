#include<iostream>
using namespace std;

void capphat(int **&a, int n, int m)
{
	a=new int*[n];
	for(int i=0; i<n; i++)
	{
		a[i]=new int [m];
	}
}
void nhapMang(int **&a, int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<"Nhap phan tu a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
}
void xuatMang(int **&a, int n, int m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int tichle(int **a, int n, int m)
{
	if(n*m==1)
		return 1;
	for(int i=0; i<n*m; i++)
	{
		if(a[i/m][i%m]%2!=0)
			return a[i/m][i%m] * tichle(a,n-1,m-1);
	}
}
int main()
{
	int **a,n,m;
	cin>>n>>m;
	capphat(a,n,m);
	nhapMang(a,n,m);
	xuatMang(a,n,m);
	cout<<endl<<"Tich so le: "<<tichle(a,n,m)<<endl;
	system("pause");
	return 0;
}
