#include <stdio.h>
#include <math.h>
//sang phi ham euler 
int p[1000001]; 
void sieve(){
	for(int i = 1; i <= 1000000;i++){
		p[i] = i; 
	} 
	for(int i = 2; i <= 1000000; i++){
		if(p[i] == i) p[i] = i - 1;
		for(int j = 2*i;j <= 1000000; j += i){
			p[j] -= p[j]/i;
			 
		} 
	} 
} 
int main(){
	sieve();
	int n;scanf("%d" , &n);
	for(int i = 1; i <= n; i++){
		printf("%d " , p[i]); 
	} 
	
} 
