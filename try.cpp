#include<iostream> 
#include<string>
#include<stdlib.h>
using namespace std;
int main(){
	string store="今天在这个鸟语花香的世界里春天悄然而至我们都还不知道它就施展了无限的魔法他先将春风和春雨叫了起来让她们滋润万物生春雨淅淅沥沥的下了起来春风沙沙的吹帮助春姑娘滋润了万物小草慢慢的慢慢的从地里冒出了它小巧的头他长满了一望无际的草原长满了巍峨的大山长满的小河边长满了连绵起伏的高山野火烧不尽春风吹有生的诗句难道不是对它最好的称赞吗接着醒来的就是柳树姑娘了柳树姑娘随着春风的鼓舞也扭动了它那婀娜多姿的头发碧玉装成一树高万条垂下绿丝绦的诗句正好可以体现出来柳树姑娘的美貌和它那漂亮的头发迎春花和油菜花也来迎接春天了迎春花油菜花在田野里总是一片黄灿灿独霸一方儿童急走追黄蝶飞入菜花无处寻的诗句正好可以说明他们有多么黄苹果花梨花李子花都是白色的就好像下了一场雪所有的东西都变成白色了小野花总是五彩缤纷的有红的黄的粉的紫的红的似火黄的似金粉的像宝石一样花下成千上万的蝴蝶在花儿温暖的怀抱里农民伯伯们天天都这么辛苦让我想起了谁知盘中餐粒粒皆辛苦和一年之计在于春一日之计在于春的诗句孩子们一到春天就会去学习读书因为少壮不努力老大徒伤悲还因为黑发不知勤学早白首方悔读书迟世界如果没有孩子就少了三分之二的美丽让我们从春天启程吧";//1 2  4......位置
	int topLenth,backLenth;
	string back,top,article;
	cout<<"请输入前缀词后缀词长度已经开始词：";
	cin>>topLenth>>backLenth>>top;
	cout<<top; 
    string randomStr,word;//设置一个字符串存放后缀词 ,word存放单个汉字 
	int Position=0,position=0,amout=0; 
	while(Position=store.find(top)!=string::npos){
	//cout<<"top="<<top<<endl;
    	while((position=store.find(top,position))!=string::npos){//获得所有符合的后缀词 
    		for(int j=0;j<backLenth*2;j=j+2){ 
    			word=store.substr(position+4+j,2);//获得后缀词的一个汉字 
    			//cout<<word<<endl; 
    			back.append(word); //获得一个后缀词 
			}
			//cout<<"back="<<back<<endl;
    		randomStr+=back;
    		back=""; 
        	position++;
        	amout++; 
    	}//cout<<"ran66="<<randomStr<<endl;
    	//cout<<"amout="<<amout<<endl;
		int random=rand()%(amout*2*backLenth);//随机获得randomStr下标数 
    	while(random%(2*backLenth)!=0){
    		random--;//这里爆范围了 
		}
		//cout<<"random="<<random<<endl;//获得下标为任意后缀词第一字节的随机数 
		back=randomStr.substr(random,backLenth*2) ;
		cout<<back; 
		//article+=back;
		position=amout=0;
		int subscript=store.find(back);
		back="";
		randomStr="";//初始化back,randomStr再次循环 
		top=store.substr(subscript+backLenth*2-topLenth*2,topLenth*2);
		//if(article.size()>=1000){
			//break;
		//}
	}
	//cout<<article<<endl; 
}
