#include<iostream> 
#include<string>
#include<stdlib.h>
using namespace std;
int main(){
	string store="������������ﻨ��������ﴺ����Ȼ�������Ƕ�����֪������ʩչ�����޵�ħ�����Ƚ�����ʹ����������������������������������������������������ɳɳ�Ĵ���������������������С�������������Ĵӵ���ð������С�ɵ�ͷ��������һ���޼ʵĲ�ԭ������Ρ��Ĵ�ɽ������С�ӱ߳�������������ĸ�ɽҰ���ղ������紵������ʫ���ѵ����Ƕ�����õĳ�������������ľ������������������������Ŵ���Ĺ���ҲŤ����������ȶ��˵�ͷ������װ��һ��������������˿�е�ʫ�����ÿ������ֳ��������������ò������Ư����ͷ��ӭ�������Ͳ˻�Ҳ��ӭ�Ӵ�����ӭ�����Ͳ˻�����Ұ������һƬ�ƲӲӶ���һ����ͯ����׷�Ƶ�����˻��޴�Ѱ��ʫ�����ÿ���˵�������ж�ô��ƻ�����滨���ӻ����ǰ�ɫ�ľͺ�������һ��ѩ���еĶ�������ɰ�ɫ��СҰ����������ͷ׵��к�ĻƵķ۵��ϵĺ���ƻ�Ƶ��ƽ�۵���ʯһ�����³�ǧ����ĺ����ڻ�����ů�Ļ�����ũ�񲮲������춼��ô��������������˭֪���в������������һ��֮�����ڴ�һ��֮�����ڴ���ʫ�亢����һ������ͻ�ȥѧϰ������Ϊ��׳��Ŭ���ϴ�ͽ�˱�����Ϊ�ڷ���֪��ѧ����׷��ڶ�����������û�к��Ӿ���������֮�������������ǴӴ������̰�";//1 2  4......λ��
	int topLenth,backLenth;
	string back,top,article;
	cout<<"������ǰ׺�ʺ�׺�ʳ����Ѿ���ʼ�ʣ�";
	cin>>topLenth>>backLenth>>top;
	cout<<top; 
    string randomStr,word;//����һ���ַ�����ź�׺�� ,word��ŵ������� 
	int Position=0,position=0,amout=0; 
	while(Position=store.find(top)!=string::npos){
	//cout<<"top="<<top<<endl;
    	while((position=store.find(top,position))!=string::npos){//������з��ϵĺ�׺�� 
    		for(int j=0;j<backLenth*2;j=j+2){ 
    			word=store.substr(position+4+j,2);//��ú�׺�ʵ�һ������ 
    			//cout<<word<<endl; 
    			back.append(word); //���һ����׺�� 
			}
			//cout<<"back="<<back<<endl;
    		randomStr+=back;
    		back=""; 
        	position++;
        	amout++; 
    	}//cout<<"ran66="<<randomStr<<endl;
    	//cout<<"amout="<<amout<<endl;
		int random=rand()%(amout*2*backLenth);//������randomStr�±��� 
    	while(random%(2*backLenth)!=0){
    		random--;//���ﱬ��Χ�� 
		}
		//cout<<"random="<<random<<endl;//����±�Ϊ�����׺�ʵ�һ�ֽڵ������ 
		back=randomStr.substr(random,backLenth*2) ;
		cout<<back; 
		//article+=back;
		position=amout=0;
		int subscript=store.find(back);
		back="";
		randomStr="";//��ʼ��back,randomStr�ٴ�ѭ�� 
		top=store.substr(subscript+backLenth*2-topLenth*2,topLenth*2);
		//if(article.size()>=1000){
			//break;
		//}
	}
	//cout<<article<<endl; 
}
