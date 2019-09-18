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
    int hang[a];
    for(int i = 0; i < a; i++)
		hang[i] = -1e6;
		
    int cot[b];
    for(int i = 0; i < b; i++)
		cot[i] = 1e6;
		
	for(int i = 0; i < a; i++){
		for( int j = 0; j < b; j++)
		{
			if(f[i][j] > hang[i]) hang[i] = f[i][j];
			if(f[i][j] < cot[j]) cot[j] = f[i][j];
		}
	}      
	for(int i = 0; i < a; i++ ){
		for(int j = 0; j < b; j++){
			if(hang[i] == cot[j]){
				cout << f[i][j] << endl;
				break;
			}
		}		
	}
}


