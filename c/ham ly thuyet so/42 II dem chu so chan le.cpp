#include <stdio.h>
#include <math.h>
int main(){
	int  n; scanf("%d" , &n);
	int c = 0,l = 0;
	while(n){
		int r = n % 10;
		if(r % 2 == 0)c++;
		else if(r % 2 != 0 )l++;
		n /= 10;
		
	}
	printf("so chan la %d\nso le la %d", c,l);
} 
