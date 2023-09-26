#include<stdio.h>

int main( )
{
    int x;
    double sum=0;
    int c=0;
    int cnt;
    printf("请输入数字的个数");
    scanf("%d",&cnt);
    scanf("%d",&x);
    if(cnt>0){
        int num[cnt];
        while(x!=-1){
        num[c]=x;
        sum+=x;
        c++;
        scanf("%d",&x);

    }
        printf("%f\n",sum/c);
        int i;
        for(i=0;i<c;i++){
            if(num[i]>sum/cnt){
                printf("%d\n",num[i]);
            }
        }
    }
    return 0;
}