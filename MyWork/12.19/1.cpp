#include<iostream>
#include<fstream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    if(!freopen("G:\\VSProjects\\ayas_project\\MyWork\\12.19\\input_1","r",stdin)) return 0;
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        int a[1001];
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++){
            a[i]=i;
        }
        int count=1;
        while(count<m){
            next_permutation(a+1,a+n+1);
            count++;
        }
        for(int i=1;i<=n;i++){
            cout<<a[i];
        }
    }
    return 0;
}