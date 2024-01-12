#include <stdio.h>
#include <math.h>
// so fibonacci la so co tong 2 so trc bang so sau II vd 0 1 1 2 3 co 1 + 2 = 3
int fi(long long n  ){// kt va in so fi
	if( n == 0 || n == 1)return 1;
	long long fn, fn1 = 1, fn2 = 0;
	for(int i = 2; i <= 92; i++){
	 	fn =fn1 + fn2;
	 	if( fn == n)return 1;
	 	fn2 = fn1;
	 	fn1 = fn;
	 	
	}
	return 0;
}
long long  fibo[100];
void fi1(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92;i++){
		fibo[i] = fibo[i - 1] + fibo [ i -2 ];
	}
//	for(int i = 0; i <= 92;i++){
//	if(fibo[i] == n)return 1;
//	}
	//return 0;
}
int main(){
	fi1(); 
	long long n;scanf("%d" ,&n);
	for(int i = 0; i < n; i++){
	
	printf("%lld " ,fibo[i]);// printf("yes");
	}
	
	
}
