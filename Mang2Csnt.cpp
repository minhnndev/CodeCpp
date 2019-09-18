#include<bits/stdc++.h>

using namespace std;

int snt(int n)
{
    if (n < 2)  return 0;

    for (int i = 2; i <= sqrt((float)n); i ++)
    {
        if (n%i==0) return 0; 
    }
    return 1;
}

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
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b ; j++){
			if(snt(f[i][j]) == 1) s++;
		}
	}
	cout << s;
}
