#include <stdio.h>
#include <math.h>
// so strong la so co tong giao thua cua cac chu so bang chinh no vd : 145 = 1! + 4! +5! 
int check(int n){// nen tach ham giai thua va ham tach cac chu so nma luoi 
	int tg = 0,kk = n; 
	while( n){
		int r = n % 10;
		int gt = 1;
		for(int i = 1;i <= r;i++){
			
			gt *= i;
			 
	    }
	    tg += gt;
	    n /= 10; 
	} 
	if(kk == tg ) return 1;
	return 0; 
} 
int main(){
	int a,b; scanf("%d%d",&a, &b);
	int ok = 0; 
	for(int i = a; i <= b; i++){
		if(check(i)){
			printf("%d " ,i);
			ok = 1; 
		} 
	} 
	if(!ok)printf("0"); 
}
