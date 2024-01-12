// tinh tong		 1%k +2%k... + n%k
//vd n = 10 k = 3 II  1  2  0  1  2  0 ... 1  
#include <stdio.h> 
#define ll long long  
ll c1(int n,ll k){
	long long res = 0; 
	for(int i = 1; i <= n;i++){
		res +=i%k; 
		
	} 
	return res; 
} 
ll c2(int n,ll k){
	ll r = n/k;
	ll d = n%k;
	ll tong1 = (k-1)*k/2;
	ll tong2 = d*(d+1)/2;
	ll tong =tong1*r + tong2;
	return tong;
	 
} 
int main(){
	int n;
	ll k;
	scanf("%d%lld",&n,&k);
	printf("%lld %lld " ,c1(n,k),c2(n,k));
}
