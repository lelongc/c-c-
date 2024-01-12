#include <stdio.h>
int min(int a,int b){
    if(a<b)return a;
    return b;
}

int main(){
    int n;scanf("%d",&n);
    
    //bai 1 
    
//    for(int i =1 ;i <= 2*n-1;i++){
//        for(int j = 1;j <= 2*n-1;j++){
//           int mins = min(min(i-1,2*n-i-1),min(j-1,2*n-j-1));//kc tren duoi trai phai 
//           printf("%d",n-mins);
//            
//        }
//        printf("\n");
//    }
    
    //bai 2 
    
//     for(int i =1 ;i <= n;i++){
//      //  int init = n;
//        for(int j = 1;j <= n;j++){
//        //   if(j < i)printf("%d ",init--);//duoi duong cheo chinh
//        //   else printf("%d ",init);
//        //c2
//        int mins = min(j-1,i-1);// tren va trai 
//        printf("%d ",n -mins);//quan sat thay so to hon o phia tren va ben trai
//        }
//        printf("\n");
//    }
    
    // bai 3 
    
//       for(int i =1 ;i <= n;i++){
//        int cnt = i;
//        for(int j = 1;j <= n;j++){
//        if(j < i)printf("%d",cnt--);// duong cheo duoi
//        else printf("%d",cnt++);//duong cheo tren
//        }
//        printf("\n");
//    }

	//bai 4
	
	  for(int i =1 ;i <= n;i++){
        int cnt = i;
        for(int j = 1;j <= n;j++){
        if(j <= n-i)printf("%d ",cnt++);
        else printf("%d ",cnt);
        }
        printf("\n");
    } 
}
