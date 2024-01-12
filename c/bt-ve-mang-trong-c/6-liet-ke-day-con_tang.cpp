#include <stdio.h>
int main(){
	int t;scanf("%d",&t); 
	for(int i = 1 ; i <= t;i++){
	
		int n;scanf("%d",&n);
		int a[n];
		for(int i = 0; i < n ; i++){
		scanf("%d",&a[i]);
		} 
		int res = 1,cnt = 1,dem = 1; // vd trg hop giam 10 9 8 7 6 5 4 3 2 1 thi can duyet so dau  
		int b[n];
		 b[0] =0;// test case 2 o tren de loai di b[] va in ra a[0] | 
		for(int i = 1; i < n;i++){								//^
			if(a[i] > a[i-1] )cnt++;
			else cnt = 1;
			if(cnt > res ){
				res = cnt;
				b[0] = i-res +1; 
				dem = 1; 
			} 
			else if( res == cnt ){
				b[dem] = i-res+1;
				dem++; 
			} 
		} 
		printf("test %d:\n",i); 
		printf("%d\n",res); 
		for(int i = 0; i < dem;i++){
			for(int j = 0;j < res;j++){
				printf("%d ",a[b[i]+j]);
			} 
			printf("\n");
		} 
	}	
} 
