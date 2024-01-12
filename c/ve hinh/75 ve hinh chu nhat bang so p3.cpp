#include <stdio.h>
int min(int a,int b){
	return a<b ? a : b; 
} 
int main(){
	int n,m;scanf("%d%d",&n,&m);
	// bai 1 
	 
//	for(int i = 1; i <= n;i++){
//		printf("%d",i); 
//		for(int j = 1;j < m;j++){// do in ra so dau r nen chi can xet  m-1 so con lai  
//			if(j <= m -i)printf("%d",i+j);//tan dung j tang 1 qua moi lan lun khoi phai bien dem
//			else {
//				int mins = min(m-1,i-1);// so sanh 65..321 4321 no so sanh 5 va 3 ai nho hon thi lay
//				while(j < m){
//					printf("%d",mins--);j++;//in ra nhung so tip theo cua cot
//					 
//					 
//				} 
//			}
//		} 
//		printf("\n"); 
//	} 
	//bai 2 
	
//	for(int i = 1 ; i<= n;i++){
//		int init = i; 
//		for(int j = 1; j<= m;j++){
//			if(j <= m - i)printf("%d",init++);
//			else printf("%d",init--); 
//		} 
//		printf("\n");
//	} 

	// bai 3
	
//	for(int i = 1;i<= n;i++){
//		int ck = i;
//		for(int j = 1; j<= m;j++){
//			if(j <= i-1)printf("%d",ck--);
//			else printf("%d",ck++);
//		}
//		printf("\n");
//		
//	}
	
	// bai 4
		if(n >= m){
		
			for(int i = n;i >= 1;i--){
				int init = i; 
				for(int j =1;j<= m;j++){
					if(j <=i - 1)printf("%d",init--);
					else printf("%d",init++); 
				} 
					printf("\n"); 
			} 
		}
		else{
			for(int i =1; i <= n;i++){
				int init = m-i+1;
				for(int j = 1;j<= m;j++){
					
					if(j <= m -i )printf("%d",init--);
					else printf("%d",init++); 
				} 
				printf("\n"); 
			} 
			
		} 
} 
