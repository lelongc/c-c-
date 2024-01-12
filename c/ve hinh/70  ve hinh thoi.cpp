#include <stdio.h>
int main(){
	int n;scanf("%d", &n);
	/*
	bai 1  
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i;j++){
			printf("*"); 
		} 
		printf("\n") ;
		
	}
	for(int i = 1;i<= n-1;i++){
	
		for(int j = n-1; j >= i;j--){
			printf("*"); 
		} 
		printf("\n"); 
	}
	*/
//bai 2

//	for(int i = 1 ; i<=n-1;i++){
//		for(int j = 1; j<=n-i;j++){
//			printf("~"); 
//		} 
//		for(int j = 1;j <= 2*i-1;j++){
//			printf("*"); 
//		} 
//		printf("\n"); 
//	} 
//	for(int i = n ;i>=1;i--){
//		for(int j = 1; j<=n-i;j++){
//			printf("~");
//		}
//		for(int j = 1; j <= 2*i-1;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
	
	//bai 3  
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 2*n;j++){
			if(j <=n-i+1 || j >= n+i)printf("*");
			else printf("~"); 
		} 
		printf("\n"); 
	} 
	for(int i = n-1;i>= 1;i--){
		for(int j = 1; j <= 2*n;j++){
			if(j <=n-i+1 || j >= n+i)printf("*");
			else printf("~"); 
		} 
		printf("\n"); 
	} 
	
	
	 
} 
