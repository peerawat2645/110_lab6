#include <stdio.h>
int main(){
    int w,h,i,j,s=0,a,b;
    scanf("%lld %lld",&w,&h);
    int p[w][h];
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf("%d",&p[i][j]);
            s+=p[i][j];
        }
        a=s,b=s;
    }
    do{
        s++;
        a=s;
    }while(a%(w*h)!=0);
    printf("%d",a-b);
}
