#include<stdio.h>

int main(){
    char c;
    c=getchar();

    if(c>96&&c<123){
        c-=32;
    }
    else if(c>64&&c<91){}
    else{
        printf("Invalid character!");
        return 0;
    }

    int i,j,k,l;
    for(i=c;i>=65;i--){
        for(j=i-66;j>=0;j--) printf("_");
        for(k=65;k<=65+c-i;k++) printf("%c",k);
        for(l=64+c-i;l>=65;l--) printf("%c",l);
        printf("\n");
    }
    return 0;
}
