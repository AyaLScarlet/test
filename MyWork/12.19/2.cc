#include<fstream>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int nums[5]={5,1,3,78,10};
    sort(nums,nums+5);
    do{
        for(int i=0;i<5;i++){
            cout<<nums[i]<<",";
        }
        cout<<endl;
    }while(next_permutation(nums,nums+5));
    return 0;

}