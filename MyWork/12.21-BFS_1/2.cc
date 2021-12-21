#include<iostream>
#include<fstream>
#include<queue>
using namespace std;
char map[1000][1000];//char���͵�map����ȫ�־�̬������洢��������з�������.char* a[]  ��char** a������
const int fx[]={-1,0,1,0};
const int fy[]={0,-1,0,1};

//�����xy�����겻һ������������--------------

//����������������ÿ����i=0~3������������Ǵ��Ͽ�ʼ��ʱ��תһȦ
//ͼ���DFS�ݹ��ʱ���������ж���һ��Ҫ��Ҫ��
//��Ҫ��ȡ�������жϣ����������Ҫ��ֱ��return����ģ��
//mainǰ���˳��->const��ȫ�ֳ���->�������ṹ��->main
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