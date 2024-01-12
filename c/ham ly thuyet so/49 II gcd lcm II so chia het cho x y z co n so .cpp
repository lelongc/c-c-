//b1 so chia het cho x,y,z co n chu so
//ct tinh so lon hon chia het cho  x II( n + x-1 )/x *x 
//gcd lcm 
#include <stdio.h>
#include <math.h>
#define ll long long 
ll gcd ( ll a, ll b){// uoc chung lon nhat 
	if( b == 0)return a;
	return gcd(b,a%b);
	 
}  
ll lcm ( ll a , ll b){//boi chug nho nhat 
	return a*b/gcd(a,b);
} 
ll ck( int  a, int  b, int  c , int n){
	ll tmp =  lcm(lcm(a,b),c); 
	ll m =(ll)pow(10,n-1);
	ll res = (m+ tmp - 1)/tmp*tmp; 
	if(res < (ll)pow(10,n))return res;
	else return -1; 
	
} 
int main(){
	int x,y,z,n;scanf("%d%d%d%d",&x,&y,&z,&n); 
	printf("%lld",ck(x,y,z,n)); 
} 
