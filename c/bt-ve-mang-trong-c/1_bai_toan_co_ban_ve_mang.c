#include <stdio.h>
#include <math.h>
int doixung(int a[],int n){
	int l = 0,r = n-1;
	while(l < r){
		if(a[l]!=a[r])return 0;
		l++;r--; 
	} 
	return 1; 
} 
int sodep(int n){
	int cnt = 0; 
	while(n){
		int r = n % 10;
		if(r == 1 || r == 9 )cnt++;
		n/=10; 
	} 
	if(cnt >= 2 )return 1; 
} 
int ck(int n){// check cac so toan le  
	while(n){
		int r = n % 10; 
		if(r % 2 == 0) return 0;
		n/=10; 
	} 
	return 1; 
} 
int nt(int a){
	for(int i = 2; i<= sqrt(a);i++){
		if(a % i == 0)return 0; 
	} 
	return a > 1; 
	
} 
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n;i ++){
		scanf("%d",&a[i]);
	}
// bai 1 : tim so lon be nhat  
		//	
		//	int max = a[0],min = a[0];// nhap xong r ms khai bao dc  
		//	// c2 int max = -1e9+1 min = 1e9+1; 
		//	for(int i = 0; i < n; i++){
		//		if(a[i] > max)max = a[i];
		//		if(a[i] < min)min = a[i];
		//	}
		//	printf("%d %d",min,max);
//bai 2 : dem so chan le trong mang 

		//	
		//		int chan= 0,le=0;
		//		for(int i = 0 ;i < n; i++){
		//			if(a[i] % 2 == 0)chan++;
		//			else le++; 
		//		} 
		//		printf("%d %d",chan,le); 
// bai 3 : liet ke cac so nguyen to trong mang 
		//		 
		//		 for(int i = 0; i < n; i++){
		//		 	if(nt(a[i]))printf("%d ",a[i]); 
		//		 } 
// bai 4 : in ra chi so cua so nho nhat trong mang 
	//	
	//	int res = 1e9,idx;
	//	for(int i = 0; i < n;i++){
	//		if(a[i] < res ){// them dau bang neu mun in ra vi tri so sau  
	//			res = a[i];
	//			idx = i; 
	//		} 
	//		
	//	} 
	//	printf("%d",idx); 
// bai 5 ; so lon,nho nhat thu 1 va 2
 
		// 	
		//	int max1 = -1e9-1,max2 = -1e9-1,min1=1e9+1,min2=1e9+1; 
		//		for(int i = 0; i < n;i++){
		//		if(a[i] > max1 ){// them dau bang neu mun in ra vi tri so sau  
		//			max2 = max1;  
		//			max1 = a[i];
		//		} 	
		//		else if( a[i] > max2)max2 = a[i]; 
		
		//		if(a[i] < min1){
		//			min2 = min1;
		//			min1 = a[i];
		//		} 
		//		else if(a[i] < min2)min2 = a[i];
		//		
		//	} 
		//	printf("%d %d %d %d",max1,max2,min1,min2); 

// bai 6 dem va  in ra cac chu so toan so le
 
	//		int cnt = 0; 
	//		for(int i = 0; i < n; i++){
	//			if(ck(a[i]))cnt++; 
	//		}
	//		printf("%d\n",cnt);
	//		for(int i = 0; i< n; i++){
	//			if(ck(a[i])) printf("%d ",a[i]); 
	//		} 
	
//bai 7 so dep chi co 1 va 9
 
	//		int ok = 0; 
	//		for(int i = 0; i< n; i++){
	//			if(sodep(a[i]))printf("%d ",a[i]),ok=1; 
	//		} 
	//		if(ok==0)printf("-1");

// bai 8 in ra cac so co it nhat 1 so lien ke trai dau vs no  
	//	for(int i = 0; i < n; i++){
	//	// phong truong hop i = 0 va i = n-1 vi no se  thanh i=-1 va chi so cuoi la rac 
	//		 if(i == 0 && i a[0]*a[1]<0)printf("%d ",a[0]);
	//		 else if( i = n - 1 && a[n-1]*a[n-2]<0)printf("%d ",a[n-1]);
	//		if(a[i]*a[i-1]<0 || a[i]*a[i+1] < 0)printf("%d ",a[i]); 
	//	} 

//bai 9 kt tinh doi xung 
	int ok = 0; 
	
		if(doixung(a,n))
		ok = 1; 
	
	if(!ok)printf("no");
	else printf("yes"); 
  
}


