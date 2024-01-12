//so loc phat la so chi co 0 6 va 8 
//b2 so dep la so thuan nghich co it nhat 1 chu so 6 va tong cua cac chu so phai co so cuoi cung bang 8 
// bai 1 
#include <stdio.h>
#include <math.h>
int slp(int n){

	while(n){
		int r = n % 10;
		if(r != 0 && r != 6 && r != 8)return 0;
		n /= 10;
		
	}
	return 1;
} 
int slptn(int n){
	int ok6 =0,sum = 0,tmp = n,ck = 0;
	while(n){
		int r = n % 10;
		ck = ck*10 + r;
		if(r == 6)ok6 = 1;
		sum+= r;
		n /=10;
	}
	if(sum % 10 == 8 && ok6 == 1 && tmp == ck)return 1;
	return 0;
}

//int main(){ //bai 1
//	int n; scanf("%d" ,&n);
//	printf("%d", slp(n));
//	
//} 
//bai 2 
int main(){
	int a,b;scanf("%d%d",&a,&b);
	for(int i =a; i <= b;i++){
		if(slptn(i))printf("%d " ,i);
	}
}
