#include <stdio.h>
#include <math.h>
// a va b 10 mu 6 II tinh a mu b % // ct a^b % m == a^2 % m == (a%m)*(a%m)%m 
long long pow(int a,int b,int m){
	long long res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %=m;
			
		}
		a*=a;
		a%=m;
		b/=2;
	}
	return res;
}
long long pow1(int a,int b,int m){
	if(b == 0)return 1;
	long long res = pow(a,b/2,m);
	if(b % 2 == 1)return (a%m*((res%m)*(res%m)%m))%m;
	else return (res%m)*(res%m)%m;
}
int main(){
	int a,b,m;scanf("%d%d%d",&a,&b,&m);
	printf("%lld %lld  ",pow(a,b,m),pow1(a,b,m));
}
