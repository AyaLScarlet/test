#include<fstream>
#include<iostream>

int total_count=0;
int my_data[]={0,1,2,3,4,5,6,7,8,9};
void MySwap(int& a, int& b){
    int temp=a;
    a=b;
    b=temp;
}
void Perm(int begin,int end){
    if(begin==end){
        total_count++;
    }else{
        for(int i=begin;i<=end;i++){
            MySwap(my_data[begin],my_data[i]);
            Perm(begin+1,end);
            MySwap(my_data[begin],my_data[i]);
        }
    }
}

using namespace std;
int main(){
    Perm(0,9);
    cout<<total_count;
    return 0;
}