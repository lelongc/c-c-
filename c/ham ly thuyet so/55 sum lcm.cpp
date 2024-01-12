//c1 sum lcm vd n = 5 
// lcm(1,5) + lcm(2,5) + lcm(3,5) + lcm(4,5) + lcm(5,5);ta su dung ham lcm r dung for cung dc nhung k hieu qua nen ta dung ct khac 

// c2 sum lcm =( phi (1)*1 +....phi 5 * 5 +1)*5)/2 
//  = ( phi (1)*1 + ....pi (n)*n)*n/2 
//c1 lam trau 
#include <stdio.h>
#include <math.h>
#define ll long long 
int  gcd(int a, int b){
	if( b == 0)return a; 
	return gcd(b,a%b);
}

ll lcm(int a,int b){// boi chung len dung ll 
	return 1ll*a*b/gcd(a,b);

} 
ll ck(int n ){

	long long res = 0;
	for(int i = 1; i <= n;i++){
		res += 1ll*lcm(i,n);
	}
return res; 
}
//c2  
ll p[1000001];
ll r[1000001];
void el(){
	for(int i = 1;i <= 1000000;i++){
		p[i] = i; 
	} 
	for(int i = 2;i <= 1000000;i++){
		if(p[i] == i){
		 	p[i]= i - 1; 
			for(int j = 2*i; j <= 1000000; j +=i){
				p[j] = p[j] - p[j]/i;
			}
			
		} 
	} 
} 
void sum(){
	for(int i = 1; i<= 1000000;i++){
		for(int j = i; j <= 1000000;j+=i){
			r[j]+= i * p[i]; 
		} 
	} 
} 
ll ck2(int n){

	return 1ll*(r[n]+1)*n/2;
	
	
}
int main(){
	int n; scanf("%d", &n);
	el();
	sum();
	printf("%lld %lld",ck(n),ck2(n));
}

