#include <stdio.h>
#include <string.h>
//so chia hết cho 6 nếu số cuối chia hết cho 2 và tổng các chữ số chia hết cho 3 
// 4 nếu 2 số cuối chia hết cho 4 
// 2*x = 4 thì x là số lương số cuối dựa vào đó để xem có chia hết cho 4 không 
int ch4(char c[]){
    if(strlen(c)==1){
        if((c[0]-'0') % 4 == 0)return 1;
        return 0;
    }
    int tmp = (c[strlen(c)-2]-'0')*10+(c[strlen(c)-1]-'0');
    if(tmp % 4 == 0)return 1;
    return 0;
}
int ch6(char c[]){
    int sum = 0;
    if((c[strlen(c)-1]-'0')% 2 == 0){
        for(int i = 0;i <strlen(c);i++){
            sum+= c[i]-'0';
        }
        if(sum % 3 == 0)return 1;
        
    }
    return 0;
}
int ch25(char c[]){
    if(strlen(c)==1)return 0;
    int tmp = (c[strlen(c)-2]-'0')*10+(c[strlen(c)-1]-'0');
    if(tmp % 25 == 0)return 1;
    return 0;
}int ch8(char c[]){
    if(strlen(c)==1){
        if((c[0]-'0')%8==0)return 1;
        return 0;
    }
    else if (strlen(c)==2){
        int tmp = (c[strlen(c)-2]-'0')*10+(c[strlen(c)-1]-'0');
        if(tmp % 8 == 0)return 1;
    return 0;
    }
     int tmp = (c[strlen(c)-3]-'0')*100+(c[strlen(c)-2]-'0')*10+(c[strlen(c)-1]-'0');
    if(tmp % 8 == 0)return 1;
    return 0;
}int ch235(char c[]){
    if(c[strlen(c)-1] != '0')return 0;
    int sum= 0;
    for(int i =0 ;i <strlen(c);i++){
        sum+=c[i]-'0';
    }
    if(sum%3==0)return 1;
    return 0;
}
int main(){
    char c[1000];
    scanf("%s",c);
    if(ch235(c))printf("yes");
    else printf("no");
}