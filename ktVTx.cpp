#include<bits/stdc++.h>

using namespace std;

int main()
{
	int  a , b , s = 0;
	cin>>a>>b;
	long long f[a][b];

	for(int i = 0; i < a; i++ ){
		for(int j = 0; j < b; j++){
			cin >> f[i][j];
		}		
	}
	for(int i = 0; i < a; i++ ){
		for(int j = 1; j < b; j++){
			if(i!=j && f[i][j] != f[j][i]) {
				cout << 0;
				return 0;
			
			}
		}
	}
	cout<<1;
}
