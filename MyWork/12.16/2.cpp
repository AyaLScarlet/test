#include<iostream>
#include<fstream>
#include<stack>
using namespace std;
stack<char> my_stack;
int main(){
    if(!freopen("D:\\CodingWorkPlace\\ayas_project\\MyWork\\12.16\\input_2.txt","r",stdin)) return 0;
    char buff;
    while(~scanf("%c",&buff)){
        my_stack.push(buff);
    }
    int count=my_stack.size();
    for(int i=0;i<count;i++){
        buff=my_stack.top();
        my_stack.pop();
        cout<<buff;
    }
    system("pause");
    return 0;
}