//dem uoc cua n! 
#include <stdio.h>
#include <math.h> 
// ct legendre so n/p +n/p*p +..... cho den khi n nho hon p [tinh so luong bac cua p[uoc nt cua n] trong n!]
int e(int n,int p){
	int ans = 0; 
	for(int i = p;i <= n;i*= p){
		ans += n/i; 
	} 
	return ans; 
} 
// check snt 
int snt(int n){
	for(int i = 2; i<= sqrt(n);i++){
		if(n % i == 0)return 0;
	}
	return n > 1;
}
// dung cong thuc tinh so luong uoc cua n!
//vd n!=p1^e1 x p2 ^e2....
//so luong uoc cua n d[n] = (e1+1)(e2+1)....
long long ck (int n){
	long long res = 1;
	for(int i = 1;i <= n; i++){
		if(snt(i)){
			res *=(e(n,i)+1);
		}
	}
	return res;
}
int main(){
	int n;scanf("%d",&n);
	printf("%lld", ck(n));
}
