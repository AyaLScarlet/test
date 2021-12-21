#include<iostream>
#include<fstream>
#include<queue>
using namespace std;
char map[1000][1000];//char类型的map，用全局静态大数组存储，否则会有访问问题.char* a[]  和char** a不兼容
const int fx[]={-1,0,1,0};
const int fy[]={0,-1,0,1};

//这里的xy和坐标不一样，先行再列--------------

//这两个方向向量，每次用i=0~3遍历，方向就是从上开始逆时针转一圈
//图里的DFS递归的时候，先做再判断下一个要不要做
//不要采取“开局判断，如果不满足要求直接return”的模板
//main前面的顺序->const、全局常量->函数、结构体->main
typedef struct{
    int x,y;
}node;
bool CheckInMap(const node& node_to_check,int H,int W){
    return (node_to_check.x>=0&&node_to_check.x<H&&node_to_check.y>=0&&node_to_check.y<W);
}
void MyBfs(int para_x,int para_y,int& count,int H,int W){
    count=1;
    queue<node> q;
    q.push({para_x,para_y});
    while(!q.empty()){
        node now_node=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            node next_node={now_node.x+fx[i],now_node.y+fy[i]};
            if(CheckInMap(next_node,H,W)&&map[next_node.x][next_node.y]=='.'){
                map[next_node.x][next_node.y]='#';
                q.push(next_node);
                count++;
            }
        }
    }
}

int main(){
    if(!freopen("D:\\CodingWorkPlace\\ayas_project\\MyWork\\12.21-BFS_1\\input_2","r",stdin)) return 0;
    int W,H;
    while(~scanf("%d%d",&H,&W)){
        getchar();
        int count=0;
        int start_x,start_y;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                scanf("%c",&map[i][j]);
                if(map[i][j]=='@'){
                    start_x=i;
                    start_y=j;
                }
            }
            getchar();
        }
        MyBfs(start_x,start_y,count,H,W);
        cout<<count;
    }
    return 0;
}