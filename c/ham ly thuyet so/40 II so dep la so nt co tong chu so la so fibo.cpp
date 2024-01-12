#include <stdio.h>
#include <math.h>
// so dep la so nguyen to co tong cac chu so la so fibonacci vd 0 1 1 2 3 5 8 13 thi  co so 17 la so nguyen to dong thoi 1 +7 = 8 la so fibo
int nt(int n){
	if( n < 2 )return 0;
	for(int i = 2; i <=sqrt(n); i++ ){
		if( n % i == 0)return 0;
	}
	return 1;
}
int fi(int n){
	int fibo[100];
	if( n == 0 || n == 1)return 1;
	 fibo[0] = 0, fibo[1] = 1;
	for(int i = 2;i <= 92;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for(int i = 0;i <= 92;i++){
		if(fibo[i] == n)return 1;
	}
	return 0;
}
int tong(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return fi(sum);

}
int main(){
	int a,b; scanf("%d%d", &a,&b);
	int ok = 0;
	for(int i = a; i <= b; i++){
		if(tong(i) && nt(i)){
		printf("%d ", i);
		ok = 1;
		}
		
	}
	if(!ok)printf("-1");
	
}
