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
		for(int j = 0; j < b; j++){
			if(f[i][0]<f[i+1][0] && f[0][j]<f[0][j+1]) {
				cout << 1;
				return 0;
			}else{
				cout << 0;
				return 0;
			}
			
		}
	}
}
