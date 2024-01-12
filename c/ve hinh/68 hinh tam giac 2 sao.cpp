#include <stdio.h>


int main(){
	
// bai 1	
	
//	int n;scanf("%d",&n);
//	for(int i = 1;i<= n;i++){
//		for(int j = 1;j<= i;j++){
//			
//			if(i == 1 || i == j || i == n || j == 1){
//				printf("*");
//			}
//			else printf(" ");
//		}
//		printf("\n");
//	}


// bai 2 

//	int n;scanf("%d",&n);
//	for(int i = 1;i <= n;i++){
//		for(int j = 1;j <= n - i;j++){
//			printf(" ");
//		}
//		for(int j = 1;j <= 2 * i -1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}

// bai 3 

//	int n;scanf("%d",&n);
// 	for(int i = 1; i <= n;i++){
// 		for(int j = 1; j <= n - i;j++){
// 			printf(" "); 
//		 } 
//		 for(int j = 1; j <= 2*i - 1;j++){
//		 	if(i == 1 || i == n || j ==1 || j == 2*i-1)printf("*");
//			 else printf(" "); 
//		 } 
//		 printf("\n"); 
//	 } 

//bai 4 

int n;scanf("%d", &n);

for(int i = n; i >= 1;i--){
	for(int j = 1; j <= n - i;j++){
		printf(" "); 
	} 
	for(int j = 1; j <= 2*i-1;j++){
		printf("*"); 
	} 
	printf("\n"); 
} 
 







}
