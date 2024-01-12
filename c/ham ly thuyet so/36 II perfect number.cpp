#include <stdio.h>
#include <math.h>
// so hoan hao la so co tong cac uoc  la chinh no (tru uoc chinh no vd 60 : co uoc la 60 nma k tinh uoc nay) vd : 6 co uoc la 1 2 3 = 6 
int ck(int n){
	int sum = 1;// n co uoc la 1  
	for(int i = 2; i <= sqrt(n); i++){// xet tu 2 de loai uoc la chinh no vd 60 : thi co uoc la  1 vs 60  
		if( n % i == 0 ){
			sum+=i;
			if(i != n / i)sum += n / i; 
		} 
		
		 
	} 
	if(sum == n && n != 1)return 1;// n != 1 de loai truong hop n = 1 thi tong cung = 1 no return 1 la sai 
	return 0; 
} 
int ck1(int n){
	int sum = 0;  
	for(int i = 1; i <= sqrt(n); i++){// xet tu 1 thi 60 chua bi loai  
		if( n % i == 0 ){
			sum+=i;
			if(i != n / i)sum += n / i; 
		} 
		
		 
	} 
	if(sum - n  == n )return 1;// do xet tu i = 1 nen 60 chua bi loai nen phai tru di 60  
	return 0; 
} 
// nhanh va dung dc cho input lon 
 int pri(long long  n){
 	if( n < 2 )return 0;
	 for(int i = 2; i <= sqrt(n);i++){
	 	if(n % i == 0)return 0;
		  
	 } return 1; 
 } 
long long ans[10];// do chi co tam  10 so hh duoi 10 mu 18  
int cnt = 0; 
void ck3(){
	for(int i = 1; i <= 32;i++){
		int check = (int)pow(2,i)-1; 
		if(pri(i)&&pri(check)){
			//long long hh 
			 ans[cnt++]= 1ll*check*(int)pow(2,i-1);
			//if( hh == n) return 1;
			 
		}
	} //return 0; 
} 


int main(){
	ck3(); 
	
	int t; scanf("%d" , &t);
	while(t--){
	
		long long  n;
		scanf("%lld", &n);
		int ok; 
		for(int i = 0; i <cnt ; i++){
			if(ans[i] == n){
			ok = 1;break;
			}
		} 
		if(ok)printf("yes \n");
		else printf("no \n");
		
	
	}
//	for(int i = 0; i < cnt;i++){
//		 printf("%lld\n", ans[i]); 
//	} 
 
} 
