#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
//���ַ������ʱ�򣬾�β��'/n'
int main(){
    if(!freopen("D:\\CodingWorkPlace\\ayas_project\\MyWork\\12.20\\input_3","r",stdin)) return 0;
    int R,C;
    while(~scanf("%d%d",&R,&C)){
        // char map[R][C];
        // for(int i=0;i<R;i++){
        //     scanf("%s",map[i]);
        // }
        getchar();//��Ϊ��һ��scanf�������ַ��������и����з���Ҫ����
        vector<vector<char>> map;
        for(int i=0;i<R;i++){
            vector<char> map_buff;
            for(int j=0;j<C;j++){
                char temp;
                scanf("%c",&temp);
                map_buff.push_back(temp);
            }
            getchar();//ͬ��
            map.push_back(map_buff);
        }
        getchar();
    }
    return 0;

}