#include<iostream>
#include<fstream>

using namespace std;
int main(){
    int k;
    int n=0;
    if(!freopen("G:\\VSProjects\\ayas_project\\MyWork\\12.16\\input_3.txt","r",stdin)) return 0;
    while(~scanf("%d",&k)){
        double sum=0;
        int i=1;
        while(1){
            if(sum>k){
                cout<<i-1;
                break;
            }
            sum+=double(1)/double(i);
            i++;
        }
    }
    return 0;
}