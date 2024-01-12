#include <stdio.h>
#include <math.h>
//b1 / in ra thua so nguyen to thu k 

//int  sol(int n,int k ){
//	int cnt = 0;
//	for(int i = 2; i <= sqrt(n);i++){
//		
//		while(n % i == 0){	
//			cnt++;
//			n/=i;
//			if(cnt == k)return i; 
//		} 
//	} 
//	if( n != 1)cnt++;
//	if(cnt == k)return n;
//	return -1; 
//} 
//int main(){
//	int n,k;scanf("%d%d", &n,&k); 
//	printf("%d",sol(n,k));  
//}
//b2 in ra so lan so nguyen to xuat hien cua n;
int ck(long long n){
	int c2= 0,c3 = 0,c5 = 0,c7 = 0;
	while(n){
		 int r = n % 10;
		 if(r == 2)c2++;
		 else if( r == 3)c3++;
		 else if( r == 5)c5++;
		 else if(r == 7)c7++;
		 n /= 10; 
	} 
	if(c2 != 0)printf("2 %d\n", c2);
	 if(c3 != 0)printf("3 %d\n",c3);
	 if(c5 != 0)printf("5 %d\n",c5);
	if( c7 != 0)printf("7 %d", c7); 
} 
int main(){
	long long n;scanf("%lld", &n); 
	ck(n); 
}
