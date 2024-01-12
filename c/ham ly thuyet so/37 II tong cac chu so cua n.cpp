#include <stdio.h>
int main(){
	int tong = 0,n; scanf("%d", &n);
	 
	while(n){
		tong += n % 10;
		n /= 10; 
	}
	printf("%d" ,tong); 
} 
