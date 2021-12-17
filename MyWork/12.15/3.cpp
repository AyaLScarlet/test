#include<bits/stdc++.h>
using namespace std;

int main() {
	//将文件内容作为标准输入流
	if (!freopen("C:\\Users\\15756\\Desktop\\input.txt", "r", stdin)) return 0;
	int n, m,buff;
    int nums[100001];
    memset(nums,0,sizeof(nums));
	while (~scanf("%d %d", &n, &m)) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &buff);
			nums[buff]=1;
		}
	}
    for(int i=10000;i>=0;i--){
        if(m<=0) break;
        if(nums[i]==1){
            cout<<i<<endl;
            m--;
        }
    }
    system("pause");
	return 0;
}