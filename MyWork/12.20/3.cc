#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
//逐字符处理的时候，句尾的'/n'
int main(){
    if(!freopen("D:\\CodingWorkPlace\\ayas_project\\MyWork\\12.20\\input_3","r",stdin)) return 0;
    int R,C;
    while(~scanf("%d%d",&R,&C)){
        // char map[R][C];
        // for(int i=0;i<R;i++){
        //     scanf("%s",map[i]);
        // }
        getchar();//因为下一个scanf读的是字符，这里有个换行符需要读掉
        vector<vector<char>> map;
        for(int i=0;i<R;i++){
            vector<char> map_buff;
            for(int j=0;j<C;j++){
                char temp;
                scanf("%c",&temp);
                map_buff.push_back(temp);
            }
            getchar();//同理
            map.push_back(map_buff);
        }
        getchar();
    }
    return 0;

}