//b1 so dep la so chia het cho 1 so nguyen to va chia het cho binh phuong cua so nguyen to do || vd 28 % cho 2 va binh phuong cua 2 la 4 
//b2 so chia het cho so nt phai bat buoc chia het cho binh phuong cua no || vd 28 % 7 nhung khong chia het cho binh phuong cua no nen sai ! 
 #include <stdio.h>
 #include <math.h>
 int sodep1(int n){ 
 	for(int i = 2; i <= sqrt(n); i++){
 		int cnt = 0;
 		while( n % i == 0){
 			cnt++;
 			n /= i;
		 }
		 if(cnt >= 2)return 1;
	 } 
	 return 0;
 } 
 int sodep2(int n){
 	int ok = 0;
 	for(int i = 2; i<= sqrt(n); i++){
 		int cnt = 0;
 		while(n % i ==0){
 			cnt++;
 			n /= i;
		 }if( cnt ==1)return 0;
		 if( cnt >= 2)ok = 1;// bien ok de loai so 1 || neu la 1 thi no se xuong return 1 lun nen khong duoc || de bien ok de loai 1  
	 }
	 if( n != 1 ){
	 	return 0;
	 }
	 return ok;
 }
 int main(){
 int a,b; scanf("%d%d" ,&a ,&b);
 for(int i = a; i <= b; i++){
 	if(sodep1(i))printf("%d " ,i); 
 	//if(sodep2(i))printf("%d ", i);
 } 
   
}

 
