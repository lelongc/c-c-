#include <stdio.h>
int min(int a ,int b){
	return a < b ? a : b ; 
} 
int max(int a ,int b){
	return a > b ? a : b ; 
} 
int main(){
	int n,m;scanf("%d%d",&n,&m);
	// bai 1 
	 
//	for(int i = n; i >= 1 ; i--){
//		  
//		int init = min(i , m); 
//		for(int j = 1 ; j<= m;j++){
//			if(j <= m -i)printf("%c",64 + init++);
//			else printf("%c",64 +init);// tu so chuyen sang chu  
//		} 
//		printf("\n");
//	}
		// bai 2 
		
//	for(int i = 1; i <= n;i++){
//		int init = min(i,m); 
//		for(int j = 1;j<=m;j++){
//			if(j <= m -i)printf("%c",63 + init++);
//			else printf("%c",63 + init);   
//		} 
//		printf("\n"); 
//	} 
		 
		// bai 3 
		
//		for(int i = 1 ;i <= n;i++){
//			int init = min(i,m); 
//			for(int j = 1;j<= m;j++){
//				if(j <= m - i+1)printf("%c",64+init+j-1);//cho init tang len nho j vi khi tang xong no lai giam tu i
//				else {
//			       if(m < i)printf("%c",64+init--);
//			       else printf("%c",--init+64);
//				 
//				} 
//			 
//			} 
//			printf("\n");
// 
//		} 
        
        // bai 4 
		for(int i = 1; i<= n;i++){
			int init = max(n,m); 
			for(int j = 1 ;j<= m;j++){
				if(j <= i - 1)printf("%c",96+init--);
				else printf("%c",init+96); 
			} 
			printf("\n"); 
		} 


}
