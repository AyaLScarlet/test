#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef struct{
    char name[10];
    int score;
}Stu;
bool ScoreCompare(const Stu& stu1,const Stu& stu2){
    return stu1.score<stu2.score;
}
int main(){
    vector<Stu> my_class;
    Stu stu_buff1={"a",52};
    Stu stu_buff2={"b",24};
    Stu stu_buff3={"c",23};
    Stu stu_buff4={"d",41};
    Stu stu_buff5={"e",10};
    Stu stu_buff6={"f",99};
    my_class.push_back(stu_buff1);
    my_class.push_back(stu_buff2);
    my_class.push_back(stu_buff3);
    my_class.push_back(stu_buff4);
    my_class.push_back(stu_buff5);
    my_class.push_back(stu_buff6);
    sort(my_class.begin(),my_class.end(),ScoreCompare);

    return 0;
}