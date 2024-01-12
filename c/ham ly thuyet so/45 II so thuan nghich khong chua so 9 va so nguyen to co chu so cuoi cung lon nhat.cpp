// thuan nghich lon hon 1 khong chua so 9

#include <stdio.h>
#include <math.h>
//int tn(int n){
//	int tmp = n,sum = 0;
//	while(n){
//		int r = n % 10;
//		if(r == 9)return 0; 
//		
//		sum = sum*10 + r;
//		n /= 10; 
//	} 
//	if(tmp == sum)return 1;
//	return 0; 
//} 
//int main(){
//	int n,cnt = 0;scanf("%d" ,&n);
//	for(int i = 2; i <= n; i++){
//		if(tn(i)){
//			cnt++;
//			printf("%d " ,i); 
//		} 
//	} 
//	printf("\n%d", cnt); 
//} 
//b2 so nguyen to co chu so cuoi cung lon nhat 
int nt(int n){
	if(n < 2 )return 0; 
	for(int i = 2; i <= sqrt(n); i++){
		if( n % i == 0)return 0; 
	} 
	return 1; 
} 
int slncc(int n){
	int check = n % 10;
	while (n){
		int r = n % 10;
		if(r > check)return 0; 
		n/=10; 
	} 
	return 1;
}  
int main(){
	int n;scanf("%d" ,&n);
	int cnt = 0; 
	for(int i = 1; i<=n; i++){
		if(nt(i) && slncc(i) ){
		printf("%d " ,i); 
		cnt++;
		}
	} 
	printf("\n%d" ,cnt); 
} 

