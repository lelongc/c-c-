#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	//bai 1  
	
//	for(int i =1 ; i<= n; i++){
//	
//		for(int j= 1;j<= i;j++){
//			
//			printf("%d ",j); 
//		} 
//		printf("\n"); 
//	} 
	//bai 2 
	
//	for(int i =1 ;i<= n;i++){
//		int cnt = 1 ;
//		for(int j = 1; j<= n-i;j++){
//			printf("~"); 
//		} 
//		for(int j = 1;j <= 2*i-1;j++){
//			if(j < i)printf("%d",cnt),cnt +=2; 
//			else   printf("%d",cnt) ,cnt -=2;
//		} 
//		printf("\n"); 
//	} 
	
	//bai 3
//	for(int i =1 ;i<= n;i++){
//		int cnt = 2 ;
//		 
//		for(int j = 1;j <= 2*i-1;j++){
//			if(j < i)printf("%d",cnt),cnt +=2; // vd i = 3 thi {2 4 } 6 4 2  
//			else   printf("%d",cnt) ,cnt -=2;
//		} 
//		printf("\n"); 
//	} 
	// bai 4 
	 
//	for(int i =1 ;i<= n;i++){
//		int cnt;
//		if(i % 2 == 0) cnt = i*(i+1)/2;// so cuoi cung cua dong bang tong tu 1 -> i
//		else cnt = i*(i+1)/2-i+1; 
//		for(int j =1 ; j<= i;j++){
//			if(i % 2 == 0){
//				printf("%d ",cnt--); 
//			} 
//			else {
//				printf("%d ",cnt++); 
//			} 
//			 
//		} 
//		printf("\n"); 
//
//	 

//	} 


	//bai 5  
	int cnt = 0,kk=1; 
	for(int i =1 ; i<= n;i++){
		for(int j= 1;j<= i;j++){
		 kk += cnt; 
			printf("%d ", kk);
			cnt++; 
		} 
		printf("\n"); 
	} 

	

}
