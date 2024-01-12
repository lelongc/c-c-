//2 so nguyen to cung nhau la 2 so co uoc chung lon nhat la 1; vd  20 17  
#include <stdio.h>
#include <math.h>
//long long gcd(long long a,long long b ){// ham tinh uong chung lon nhat cua 2 so 
//	if(b == 0) return a;
//	return gcd(b, a % b); 
//	 
//} 
//int main(){
//	long long a,b;scanf("%lld%lld" ,&a,&b);
//	if(gcd(a,b)== 1)printf("yes");
//	else printf("no");
//	 
//	
//} 

//b2  nhap  n va dem xem co bao nhiu so nguyen to cung nhau vs n 
//phi ham euler vd 60 = 60 x (1-1/p) x (1-1/p2).... p la thua so nt 
long long ele(long long n){
	long long res = n;
	for(int i = 2; i <= sqrt(n);i++){
		if( n % i == 0){
		
			while( n % i == 0){
			n/=i;
			} 
			res -= res/i;
		} // de cho so no dep thi lay 60 - 60 / p 
	} 
	if(n!= 1)res -=res/n; 
	return res; 
} 
int main(){
	long long n;scanf("%lld" ,&n);
	printf("%lld" , ele(n)); 
} 
 
