#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

struct Records{
    char  id[15];
    long inTime;
    long outTime;
}Records;

int main()
{
    int number;
    cin>>number;
    int h,m,s;
    struct Records stu[number];
    for(int i = 0;i < number;i++){
        scanf("%s",&stu[i].id);
        scanf("%d:%d:%d",&h,&m,&s);
        stu[i].inTime = h*3600+m*60+s;
        scanf("%d:%d:%d",&h,&m,&s);
        stu[i].outTime = h*3600+m*60+s;
    }
    int minId,maxId = 0;
    long minInTime = stu[0].inTime;
    long maxOutTime = stu[0].outTime;
    for(int i=1;i<number;i++){
        if(stu[i].inTime < minInTime){
            minInTime = stu[i].inTime;
            minId = i;
        }
        if(stu[i].outTime > maxOutTime){
            maxOutTime = stu[i].outTime;
            maxId = i;
        }
    }
    printf("%s %s",stu[minId].id,stu[maxId].id);
}



