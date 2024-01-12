 #include <stdio.h>
 #include <math.h>
//so luong uoc la so le 
// neu la so chinh phuong thi so cuoi cung i = n /i; thi cnt += 1;
//nen so luong uoc cua n la so le
// nen mun kiem tra so luong uoc la so le thi chi can kiem tra no co phai la so chinh phuong khong  
int scp(int n){
	int can = sqrt(n);
	if(1ll*can*can == n)return 1; 
	return 0; 
} 
int main(){
	int n; scanf("%d" ,&n);
	if(scp(n)) 
	printf("yes");
	else printf("no"); 
	
}
