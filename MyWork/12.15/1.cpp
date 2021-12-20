#include<bits/stdc++.h>
using namespace std;

void MySwapFunc(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void BubbleSort(vector<int>& nums) {
	for (int i = nums.size() - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (nums[j] > nums[j + 1])
				swap(nums[j], nums[j + 1]);
		}
	}
}
int main() {
	//将文件内容作为标准输入流
	if (!freopen("D:\\CodingWorkPlace\\ayas_project\\MyWork\\12.15\\input.txt", "r", stdin)) return 0;
	int n, m,buff;
	vector<int> nums;
	while (~scanf("%d %d", &n, &m)) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &buff);
			nums.push_back(buff);
		}
	}
	BubbleSort(nums);
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << endl;
	}
    system("pause");
	return 0;
}