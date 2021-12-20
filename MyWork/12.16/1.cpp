#include<vector>
#include<fstream>
#include<iostream>
using namespace std;
vector<int> table;
int main() {

	if (!freopen("D:\\CodingWorkPlace\\ayas_project\\MyWork\\12.16\\input_1.txt", "r", stdin)) return 0;
	int n, m;
    while(~scanf("%d%d",&n,&m)){
        table.clear();
        for(int i=0;i<2*n;i++) table.push_back(i);
        int pos=0;
        for(int i=0;i<n;i++){
            pos=(pos+m-1)%table.size();
            table.erase(table.begin()+pos);
        }
        int j=0;
        for(int i=0;i<2*n;i++){
            if(!(i%50)&&i) cout<<endl;
            if(i==table[j]&&j<table.size()){
                cout<<'G';
                j++;
            }
            else cout<<'B';
        }
        cout<<endl;
    }
    system("pause");
	return 0;
}