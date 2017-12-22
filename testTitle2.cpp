#include<iostream>
#include<time.h> 
using namespace std;

int GetRes(int p,int q,int r,int m,int t){
	int re = t | m << 1 | r << 2 |q << 3|p << 4;
	if(re == 5 || re == 26) return 1;
	return 0;
} 

int main()
{
	int p,q,r,m,t;
	cin >> p >> q >> r >> m >> t;
	clock_t start = clock();
	for(int i = 0;i<10000000;i++){
		int re = GetRes(p,q,r,m,t);	
	}
	clock_t ender = clock();
	cout<<"范式优化后： "<< (double)(ender - start)/CLOCKS_PER_SEC << endl;	 
	return 0;
}
