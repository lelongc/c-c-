// bac cua snt p trong n!
// 10! = 3 6 9  la 3^4 
#include <stdio.h>
#include <math.h> 
int ck(int n,int p){
	int cnt = 0; 
	for(int i = p;i<= n;i+=p){
		int tmp = i;
		while(tmp % p == 0){
			cnt++;
			tmp /= p; 
		} 
	}
	return cnt; 
} 
//c2 ct legendre so n/p +n/p*p +..... cho den khi n nho hon p
int ck2(int n,int p){
	int ans = 0; 
	for(int i = p;i <= n;i*= p){
		ans += n/i; 
	} 
	return ans; 
} 
int main(){
	int n,p;scanf("%d%d", &n,&p);
	printf("%d %d " ,ck(n,p),ck2(n,p) ); 
} 
