// tuy thua nhi phan 
#include <stdio.h>
#include <math.h>
#define ll long long 
ll pow(int a,int b){
	ll res = 1;
	for(int i = 1; i <= b;i++){
		res *= a; 
	} 
	return res; 
} 
ll pow1(int a,int b){
	ll res = 1; 
	while(b){
		if(b%2 == 1) res *=a;
		b/=2;
		a*=a; 
	} 
	return res; 
} 
ll pow2(int a,int b){
	if(b == 0)return 1;
	ll res = pow2(a,b/2);
	if(b % 2 == 1)return res *res *a;
	else return res*res; 
	  
} 
int main (){
	int a,b;scanf("%d%d",&a,&b );
	printf("%lld %lld %lld ",pow(a,b) ,pow1(a,b), pow2(a,b)); 
	
}
