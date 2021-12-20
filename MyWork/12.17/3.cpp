#include<fstream>
#include<iostream>
#include<map>
#include<string>
//map[key]=value;
//时间复杂度O(logn)
using namespace std;
int main(){
    if(!freopen("D:\\CodingWorkPlace\\ayas_project\\MyWork\\12.17\\input_3","r",stdin)) return 0;
    int num_of_shop=0;
    while(~scanf("%d",&num_of_shop)){
        int num_of_day;
        map<string,int> shop;
        for(int i=0;i<num_of_shop;i++){
            char shop_name_buff[31];
            scanf("%s",shop_name_buff);
            shop.insert({shop_name_buff,0});//往map里面加入元素，可以用pair<string,int>(xxx),也可以直接用中括号括起来
        }
        cin>>num_of_day;
        for(int i=0;i<num_of_day;i++){
            for(int j=0;j<num_of_shop;j++){
                int price_value=0;
                char shop_name_buff[31];
                scanf("%d%s",&price_value,shop_name_buff);
                shop[shop_name_buff]+=price_value;
                map<string,int>::iterator it=shop.begin();
                int rank=1;
                for(;it!=shop.end();it++){
                    if(it->second>shop["memory"]){
                        rank++;
                    }
                }
                cout<<rank<<endl;
            }
            
        }
        shop.clear();

    }
    return 0;
}