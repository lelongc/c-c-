//so fibo thu 1000 chia du cho 1e9 +7
#include <stdio.h>
#include <math.h>
#define ll long long 
//c1
ll kk1(int n){
	if(n == 0 || n == 1)return n;
	ll fn,f2 = 0,f1 = 1;
	for(int i = 2; i <= n;i++){
		fn = f1 +f2;// chia lun cho 1e9 neu k se bi tran
		fn %= (int )1e9+7;
		f2 = f1;
		f1 = fn;
	}
	return fn;
}
ll fi[1001];
void sieve(){
	fi[0] = 0;
	fi[1] = 1;
	for(int i = 2; i <= 1000;i++){
		fi[i]=fi[i-1]+fi[i-2];
		fi[i] %= (int)1e9 +7;
	}
	
}
int main(){
	sieve();
	int n;
	scanf("%d", &n);
	printf("%lld %lld ", fi[n],kk1(n)); 
	 
} 
