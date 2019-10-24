// chuyen so thap phan (xx.abc) sang he nhi phan

#include<bits/stdc++.h>
using namespace std;

#define MaxQueue 1000

struct Queue
{ 
	int First;
	int Last;
	double Element[MaxQueue];
};
Queue Q;
void Create(Queue &Q){
	Q.First=0;
	Q.Last=-1;
}
int Empty(Queue Q){ 
	return Q.First>Q.Last?1:0; 
}
void Add(int x, Queue &Q)
{
	if(Q.Last == MaxQueue - 1) return;
	else{
		Q.Last++;
		Q.Element[Q.Last]=x;
	}
}
int Front(Queue &Q){
	return Q.Element[Q.First];
}
void Remove(Queue &Q)
{
	if(Empty(Q)) return;
	Q.First++;
}



int xuliPhanNguyen(long long n){
	
	long k,i=1,sum=0;
	if(n == 0) return 0;
    do
    {
        k = n % 2;
        sum = sum + (i*k);
        n /= 2;
        i *= 10;
    }while(n > 0);
    return sum;
}

int main(){
	
	Queue binarylist;
	Create(binarylist);
	
	double k;
	cin >> k;
	int n = k; // phan nguyen
	int c = xuliPhanNguyen(n); cout << c;
	double z = k - n;  // phan thap phan
	
	
	double v;
	do {
		z *= 2;
		int d = z; 
		Add(d,binarylist);
		v = z - d;
		z = v;
	}while(v != 0.0);
	cout << ".";
	while(!Empty(binarylist)){
		cout << Front(binarylist);
		Remove(binarylist);
	}
	
   	return 0;

}

 
