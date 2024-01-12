#include <stdio.h>
#include <math.h>
#include <string.h> 
//b1 in ra chu so cuoi cung cua 1378^n co n <=10^9
//chu so cuoi cung cua 1378^n = 8^n 
// cac so cuoi cung cua x^n se lap lai theo chu ki 

//c2  

// vd 8^1 = 8
//    8^2 = 4(64) 
//    8^3 = 2(512)
//    8^4 = 6(4096)
//    8^5 = 8(32768) 
// chu ki la 4 nen n % 4 == 1 thi in ra 8 .... 

//c1 dung luy thua nhi phan 

int ck1(int a,int b){
	int res = 1;
	a%=10; 
	while(b){
		if(b % 2 == 1) {
			res *= a;
			res %= 10; 
		}
		a *= a;
		a%=10; 
		b/=2; 
	} 
	return res; 
} 
int main(){
	int n;scanf("%d",&n);
	printf("%d ", ck1(1378,n)); 
//c2 tren kiai
	if(n % 4 == 1)printf("8");
	else if(n % 4 == 2 )printf("4"); 
	else if(n % 4 == 3 )printf("2");
	else if(n % 4 == 0)printf("6");
 
} 

// bai 2 

//(1^n+2^n+.4^n)%5;n <= 10^(10^5)
// chu so cuoi cung cua 1^n +...4^n

// n r[du]	1 2 3 0[4]  
//vd 1^n  	1 1 1 1 
//   2^n  +	2 4 8 6
//   3^n  	3 9 7 1 
//   4^n  +	4 6 4 6 
//   tong 	10 20 20 14 
//so cui cung 0  0  0  4  

//int main(){
//	// vd 10 ^ 2 co 3 so[2+1]
//	//thi 10^(10^5) co [10^5 +1 ] so
//	char c[100002];scanf("%s",c);
//	int r; 
//	if(strlen(c) == 1){
//		r =( c[0]-'0')% 4;
//	}// ta chi can duyet 2 so cuoi cua day so de tim tinh chia het  
//	else r = (c[strlen(c) - 2]-'0')*10 +(c[strlen(c)-1]-'0'),r%=4; 
//	if(r == 0)printf("4"); 
//	else printf("0"); 
//} 
//
//    
 
