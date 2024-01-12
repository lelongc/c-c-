#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i< n; i++){
		scanf("%d",&a[i]); 
	}
//bai 1 kt so tang dan  
	//	int nok = 0; 
	//	for(int i = 0 ; i< n-1; i++){// 1 2 3 4 5 chi nen xet den n-2 la 4 neu xet 5 se xet 6 la sai  
	//		
	//		 if( a[i]>=a[i+1]) nok = 1; 
	//	} 
	//	if(nok == 1)printf("no");
	//	else  printf("yes"); 
	
//bai 2 liet ke cac so khong nho hon so o trc
	int max = -1e9-1;
	for(int i = 0; i< n; i++){
	 	if(a[i]>=max)printf("%d ", a[i]),max = a[i];
	} 
	 
	 
	 
	 
} 
