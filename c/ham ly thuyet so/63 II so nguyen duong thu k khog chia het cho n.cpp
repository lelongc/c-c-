#include <stdio.h>
#include <math.h>
//b1  vd 17 5  II a = xb + r + y  
// 17 + 3 x5 + 17%5[r] + ? 
//de chia het cho 5 thi r +y phai chia het cho 5  II y = b - r 
// ? = 3  
// can di bao nhiu buoc nua  de a  chia het cho b (neu moi buoc di dc tang a  them 1)

//int sol(int a,int b){
//	int r  = a % b; 
//	if(r == 0)return 0;
//	return b - r; 
//} 
// 
// 
//int main(){
//	int a,b;scanf("%d%d",&a,&b);
//	printf("%d",sol(a,b)); 
//	
//	 
//	
//} 

// bai 2 
//so nguyen duong thu k khong chia het cho n
//vd n k  3 7  la so 10 

// cach lam trau  
//int xk(int n,int k){
//	int cnt = 0;
//	int i = 1;
//	while(1){
//		if(i%n !=0  ){
//			cnt++;
//			if(cnt == k)return i;
//		}
//			i++;
//	
//	}
//}
//int main(){
//	int n,k;scanf("%d%d",&n,&k);
//	printf("%d",xk(n,k));
//}
// c2 cach lam nhanh hon 
// n k 5 8 
//1234[5]6789[10]
// co 2 cum khong chia het cho n II ct so cum la k/(n-1)
// neu khong du k%(n-1) ma du r thi cong them r 
long long sk2(int n,int k){
	long long r = k%(n-1);
	long long x = k/(n-1);
	if(r == 0)return x*n-1;
	else return x*n+r;
	
}

int main(){
	int n,k;scanf("%d%d",&n,&k);
	printf("%d",sk2(n,k));
}
