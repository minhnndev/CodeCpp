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
	int k;
	cin >> k;
	int x = -1,y = -1;
	for(int i = 0; i < a; i++ ){
		for(int j = 0; j < b; j++){
			if(f[i][j] == k) {
				x = i;
				y = j;
			}
			
		}			
	}
	if(x != -1 && y!= -1) cout<<x<<" "<<y;
}

