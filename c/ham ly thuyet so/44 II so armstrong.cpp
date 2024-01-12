// tinh giai thua
#include <stdio.h>
#include <math.h> 
//int main(){
//	int n,gt = 1;
//	scanf("%d", &n);
//	for(int i = 1;i<= n;i++){
//		gt *= i; 
//	} 
//	printf("%d" , gt); 
//} 
// bai 2 tinh so armstrong : la so co luy thua so luong chu so bang chinh no II vd : 371 co 3^3 + 7 ^3 + 1^3   
int dem(int n){
	int cnt = 0;
	while(n){
		cnt++;
		n /= 10; 
	} 
	return cnt;
}
int am(int n ) {
	
	 int res= 0,tmp = n;
	 int d = dem(n);
	while(n){
		res += (int)pow(n %10 , d);
		n /= 10; 
	} 
	if(tmp == res ) return 1;
	return 0; 
}
int main() {
	int n; scanf("%d" ,&n);
	printf("%d", am(n));
}
