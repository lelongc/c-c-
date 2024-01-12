#include <stdio.h>
//*	i = 1 thi co 1 sao  
//**
//***
//****
//*****
//bai 1  
//int main(){
//	int n;scanf("%d",&n);
//	for(int i = 1; i<= n;i++){
//		for(int j = 1; j <= i;j++){
//			printf("*"); 
//		} 
//		printf("\n"); 
//	} 
//} 
// bai 2 
//int main(){
//	int n;scanf("%d",&n);
//	for(int i = n; i >= 1;i--){
//		for(int j = 1; j <= i;j++){
//			printf("*"); 
//		} 
//		printf("\n"); 
//	} 
//} 
//bai 3 
//int main(){
//	int n;scanf("%d",&n);
//	for(int i = 1; i<=n;i++){
//		for(int j = 1; j <= n;j++){
//			  if(j <= n - i )printf(" "); 
//			else printf("*");  
//		} 
//		 
//		
//		printf("\n"); 
//		 
//	}  
//}
//bai 4 
 
int main(){
	int n;scanf("%d",&n);
	for(int i = 1; i<=n;i++){
		for(int j = 1; j <= n;j++){
			  if(j <= i - 1 )printf(" "); // j < i  
			else printf("*");  
		} 
		 
		
		printf("\n"); 
		 
	}  
}
 
