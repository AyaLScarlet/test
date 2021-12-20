#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    if(!freopen("G:\\VSProjects\\ayas_project\\MyWork\\12.20\\input_3","r",stdin)) return 0;
    int R,C;
    while(~scanf("%d%d",&R,&C)){
        char map[R][C+1];
        for(int i=0;i<R;i++){
            scanf("%s",map[i]);
        }
        getchar();
    }
    return 0;

}