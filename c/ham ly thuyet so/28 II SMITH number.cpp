//so smith la so khong phai so nt:  ma tong cac  uoc = tong cac chu so cua n 
//vd 666 co tong cac chu so bang 6+6+6 = 18 va cac uoc cua 666 la 2 3 3 37 thi tong cac uoc cung bang 2+3+3+3+7 = 18
#include <stdio.h>
#include <math.h>
int  sum(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
		
	}
	return sum;
}
int smith(int n){
	int sum1 = sum(n);
	int sum2 = 0;
	
	int tmp = n;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			sum2 += sum(i);
			n /= i;
		}
	}
	if(tmp == n )return 0;
	if( n != 1){
		sum2 += sum(n);
	}
	return sum1 == sum2;
}
int main(){
	int n ; scanf("%d" ,&n);
	if(smith(n))printf("yes");
	else printf("no");
}
