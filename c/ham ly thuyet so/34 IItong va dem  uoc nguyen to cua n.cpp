#include <stdio.h>
#include <math.h>
int sum0(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if( n % i == 0)sum+=i;
	}
	return sum;
}
int sum1(int n){
	int sum = 0;//cnt = 0
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
		
			if( i != n/i)sum += i + n / i;//cnt+= 2;
			else sum+= i;//cnt++;
		}
	
	}
	return sum;
}
int main(){
	int n; scanf("%d" ,&n);
	printf("%d" , sum1(n));
	
}
