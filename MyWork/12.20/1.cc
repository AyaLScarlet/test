#include<iostream>
#include<fstream>

using namespace std;
void PrintSet(int n,int k){
    for(int i=0;i<(1<<n);i++){
        int count=0,kk=i;
        while(kk){
            kk=kk&(kk-1);
            count++;
        }
        if(count==k){
            for(int j=0;j<n;j++){
                if(i&(1<<j))//����һ�鼯�ϣ��������i��Ӧjλ����1�������j��������ģ���Ҫ��ʾ��Ԫ��λ�����꣩
                    cout<<j<<" ";

            }
            cout<<endl;
        }
    }
}
//while{}�ʺϡ�ȫ�¿�ʼ����ѭ����ÿ���ڿ�ͷ�����жϣ���0��ʼ��
//do{}while()�ʺ��Ѿ��г�ʼ״̬��ѭ����ÿ�����������жϣ���1��ʼ��
//       (2^n)<-->(1<<n)
int main(){
    if(!freopen("G:\\VSProjects\\ayas_project\\MyWork\\12.20\\input_1","r",stdin)) return 0;
    int n,k;
    while(~scanf("%d%d",&n,&k)){
        PrintSet(n,k);
    }
    return 0;
}