#include<iostream>
#include<fstream>

using namespace std;
void PrintSet(int n,int k){
    for(int i=0;i<(1<<n);i++){
        int count=0,kk=i;
        while(kk){
            kk=kk&(kk-1);
            count++;
        }
        if(count==k){
            for(int j=0;j<n;j++){
                if(i&(1<<j))//遍历一遍集合，如果数字i对应j位置是1，就输出j（集合里的，需要显示的元素位置坐标）
                    cout<<j<<" ";

            }
            cout<<endl;
        }
    }
}
//while{}适合“全新开始”的循环，每次在开头进行判断（从0开始）
//do{}while()适合已经有初始状态的循环，每次先做，再判断（从1开始）
//       (2^n)<-->(1<<n)
int main(){
    if(!freopen("G:\\VSProjects\\ayas_project\\MyWork\\12.20\\input_1","r",stdin)) return 0;
    int n,k;
    while(~scanf("%d%d",&n,&k)){
        PrintSet(n,k);
    }
    return 0;
}