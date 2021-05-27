#include<iostream>
#include<vector>
void update(int *now, std::vector<int>* remain_list, std::vector<int>* diff_list) {
	while (!diff_list->empty()) {
		diff_list->pop_back();
	}
	for (auto i : *remain_list) {
		diff_list->push_back(abs(*now - i));
	}
}
int main() {
	int now=100;
	const int need_list[] = { 27,129,110,186,147,41,10,64,120 };
	int sum = 0;
	std::vector<int> remain_list;
	std::vector<int> diff_list;
	for (auto i : need_list) {
		remain_list.push_back(i);
	}

	while (!remain_list.empty()) {
		update(&now, &remain_list, &diff_list);
		auto i = diff_list.begin();
		for (auto j = i + 1; j < diff_list.end(); j++) {
			if (*j < *i) {
				i = j;
			}
		}
		if (remain_list.size()==1) {
			std::cout << *i << '=';
		}
		else {
			std::cout << *i << '+';
		}
		now = *(remain_list.begin() + (i - diff_list.begin()));
		sum += *i;
		remain_list.erase((remain_list.begin() + (i - diff_list.begin())));
		diff_list.erase(i);
		
		

	}
	std::cout << sum;
	return 0;
}