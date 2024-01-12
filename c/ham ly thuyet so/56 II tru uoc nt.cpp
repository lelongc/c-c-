#include <stdio.h>
#include <math.h>
// b1 f(n) = -1 + 2 -3 + 4 -5 +6 ....n 
// neu n chan = n/2 ;
// neu n le(-n - 2)/ 2;
// 
//int main(){
//	long long n; scanf("%lld",&n);
//	if( n % 2 == 0)printf("%lld", n / 2);
//	else printf("%lld" ,(-n-1)/2); 
//	 
//	
//} 

//b2 tru uoc nt 
//nhap n va k 
//k la so lan cong n vs f(n)[la uoc nho nhat cua  n khac 1] 


int fin(int n){// cach lam trau  
	for(int i = 2; i <= n; i++){
		if( n % i == 0)return i; 
	} 
} 
int sol(long long n,int k){
	for(int i = 1; i <= k; i++){
		n = n +fin(n);
	} 
	return n; 
}

//int main(){
//	int n,k;scanf("%d%d", &n,&k);
//	printf("%lld", sol(n,k));
//	 
//} 
//

//c2 cach lam nhanh 

int fin1(int n){
	//duyet so le thoi
	for(int i = 3; i <= n; i+= 2){
		if(n % i == 0)return i;
	}
}
//int main(){
//	int n,k;scanf("%d%d", &n ,&k);
//	if(n % 2 == 0)printf("%lld", n + 2ll*k);
//	else printf("%lld", n+fin1(n)+(k-1)*2ll);//le cong le ra chan 
//	
//}
// c3 
//  x y // x tru di so nguyen to n lan ra y in yes 
int main(){
	long long x,y;scanf("%lld%lld", &x,&y);
	if( x - y!= 1)printf("yes");
	else printf("no");
}
