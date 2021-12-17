#include<bits/stdc++.h>
using namespace std;

void QuickSort(vector<int>& nums,int l, int r) {
    if(l>=r) return;
    int i=l,j=r;
    while(i<j){
        //nums[l]Ϊpivot
        //�ȶ�j���ȶ��ұ�,��Ϊֻ������ֵ��ʱ�����i++��һ�������У�
        //������ֵһ��������������ʵ���Ͽ�������Ҫ������
        while(i<j&&nums[j]>=nums[l]) j--;
        while(i<j&&nums[i]<=nums[l]) i++;
        swap(nums[i],nums[j]);
    }
    swap(nums[l],nums[i]);
    QuickSort(nums,l,i-1);
    QuickSort(nums,i+1,r);
}
int main() {
	//���ļ�������Ϊ��׼������
	if (!freopen("C:\\Users\\15756\\Desktop\\input.txt", "r", stdin)) return 0;
	int n, m,buff;
	vector<int> nums;
	while (~scanf("%d %d", &n, &m)) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &buff);
			nums.push_back(buff);
		}
	}
    if(nums.empty()) return 0;
	QuickSort(nums,0,n-1);
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << endl;
	}
    system("pause");
	return 0;
}