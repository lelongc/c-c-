#include <stdio.h>
int max(int a,int b ){
	return a > b ? a : b; 
} 
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]); 
	} 
	int res = 0,cnt = 1;//idx = i-res +1 chi so dau tien cua day. a[idx] 
	for(int i = 1; i< n; i++){//duyet tu 1 de bo qua so dau tien vd 1 thi in ra 1 
		if(a[i]!=a[i-1])cnt++;// * thi day con trai dau vd 1 -2// == thi day con giong nhau  vd 444 l 
		else cnt = 1;
		if(cnt > res )res = cnt;//cap nhat so day lon nhat  // them dau bang eu mun in ra day sau  
	} 
	//if(res == 1)printf("0");else // neu toan duong thi day con = 0  
	 printf("%d",res); 
} 
