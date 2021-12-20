#include<iostream>
#include<fstream>
#include<set>
#include<string>
#include<string.h>
using namespace std;
set<string> my_set_A,my_set_B;
int main(){
    if(!freopen("D:\\CodingWorkPlace\\ayas_project\\MyWork\\12.17\\input_2","r",stdin)) {cout<<"no input"<<endl; return 0;}
    int n;
    while(~scanf("%d",&n)&&n){
        char s1[10],s2[10];
        memset(s1,'0',10);//memset可以重置char*
        memset(s2,'0',10);
        for(int i=0;i<n;i++){
            scanf("%s %s",&s1,&s2);
            my_set_A.insert(s1);//char* 可以被当成string处理
            my_set_A.insert(s2);
            my_set_B.insert(s2);
        }
        if(my_set_A.size()-my_set_B.size()==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}