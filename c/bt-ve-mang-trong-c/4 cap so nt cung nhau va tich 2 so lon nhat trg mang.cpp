#include <stdio.h>
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}
long long max(long long  a,long long  b){
	return a > b ? a : b;
}
int main(){
	int n ;scanf("%d", &n);
	int a[n];
	for(int i =0; i< n; i++){
		scanf("%d",&a[i]);
	}
// bai 1 dem cap so nguyen to cung nhau 

		//	long long  cnt = 0;
		//	for(int i = 0 ;i < n ;i++){
		//		for(int j = i + 1; j < n; j++){
		//			if(gcd(a[i],a[j])==1)cnt++;// nguyen to cung nhau la so co uoc chung lon nhat la 1  
		//		}
		//	}
		//	printf("%d",cnt);

//bai 2 :tich 2 so lon nhat trong mang 
	int max1 = -1e9-1,max2 = -1e9-1,min1 = 1e9+1,min2 = 1e9+1;
	for(int i = 0 ; i < n ; i++){
		if(a[i]>max1){
			max2 = max1;
			max1 = a[i];
		}
		else if(a[i]>max2)max2 = a[i];
		if(a[i]<min1){
			min2 = min1;
			min1 = a[i];
		}
		else if(a[i]<min2)min2=a[i];
		
	}
	printf("%lld",max(1ll*min1*min2,1ll*max1*max2));
}
