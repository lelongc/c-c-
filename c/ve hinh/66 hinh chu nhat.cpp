#include <stdio.h>
int main(){
//		j = 1 2 3 4 5  
//***** i =1 *****\n 
//***** i =2 
//***** ...
//*****
//*****
//bai 1 

//	int n;scanf("%d",&n);
//	for(int i = 1;i<=n;i++){
//		for(int j = 1; j <= n; j++){
//			printf("*"); 
//		} 
//		printf("\n"); 
//	} 
//} 
//bai 2 
//	int n;scanf("%d",&n);
//	for(int i = 1;i<=n;i++){
//		for(int j = 1; j <= n; j++){
//			if(i == 1 || i == n || j == 1 || j == n)printf("*"); 
//			else printf(" "); 
//			
//		
//		} 
//		printf("\n"); 
//	} 
//}  
//bai 3 
//	int r,c;scanf("%d%d",&r,&c);
//	for(int i = 1;i<=r;i++){
//		for(int j = 1; j <= c; j++){
//			if(i == 1 || i == r || j == 1 || j == c)printf("*"); 
//			else printf(" "); 
//			
//		
//		} 
//		printf("\n"); 
//	} 
//}  
//bai 4  
	int r,c;scanf("%d%d",&r,&c);
	for(int i = 1;i<=r;i++){
		for(int j = 1; j <= c; j++){
			if(i == 1 || i == r || j == 1 || j == c)printf("*"); 
			else printf("~"); 
			
		
		} 
		printf("\n"); 
	} 
}  
 
