#include <stdio.h>
int main(){
	int n;;scanf("%d",&n);
	//bai 1 
	 
//	for(int i = 1;i<=n;i++){
//		for(int j = 2*i-1;j<=2*n-1;j+=2 ){
//			printf("%c",64+j); 
//		} 
//		printf("\n"); 
//	} 

	//bai 2 
//	3456
//	234
//	12
//	0
	 
	
//	for(int i = n-1;i>=0;i--){
//		int kk = i;
//		for(int j = 1; j<= i+1;j++){
//			printf("%c",64+kk++); 
//		} 
//		printf("\n"); 
//	} 
	// bai 3 
	int cnt = 0;
	for(int i = 1;i<=n;i++){
		for(int j = 1; j<= i;j++){
			if(cnt % 2 == 0)printf("%c",97+cnt);
			else printf("%c",97+cnt-32);
			cnt++; 
		} 
		printf("\n"); 
	} 
	 
} 
