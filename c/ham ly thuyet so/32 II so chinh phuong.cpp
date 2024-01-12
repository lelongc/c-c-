#include <stdio.h>
#include <math.h>
//so chinh phuong la so co tich can bac 2 la chinh no vd 16 = 4x4
//b2 in ra scp tren doan 
int scp(long long n){
	int can = sqrt(n);
	if(can*can == n)return 1;
	return 0; 
} 
//int main(){
//	int n; scanf("%d", &n);
//	if(scp(n))printf("yes");
//	else printf("no"); 
//	
//} 
int main(){
	int a,b; scanf("%d%d" ,&a,&b);
//	for(int i = a; i <= b; i++){
//		if(scp(i))printf("%d", i); 
//	} 
	int l = sqrt(a),r = sqrt(b);
	if(l*l !=  a)l++; 
	for(int i = l; i <= r; i++){
		printf("%d ", i*i); 
	} 
} 
