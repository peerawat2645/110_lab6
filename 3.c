#include <stdio.h>
int main(){
    int n,q,i,s,d,k=0,a,b,max,min,j;
    char f;
    scanf("%d %d",&n,&q);
    int t[n];
    int ff[n];
    for(i=0;i<=n;i++){
        t[i]=0;ff[i]=0;
    }
    for(i=0;i<q;i++){
        scanf(" %c",&f);
        s=0,d=0,a=0,b=0;
        if(f=='U'){
            scanf("%d %d",&s,&d);
            t[s]=d;
        }
        else if(f=='P'){
            max=0;k++;
            scanf("%d %d",&a,&b);
            for(j=a;j<=b;j++){
                if(max<t[j])
                {
                    ff[k]=t[j];
                }
            }
        }
    }
    for(i=1;i<=k;i++){
        printf("%d\n",ff[i]);
    }
}
