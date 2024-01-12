#include <stdio.h>
#include <math.h>
//so dep la so thuan nghich co it nhat 3 uoc so vd : 60 = 2^2 x 3 x 5 co 3 uoc la 2 3 5  
int uoc(int n){
	int ans = 0; 
	for(int i = 2;i <= sqrt(n); i++){
		int cnt = 0; 
		while(n % i ==0){
			cnt++; 
			n /= i; 
		}
		if(cnt != 0)ans++; 
	} 
	if(n != 1)ans++;
	return ans >= 3; 
} 
int stn(int n){
	int res = 0,st = n; 
	while(n){
		res = res * 10 + n % 10;
		n /= 10; 
	} 
	return res == st; 
} 
int main(){
	int a,b;scanf("%d%d", &a,&b); 
	int ok = 0; 
	for(int i = a; i <= b;i++ ){
		if(stn(i) && uoc(i)){
			printf("%d ", i);
			ok++; 
		} 		 	
	} 
	if(!ok)printf("-1");
	
} 
