#include<iostream>
#include<fstream>
#include<list>
using namespace std;
list<int> my_list;
int main(){
    if(!freopen("D:\\CodingWorkPlace\\ayas_project\\MyWork\\12.17\\input_1","r",stdin)) {cout<<"no input!"; return 0;}
    //����
    int n=0;
    while(~scanf("%d",&n)){
        my_list.clear();
        list<int>::iterator it;
        for(int i=1;i<=n;i++){
            my_list.push_back(i);
        }
        int k=2;
        while(my_list.size()>3){
            it=my_list.begin();
            int num_out=1;
            while(it!=my_list.end()){
                if(num_out++%k==0){//���������Լ���
                it=my_list.erase(it);//list.erase()����ɾ��Ŀ�����һ��������
                }else{
                it++;
                }
            }
            k==2?k=3:k=2;
        }
    }
    for(auto it:my_list){
        cout<<it<<endl;
    }
    system("pause");
    return 0;
}