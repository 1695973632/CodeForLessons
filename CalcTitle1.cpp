#include<iostream>
#include<time.h> 
using namespace std;

int tr(int x)
{
	if(x) return 0;
	return 1;
}

int tooo(int a,int b)
{
	if(a == 0) return 1;
	else if(b == 1) return 1;
	return 0;
}

int anddd(int a,int b)
{
	if(1 == a && 1 == b) 
		return 1;
	return 0;
}

int orrr(int a,int b){
	if(a == 1 || b == 1) return 1;
	return 0;
}

int xorr(int a,int b){
	if(a != b) return 1;
	return 0;
}

int Aor(int a,int b){
	if(a == b) return 1;
	return 0;
}

int res(int p,int q,int r,int m,int t){
	int A = tooo(p,q);
	int B = orrr(m,t);
	int C = xorr(q,r);
	int D = Aor(r,m);
	int E = tooo(t,anddd(p,q));
	return A*B*C*D*E;
}

int main(){
	int p,q,r,m,t;
	cin >> p >> q >> r >> m >>t;
	clock_t st = clock();
	for(int i = 0;i<10000000;i++){
		int re = res(p,q,r,m,t);
	}
	clock_t ed = clock();
	cout << "未优化结果" << (double)(ed - st)/CLOCKS_PER_SEC << endl;	 
	return 0;	
}