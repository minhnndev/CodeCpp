#include<bits/stdc++.h>

using namespace std;

int main()
{
	int  a , b , s = 0;
	cin>>a>>b;
	if(a!=b){
		cout << 0;
		return 0;
	} 
	long long f[a][b];
	
	for(int i = 0; i < a; i++ ){
		for(int j = 0; j < b; j++){
			cin >> f[i][j];
		}	
	}
	for(int i = 0; i < a; i++ ){
		for(int j = 0; j < b; j++){
			if(f[i][i] != 1){
				cout << 0;
				return 0;
			} 
		}
	}
	cout<<1;
}
