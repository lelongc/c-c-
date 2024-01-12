#include <stdio.h>
#include <math.h>
// dem tan suat xuat thien theo thu tu tu trai sang phai 
long long lat(long long n){//lat nguoc de tinh tu trai sang phai  
	long long res = 0; 
	while(n){
		res = res*10 + n % 10;
		n /=10; 
		
	} 
	return res; 
}  
void  ck(long long n){
	long long m = lat(n);
	int c2 = 0,c3 = 0,c5 = 0,c7 = 0; 
	while(n){
		int r = n % 10;
		if(r == 2)c2++;
		else if( r == 3)c3++;
		else if(r == 5)c5++;
		else if(r == 7)c7++; 
		n/=10; 
		
	} 
	while(m){// de khong bi in trung thi de c2 = 0 
		int c = m % 10; 
		if(c == 2 && c2 != 0){
		printf("2 %d\n",c2); 
		c2 = 0; 
		}
		else if( c == 3 && c3 != 0){
		printf("3 %d\n", c3); 
		c3 = 0; 
		}
		else if(c == 5&& c5 != 0){
		printf("5 %d\n" , c5); 
		c5 = 0; 
		}
		else if(c == 7 && c7 != 0){
		printf("7 %d\n", c7);
		c7 = 0; 
		}
		
		m /= 10; 
	}
	
}
int main(){
	long long n;scanf("%lld",&n);
	ck(n); 
	
} 
