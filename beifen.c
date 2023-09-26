
int main( )
{
    srand(time(0));
    int floor=rand()%10+1;//声明电梯起始的位置是随机的
    printf("电梯的初始楼层%d\n",floor);
    int i,t;
    int human;
    int p=0;
    printf("请输入有多少人准备乘坐电梯");
    scanf("%d",&human);
    int begin[human-1];
    int end[human-1];
    for(i=0;i<human;i++){//循环输入起点和终点
        int x,y;
            scanf("%d %d",&x,&y);
            begin[i]=x;
            end[i]=y;
    }
        int min;
        int d[i];
        for(i=0;i<human;i++){//计算起始楼层与人们所在楼层的额最小距离
            d[i]=abs(floor-begin[i]);
            min=d[0];
            if(min>d[i]) min=d[i];
        }
            for(i=0;i<human;i++){//到达最近楼层
                if(min==d[i]) break;
            }
            printf("%d\n",i);
            floor=begin[i];
            begin[i]=end[i];//电梯的关键位置
            t=d[i];
            p+=1;
            printf("%d %d %d",floor,t,p);//输出第一个停靠点
    return 0;
}
num1=differ(floor,begin,human-1);
            t+=abs(floor-begin[num1]);
            floor=begin[num1];
            begin[num1]=end[num1];//电梯的关键位置
            p+=1;
            printf("%d %d %d\n",floor,t,p);//输出第一个停靠点