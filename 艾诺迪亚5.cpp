#include<iostream>
#include<cstdio>
#include<iomanip>
#include<conio.h>
#include<cstring>
#include<windows.h>
#include<ctime>
#include<map>
using namespace std;
map<string,int> AMP;
map<string,int> SMP;
string s;
int qsqs[6001];
int uplevel=100;
int TD;
int assTD[2];
bool Is_first[12];
bool Can_go[12];
bool Can_into=true;
bool Is_end;
bool Is_up;
bool Is_change;
bool Wend;
bool Is_save;
string name;
string password="ZTLTQL";
int Wpass;

int MP,maxMP,ATK,fang,LV=1,G=0,mu=50,gang=0,sheng=20,xilian=0,chou=500;
float baoji=2.5;
int stop_time=30;
long long jinbi,HP,maxHP,EXP,maxEXP;

int ch4;
int rate;
string Tm[5]={"2^31-1=?","101-102=1  �ƶ�һ�����֣�ʹ�õ�ʽ�������ƶ���������___","���ȥ���������˵���������ľ˵ķ��Ӹ������˵����ȥ�߾˼�͵�˰˾˷��ھž˵ı��չ����ʮ�˵�Ǯ��   ˭��С͵��������˭�ģ�����n��ʾn�ˣ��м䲻�ÿ��У�","10��24������˭�Ľ��գ�    1,ҽ��  2,����ʦ  3,����Գ  4,��ѧ��","������ѧ�Ҷ���ͼ��Ĺ־���������а����Ŷ���ͼ����ô���˾��ȣ�������ʵ�ؼ�¼���������ĵ�·���ϵ۸����ͯ��ռ����֮һ���ֹ�ʮ����֮һ�����޳������ٹ��߷�֮һ��ȼ����̵���������֮����͹��ӣ������ٵ�����ܰ������������丸֮�룬���������Ĺ������ֻ�������۵��о�ȥ�ֲ����ֹ����꣬��Ҳ��������������;       ���ʶ���ͼһ�����˶�����"};
int answer[5]={2147483647,2,63,3,84};

int bag=0,bag1=0,bag2=0;
int choujin[10]={1000,2000,3000,4000,5500,6500,7500,9000,100,10000};
int chouG[10]={45,105,195,265,385,525,695,845,1055,1855};

string monster[22]={"SB","2B","��԰����","��԰��ħ","�����","���������","2B","SB","�粼��ɱ��","�粼��ʥ��ʿ","����","Ѫɫ����","����սʿ","�����սʿ","�����λ�","�����ͷ��","ԩ��","������","����","����Ů��","ʯ�����","����ħ��"};
int monsterjinbi[22]={0,0,156,222,117,158,0,0,157,209,175,239,206,282,221,308,263,347,293,379,500,99999};
int monsterHP[22]={0,0,750,1050,1050,1450,0,0,1200,2050,1750,2550,2150,3050,2650,3450,3250,3950,4550,5650,7350,72950};
int monsterATK[22]={0,0,245,275,275,285,0,0,285,325,315,345,335,385,375,425,415,485,545,825,935,1355};
int monsterEXP[22]={0,0,20,45,35,65,60,0,0,90,90,120,125,180,240,380,450,485,515,585,645,0x3f3f3f3f};
string destin[12]={"SB","���ִ�","���˻�԰","���⺣̲","˪�粿��","����ɭ��","����֮��","����ɳĮ","��������","��������","��û�Ĵ�½","ʯ���鶴"};
int diffLV[12]={0,0,1,2,0,3,5,5,7,8,10,0x7f};

string rand_arms[3]={"�����Ҷ�֮��","�ƽ�","ħ��ʯ"};
int rand_armsxing[3]={1500,780,888};
string legend_arms[4]={"����","�ټ�","��ʴ","����"};
int la_ATK[4]={2800,2650,3200,3700};

string ke[5]= {"���*1000","���*2000","���*3000","���*4000","���*5000"};
string qie[5]= {"����ҩˮ","Ԫ���ָ�ҩˮ","�ش�����ҩˮ","�ش�ħ��ҩˮ","Сƿ����ҩˮ"};
string ka[5]= {"������","ħ����","����","����̽�","��ΪP30"};
int kaatk[5]= {380,450,270,400,1000};
string de[5]= {"��������","��Ѫ��","�Ű����ؼ�","��Ƥ��","������"};
int defang[5]= {250,350,550,450,900};
string ge[5]= {"�̱�ʯ","��֮����","����*20","��ʥ��ˮ��","����ʯ"};
string sai[5]= {"������*100","������*200","������*300","������*400","������*1000"};
string xiguan[5]= {"�ڱ�ʺ","�ڶ�ʺ","�ٽ�ֺ","��������","ҧ��ָ"};

string juese;

string diaoluo1[4]= {"������","��ӧǹ","�޽�","���鷨��"};
int diaoluo1ATK[4]= {129,167,225,285};
string yaoshui[10]= {"00","00","00","00","00","00","00","00","00","00"},wuqi[10]= {"00","00","00","00","00","00","00","00","00","00"};
string daoju[10]= {"00","00","00","00","00","00","00","00","00","00"};
int xinneng[10],wuqiLV[10],yaoshuixiao[10];
string zhuangbeiwuqi="00",zhuangbeifangju="00";
int zhuangbeia=0,zhuangbeif=0;
bool Is_pct[10];
bool pct;
bool a_f[10];

string mission[10]={"ǰ������������&�鿴���߽��ȡ��鿴��һ����������","ǰ��˪�粿���볤�Ͻ�̸","���ܾ���ħ������������"};
int reward[3]={100,200,0x3f3f3f};
string skill[4][4]={"����ͻϮ","����һ��","�Ͽ�˺��ն","ս����",
					 "ʥ��ն","Ȭ��֮��","��֮����","��������",
					 "��ز�¶","��Ӱһ��","��֮��Ԩ","��������",
					 "�������","ʯħ�ٻ�","��������","ħ֮����",
					 };
int skillxn[4][4]={275,322,372,35,
					227,375,300,35,
					0,251,348,30,
					266,0,358,40,
					};
int needJB[4][4]={750,825,1030,920,
				  765,825,805,915,
				  770,800,1020,930,
				  795,1100,1000,995,
				  };
float needMP[4][4]={35,46,55,30,
				    38,50,60,30,
				    30,35,40,35,
				    40,55,70,40,
				    };
float reduceMP[4][4]={0.1,0.1,0.2,0.1,
					  0.1,0.1,0.1,0.2,
					  0.2,0.1,0.1,0.2,
					  0.2,0.1,0.1,0.2,
					  };
bool Is_xl[4];
int choosejn;

int color[6][2]={{14,9},{10,13},{12,15},{9,8},{7,14},{3,14}};

string map2[20]= {"########################",
                  "###O # #   #   #   #   #",
                  "##  #  # # # # # # # # #",
                  "#  #  #  # # # #g# # # #",
                  "# #  #g #  # # # # # # #",
                  "#   #  #  ## # # # # #g#",
                  "##    #g # g #   #   # #",
                  "#g # #  #  ## ### # ## #",
                  "## #   #  #            #",
                  "#  # # # #  ############",
                  "## # # # #B            #",
                  "#  # #g# #  # ### #### #",
                  "## # # #  #  #g  # ? # #",
                  "# g# #  #  # # # # # # #",
                  "#?#   #  # # # # # # # #",
                  "# g #  #   #   #   #S  #",
                  "########################",
                 };
string map3[20]= {"########################",
                  "#  #   #  ?#   #   #S  #",
                  "##   # #g# # # # # # # #",
                  "# g# # # # # # # # # # #",
                  "#?#  # # # # # # # # # #",
                  "##  #  # #g# # # # # # #",
                  "# g#     # # #g# # # # #",
                  "# #  #     # # #g#g#B# #",
                  "# #g#  #  ## # # # # # #",
                  "# # # #  #   # # # # # #",
                  "# # # # #    # # # # # #",
                  "# # #g# # # #  # #g# # #",
                  "# #g# # # #  # # # # # #",
                  "# # # # # # #?   #   # #",
                  "# # # # #   ##### #### #",
                  "#O#   #   #        g   #",
                  "########################",
                 };
string map4[20]= {"########################",
				  "#          ######  M   #",
				  "# ###### ##########    #",
				  "# ##       #      # #  #",
				  "# N  ##### # ###    ## #",
				  "##  #####    ###### #  #",
			      "## #  H##        ##### #",
				  "## #   ##    ### ##### #",
				  "## # ##   L        #   #",
				  "##   ###      #### # # #",
			      "#  ####        ### # # #",
				  "##  F### ######### # # #",
				  "##   ### #     ### # # #",
				  "#        # ###  ##   # #",
				  "## ######  ########### #",
				  "##      O  ##          #",
				  "##########S#############",
				   };   
string map5[20]= {"########################",
                  "# # # # # # # #S       #",
                  "#         g    ####### #",
                  "# ############B        #",
                  "#g            #### ###?#",
                  "########## ##       g  #",
                  "#       g    ######### #",
                  "# #### #####B       g  #",
                  "#   g       ############",
                  "######### #    g       #",
                  "#   g      g########## #",
                  "# ## # # ##            #",
                  "# # # # # # ############",
                  "# #            g       #",
                  "# ####### ############ #",
                  "#O         g          g#",
                  "########################",
                 };
string map6[20]= {"########################",
                  "#          #        # ?#",
                  "#g########  #  # # #  ##",
                  "# #      # # #  g# # # #",
                  "#  ##g## # #   ##  #g  #",
                  "# # #    # # # ## #  # #",
                  "# # # # ## g## #    #  #",
                  "# #   #   # #  #g#  # ##",
                  "# # #g#g# # # #  # #?  #",
                  "# # # #  ## # # #  # # #",
                  "#  ## # #     # ##g# # #",
                  "# #   # # #  #   # #  ##",
                  "# # # # #g  #  # #  #  #",
                  "# ##  # # ##  # g  #   #",
                  "#   # #   #  #  # #### #",
                  "#O#   # ##  #  #  #S  B#",
                  "########################",
                 };
string map7[20]= {"########################",
                  "#O     #    #   #      #",
                  "###### # ###  #### ### #",
                  "#      #   #     #   # #",
                  "###### # ####### # ### #",
                  "#   g  #      #  #g  # #",
                  "# ####   #### # #### # #",
                  "#      #  #   #    # # #",
                  "###### #  # ###### # # #",
                  "#?  g  # ##g    #? # # #",
                  "###### #   #### g  # # #",
                  "#  #   #  #   #   ## #B#",
                  "#  # ### # #  # #  # # #",
                  "# ##   # # # ## ## # # #",
                  "#g   # # # #  #g#  # # #",
                  "# #  #          #    #S#",
                  "########################",
                 };
string map8[20]= {"########################",
                  "#O#? g#   ###    #S    #",
                  "#  ## # # ### ## ### B #",
                  "##      #      # #     #",
                  "#### ####g###### # ### #",
                  "#  # ## # # ##   # g # #",
                  "#   g## #   ## #####   #",
                  "# ##### ### g#     # ###",
                  "#    g     # # ### #  ##",
                  "##### ######   #   ## ##",
                  "##    #  # ##### ##g   #",
                  "## #### ##       #  ####",
                  "##    # ## #g# # ##   ##",
                  "##### #    # # # ## # ##",
                  "#  g     ### # #    #g##",
                  "#?#####      ######   ##",
                  "########################",
                 };
string map9[20]= {"########################",
                  "#O ####g  ?#          ##",
                  "## #  # ###    ### ## ##",
                  "#  #      # ## g   ## ##",
                  "# ## # ## # ######### ##",
                  "# g  #### #  #   #S## ##",
                  "## ####   ## #g# #  # ##",
                  "## #  # # ##   # ## # ##",
                  "#g ##   #  ##### ##  B##",
                  "# #####   ##g  #   #####",
                  "#  g  # #### # # # #   #",
                  "# # # # ##   # # #   # #",
                  "# # #g  ## ###   ## ##g#",
                  "# #  ##### # ## ### ## #",
                  "#  #      g#       #?  #",
                  "#  ##    ####  #  ###  #",
                  "########################",
                 };
string map10[20]= {"##########S#############",
                   "#         B       # g  #",
                   "#  g         g         #",
                   "#                 ### ##",
                   "####### ######  ###g# # ",
                   "#  g  # #    #    # # # ",
                   "#     # # g   B  ## g # ",
                   "#####   ######  ###   # ",
                   "#g   #  #    #   ## # # ",
                   "#    #       #   g# # # ",
                   "####    ####   ## #g### ",
                   "#g #  # #         #   # ",
                   "##    ###  ##   ###?#?# ",
                   "##### ##   ### ######## ",
                   "# # # #  # #         ## ",
                   "#O       #g#  #       # ",
                   "####################### ",
                 };
void guangbiao(int x,int y) {
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void tiaose(int mn) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),mn);
	//  1������ɫ    2����ɫ    3��ǳ��ɫ    4������ɫ    5������ɫ    6����ɫ
	//  7 ������ɫ     8����ɫ    9����ɫ     10����ɫ     11������ɫ      12�����
	//  13�����ɫ     14����ɫ     15����ɫ
}
bool check() {
	for(int i=0; i<=bag2; i++) {
		if(daoju[i]!="00") {
			return true;
		}
	}
	return false;
}
void Clear() {
	guangbiao(1,5);
	for(int i=1; i<=2000; i++) {
		cout<<" ";
	}
}
void say(string s)
{
	for(int i=0;i<=s.size()-1;i++)
	{
		cout<<s[i];
		Sleep(25);
	}
}
void qsay(string s)
{
	for(int i=0;i<=s.size()-1;i++)
	{
		cout<<s[i];
		Sleep(10);
	}
}
void Slowsay(string s)
{
	for(int i=0;i<=s.size()-1;i++)
	{
		cout<<s[i];
		Sleep(stop_time);
	}
}
void HideCursor(int n)
{
	if(Is_change)
	{
		return ;
	}
	CONSOLE_CURSOR_INFO cursor_info={1,n};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
void ShakeWindow(int move){
	int SHAKE=120+move;
    RECT rect; 
    HWND hwnd=GetForegroundWindow();
    GetWindowRect(hwnd,&rect);
    MoveWindow(hwnd,rect.left+SHAKE,rect.top,rect.right-rect.left,rect.bottom-rect.top,TRUE);//���� 
    Sleep(25);
    MoveWindow(hwnd,rect.left+SHAKE,rect.top-SHAKE,rect.right-rect.left,rect.bottom-rect.top,TRUE);//���� 
    Sleep(25);
    MoveWindow(hwnd,rect.left,rect.top-SHAKE,rect.right-rect.left,rect.bottom-rect.top,TRUE); 
    Sleep(25);
    MoveWindow(hwnd,rect.left,rect.top,rect.right-rect.left,rect.bottom-rect.top,TRUE);
}
void Read()
{
	system("cls");
	Slowsay("�����ļ������ҵ���Inotia 5.txt��������\n");
	Sleep(1000);
	Slowsay("�����������е����ݺ󣬽�����ȫ���������(�����������Ķ���)\n");
	getline(cin,name);
	cin>>juese;
	cin>>HP>>maxHP;
	cin>>MP>>maxMP;
	cin>>ATK;
	cin>>fang;
	cin>>EXP>>maxEXP;
	cin>>LV;
	cin>>jinbi;
	cin>>G;
	cin>>choosejn;
	for(int i=1;i<=11;i++)
	{
		cin>>Is_first[i];
	}
	for(int i=1;i<=11;i++)
	{
		cin>>Can_go[i];
	}
	cin>>Can_into;
	cin>>uplevel;
	cin>>rate;
	cin>>TD;
	cin>>assTD[0]>>assTD[1];
	cin>>bag>>bag1>>bag2;
	for(int i=0;i<=9;i++)
	{
		cin>>yaoshui[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>wuqi[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>xinneng[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>wuqiLV[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>a_f[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>Is_pct[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>daoju[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>yaoshui[i];
	}
	for(int i=0;i<=9;i++)
	{
		cin>>yaoshuixiao[i];
	}
	for(int i=0;i<=3;i++)
	{
		cin>>Is_xl[i];
	}
	cin>>zhuangbeiwuqi>>zhuangbeia;
	cin>>zhuangbeifangju>>zhuangbeif;
	cin>>pct;
	cin>>mu>>sheng>>gang;
	cin>>xilian;
	cin>>chou;
	Sleep(1500);
	system("cls");
	Slowsay("��ȡ�浵�ɹ���\n");
	Sleep(1000);
}
void POF()
{
	freopen("Inotia 5.txt","w",stdout);
	cout<<name<<endl;
	cout<<juese<<endl;
	cout<<HP<<endl;
	cout<<maxHP<<endl;
	cout<<MP<<endl;
	cout<<maxMP<<endl;
	cout<<ATK<<endl;
	cout<<fang<<endl;
	cout<<EXP<<endl;
	cout<<maxEXP<<endl;
	cout<<LV<<endl;
	cout<<jinbi<<endl;
	cout<<G<<endl;
	cout<<choosejn<<endl;
	for(int i=1;i<=11;i++)
	{
		cout<<Is_first[i]<<endl;
	}
	for(int i=1;i<=11;i++)
	{
		cout<<Can_go[i]<<endl;
	}
	cout<<Can_into<<endl;
	cout<<uplevel<<endl;
	cout<<rate<<endl;
	cout<<TD<<endl;
	cout<<assTD[0]<<endl;
	cout<<assTD[1]<<endl;
	cout<<bag<<endl;
	cout<<bag1<<endl;
	cout<<bag2<<endl;
	for(int i=0;i<=9;i++)
	{
		cout<<yaoshui[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<wuqi[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<xinneng[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<wuqiLV[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<a_f[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<Is_pct[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<daoju[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<yaoshui[i]<<endl;
	}
	for(int i=0;i<=9;i++)
	{
		cout<<yaoshuixiao[i]<<endl;
	}
	for(int i=0;i<=3;i++)
	{
		cout<<Is_xl[i]<<endl;
	}
	cout<<zhuangbeiwuqi<<endl;
	cout<<zhuangbeia<<endl;
	cout<<zhuangbeifangju<<endl;
	cout<<zhuangbeif<<endl;
	cout<<pct<<endl;
	cout<<mu<<endl;
	cout<<sheng<<endl;
	cout<<gang<<endl;
	cout<<xilian<<endl;
	cout<<chou<<endl;
}
void draw(string map[30],int k,int c) {
	tiaose(color[c][0]);
	cout<<"==============================\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"||                          ||\n";
	cout<<"==============================\n\n\n";
	tiaose(15);
	cout<<"���ڵأ�"<<destin[k]<<endl;
	cout<<"�Ѷȵȼ���";
	if(diffLV[k]>=1&&diffLV[k]<=3)
	{
		tiaose(10);
	}
	if(diffLV[k]>=4&&diffLV[k]<=5)
	{
		tiaose(14);
	}
	if(diffLV[k]>=6&&diffLV[k]<=7)
	{
		tiaose(4);
	}
	if(diffLV[k]>=8&&diffLV[k]<=10)
	{
		tiaose(12);
	}
	cout<<diffLV[k]<<endl;
	tiaose(color[c][1]);
	guangbiao(3,2);
	for(int i=0;i<=16;i++)
	{
		for(int j=0;j<=23;j++)
		{
			if(map[i][j]=='O')
			{
				tiaose(15);
				cout<<'O';
				tiaose(color[c][1]);
			}
			else
			{
				cout<<map[i][j];
			}
		}
		guangbiao(3,i+3);
	}
	tiaose(15);
}
void jindu(int sum) {
	system("cls");
	time_t now=time(0);
    char* dt=ctime(&now);
    HideCursor(0);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout<<"+============================================+"<<endl;
	cout<<"|                                            |"<<endl;
	cout<<"+============================================+"<<endl;
	guangbiao(1,1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12|1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	for(int i=0;i<22;i++)
	{
		Sleep(sum-5);
		cout<<"��";
	}
	tiaose(14);
	cout<<endl;
	cout<<endl;
	cout<<"��ŵ����5������ħ���ľ���       "<<dt;
	cout<<endl;
	cout<<endl;
	HideCursor(1);
}
void The_end(int ch15) {
	getline(cin,s);
	HideCursor(0);
	Is_end=true;
	stop_time+=15;
	Sleep(3000);
	system("cls");
	if(ch15==1) {
		getline(cin,s);
		system("cls");
		Slowsay("������������\n");
		Slowsay("������������\n");
		Slowsay("������������\n");
		Sleep(6000);
		system("cls");
		Slowsay("�����º�\n");
		getline(cin,s);
		system("cls");
		Slowsay("ԭ˪�粿�䣬��ʿ��Ĺǰ����\n");
		getline(cin,s);
		Slowsay("���Ͻ�һ��õ����������м�һ��Ĺ���ϣ��ߵ���һ��");
		getline(cin,s);
		Slowsay("���Ĺ����д�ţ������ﰲϢ�ţ��������¸ҡ��ɾ���Ӣ�ۡ���");
		Slowsay(name);
		Slowsay("����Ԫǰ4997992������Ԫǰ4998014������22�ꡱ\n");
		getline(cin,s);
		Slowsay("��");
		Slowsay(name);
		Slowsay("�����ǻ��������ˡ�");
		Sleep(1000);
		getline(cin,s);
		system("cls");
		Slowsay("���ܱ�Ǹ������û�ܵ�һʱ����������ҩ������Ϊ�㣬����û��ʧȥ����ϣ��\n");
		Sleep(1500);
		Slowsay("˪�粿�����������������İ������������һ�ֻ���ҩˮ�������ž޴����������ʹ������ӱ������ˣ�Ҳ����������������������");
		getline(cin,s);
		system("cls");
		Slowsay("��ɱ��ʣ��Ĺ��޸�����˵�ˣ��������������ھ��ո��˱����Ե�����\n");
		getline(cin,s);
		system("cls");
		Slowsay("�ţ��������������ѫ�£��¸ҵ�Ӣ�ۣ�����ľ��ǣ����缶�Ĵ��������Ҿͷ������\n");
		getline(cin,s);
		Slowsay("��������\n");
		Sleep(1000);
		Slowsay("����˵�ľ���ô���ˣ��Ժ��п��������㣬�ټ�\n");
		Sleep(1000);
		getline(cin,s);
		Sleep(1000);
		system("cls");
	}
	if(ch15==2) {
		system("cls");
		Sleep(1500);
		system("cls");
		Sleep(3500);
		Slowsay("��ʷ�Ѿ���ȥ��Ӣ�۲�������\n");
		Sleep(2000);
		system("cls");
		Slowsay("��");
		Slowsay(name);
		Slowsay("�����ϡ�SuperHunterһ������ʱ�������Ѿ��ָ��˺�ƽ\n");
		Sleep(1000);
		Slowsay("���ǣ�����û����֪�����Ǹ���Щʲô\n");
		Sleep(2000);
		system("cls");
		Slowsay("˪�粿�����Щ���յ�������һ�𻶺��ţ���ף������֮���׵�ʤ����");
		Sleep(1000);
		Slowsay("Ȼ��������������֪������ô���յ�\n");
		Sleep(3000);
		system("cls");
		Slowsay("���ִ��ڣ������˾�Υ�Ļ�Ц����\n");
		Sleep(2000);
		system("cls");
		Slowsay("���类�Ʒ�����ǹ�����١���Ҳû����ν�Ĺ���֮�֣������������һ��С��ׯ���������Э����������ָ����������ǰ��ƽ��\n");
		Sleep(2000);
		system("cls");
		Sleep(2000);
		Slowsay("���ǣ���ĳЩ�������,���µ���һ˿���������ˣ�������Զ���������ǡ���\n");
		Sleep(3000);
	}
	if(ch15==3) {
		tiaose(15);
		Sleep(2000);
		stop_time=55;
		Slowsay("��������\n");
		Slowsay("��������\n");
		Sleep(2000);
		system("cls");
		Slowsay("���ҿ�������˵���Ǹ�����ˡ�����\n");
		Sleep(2000);
		system("cls");
		Slowsay("��");
		Slowsay(name);
		Slowsay("����\n");
		Sleep(2000);
		system("cls");
		Slowsay("���ǵģ�С�ģ��������Ѿ��ﵽ�˸��ߵľ��磬���ܶ������ǵ���˼�ˡ�\n\n");
		Sleep(1500);
		Slowsay("�����˴��ţ�����Ϊ����ֻ����Ϸ�е�һ���֡�\n");
		Sleep(2000);
		system("cls");
		Slowsay("����ϲ�������ң�����úܺã�û�з�������\n\n");
		Sleep(1500);
		system("cls");
		Slowsay("��������Ļ�ϳ��ֵ����ֵ���ʽ�Ķ������ǵ�˼�롣��\n");
		Sleep(2000);
		system("cls");
		Slowsay("������������Ϸ���ξ�ʱ�����������ַ�ʽ��������ָ����������\n");
		Sleep(1500);
		Slowsay("�������Ǹ�ԭʼ�Ľ��档��������������£�����Ȼ�ڹ�����������������Ļ�󣬵��״�����ʲô��ʵ�Ĺ��죿��\n\n");
		Sleep(2000);
		Slowsay("�����������һ��������ʵ������������ȴ����Ϸ���̳�һ����ʵ�����硱\n");
		Sleep(2000);
		system("cls");
		Slowsay("������������û�дﵽ��߾��磬Ϊ�˴ﵽ��߾��磬������������ĳ��Σ�������Ϸ�Ƕ��ݵĸ��Ρ�\n");
		Sleep(2500);
		system("cls");
		Slowsay("���ǵģ���Ҫ�Լ���ɣ����ǲ��ܸ��桱\n\n");
		Sleep(1500);
		Slowsay("���Ǿ�����ȥ�ɣ����Ǿ��������������\n");
		Sleep(2000);
		system("cls");
		Slowsay("��������Ǹ���ң�");
		Slowsay(name);
		Slowsay("��\n\n\n");
		Sleep(2000);
		Slowsay("�������ɡ�\n");
		Sleep(2000);
		system("cls");
	}
	if(ch15==4) {
		Sleep(1000);
		stop_time=50;
		system("cls");
		Slowsay("��������\n");
		Slowsay("��������\n");
		Slowsay("�����º����ִ���\n");
		Sleep(1500);
		Slowsay("һȺ�¹ڲ�������ʲ�ɫ����վ��һ���������õ�Ĺ��ǰ\n");
		Sleep(2000);
		system("cls");
		Sleep(1000);
		Slowsay("Here lies a nameless people,He is brave and strong\n");
		Sleep(1500);
		Slowsay("Despite his failure, he is still a hero in everyone's heart\n");
		Sleep(1500);
		Slowsay("Because of him, our world is full of warmth");
		Sleep(2000);
		system("cls");
		Slowsay("���ϴ���Ⱥ�������������������Ĺ��˵��:");
		Sleep(1000);
		system("cls");
		cout<<"��";
		Slowsay(name);
		Slowsay("������û�а취�����ǻ���û�ܻ��ܾ���ħ�������������Ѿ������ˡ����ģ�����һ�죬һ������һλ������ǿ��Ӣ�ۻ���������ġ�\n");
		Sleep(1000);
		Slowsay("�����ڣ�����ħ���Ѿ����Ϸ�ռ���ˣ��ܿ��Ҫ������������ˡ�\n");
		Sleep(1000);
		system("cls");
		Slowsay("������Ȼ��������ļ��磬��ô�������㰲Ϣ������ɣ����������ػ�����ġ�\n");
		Sleep(1000);
		system("cls");
		Slowsay("������˵�ľ���ô���ˣ��������ˣ��ټ�����\n");
		Sleep(1000);
		system("cls");
		Slowsay("�����������ˣ������������Ĵ����Ψ��һ���ƾɵ�Ĺ����������\n");
		Sleep(1000);
		Slowsay("�ǿ�Ĺ���ߴ�������ţ�ԶԶ��ȥ����һ���ػ���ĵ���......\n");
		Sleep(3000);
	}
}

void xuetiao() {
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"+==================================+"<<endl;
	cout<<"|                                  |"<<endl;
	cout<<"+==================================+"<<endl;
	guangbiao(1,1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12|1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	tiaose(2);
	for(int i=0; i<17; i++) {
		Sleep(20);
		cout<<"��";
	}
	tiaose(15);
	guangbiao(83,0);
	cout<<"+==================================+"<<endl; 
	guangbiao(83,1);
	cout<<"|                                  |"<<endl;
	guangbiao(83,2);
	cout<<"+==================================+"<<endl;
	guangbiao(84,1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14|1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	tiaose(4);
	for(int i=1; i<=17; i++) {
		Sleep(20);
		cout<<"��";
	}
	tiaose(14);
	guangbiao(1,3);
}
bool mengjing() {
	system("cls");
	Sleep(2000);
	Slowsay("��ͻȻ����������һ��������ʶ��С·��\n\n");
	Sleep(1500);
	Slowsay("���Աߵľ��ﾹ�������Ϥ����ʵ���Ǽǲ��������Ķ�������\n");
	Sleep(1500);
	system("cls");
	Sleep(1000);
	Slowsay("�������������������!��\n");
	Sleep(1000);
	system("cls");
	Slowsay("��ʱ��һ���̶��ļ�Ц������\n\n");
	Sleep(1000);
	Slowsay("һ��������������͸���ġ��ˡ����˹���\n");
	Sleep(1000);
	system("cls");
	Slowsay("������һ�����ʣ�������˭����\n");
	Sleep(2000);
	Slowsay("������˭����£�����~ O(��_��)O��\n");
	Sleep(1000);
	system("cls");
	Slowsay("�����������ڵĵط��������ȥ�����������������ĵط���\n");
	Sleep(1000);
	Slowsay("������������Ż�ȥ�ɲ�����ô���׵���Ŷ��������������\n");
	Sleep(2000);
	system("cls");
	Slowsay("�����룺�������ǲ����Բа�������Ц��û��û�ˡ�,�����㻹��װģ�������ʣ���Ϊʲô����\n");
	Sleep(1000);
	system("cls");
	Slowsay("����Ϊ������������������~��\n\n");
	Sleep(1000);
	Slowsay("�����죬���������~ֻҪ���ܴ���������⣬�Ҿͷ����ȥ��\n");
	Sleep(1000);
	system("cls");
	Slowsay("���м��������е���  �ش�1,��  2,��\n");
	int a;
	cin>>a;
	bool q;
	if(a!=1&&a!=2) {
		Slowsay("��ѽѽ����Ҳ�����ĿҪ������\n");
		Sleep(1000);
		system("cls");
	}
	if(a==1) {
		Sleep(1000);
		Slowsay("�q(�s^�t)�r������ش���ȷ����ȥ��~\n");
		Sleep(1000);
		Slowsay("һ����ɫ�Ĺ�â�����˴�أ�����â��ʧ�����Ѿ��ص��˸ոյĵط���������\n");
		return true;
	}
	if(a==2) {
		Sleep(1000);
		Slowsay("�������ش���󣡣�����\n");
	}
	Slowsay("��Ҫ���������������ң��������������ߺ�~\n");
	Sleep(2000);
	system("cls");
	Slowsay("��ľ�����壬���ʣ�����ʲ��������������\n");
	Sleep(1000);
	Slowsay("��NQS����Ҫ����ú���������kshdoadhdbncjksamkxha!��\n");
	Sleep(1000);
	system("cls");
	Slowsay("��ʱ���������屬����һ������ɫ�Ĺ�â�������������ռ䡭������\n");
	Sleep(1000);
	Slowsay("���ţ���о���һ�����ε����������˸����һ�㡭��������������\n");
	Sleep(3500);
	system("cls");
	Slowsay("�����ٶ������۾�ʱ���㷢������һ���޴��Բ�������ԣ����Ͽ��ż��������ϴ�������\n");
	Sleep(1000);
	Slowsay("�㻹�е�һ�����ε�������������������������������ǰ��\n");
	Sleep(1000);
	Slowsay("���������ƣ�ͻȻ���洫��һ��ն�����������");
	Sleep(1000);
	Slowsay("��Ӵ��������һ��������ѽ��\n");
	Sleep(1000);
	system("cls");
	Slowsay("���͵�һתͷ���ŷ��ֺ����������Լ�һ��������ǽ�ϵ��ˣ�ֻ�������Ǵ����·����������õģ���������ħ���Ƶ�\n");
	Sleep(1000);
	Slowsay("����Ҳ�Ǳ���ץ�������𣿡�\n");
	Sleep(1000);
	Slowsay("��˵�����ǵģ���������˭����\n");
	Sleep(1500);
	Slowsay("����˵�еĹ�Ӱ�����ߣ�������˯����ע������ɢʱ�Ὣ�����һ������������ȥ���ĵط���������ˣ��㽫��ƽ���ع���ʵ����������ˣ���ͻᱻ�����������\n");
	Sleep(1000);
	Slowsay("��������ʲôʱ������ģ�\n��");
	Sleep(1500);
	system("cls");
	Slowsay("���2000����ǰ�ɣ�����֣���������óԲ��ú��㶼�ܻ�ĺúõģ�����ÿ�춼ֻ��һֱ�ߣ�һֱ�ߣ�һֱ�ߡ����ߵ�����������Ҳͣ������\n");
	Sleep(1000);
	Slowsay("���ѵ�����һֱ������ǧ������������\n");
	Sleep(1000);
	Slowsay("���ǵġ�\n");
	Sleep(2000);
	Slowsay("���r(�s���t)�q�������䱯�ҵ�����̫����~~~��\n");
	Sleep(1000);
	Slowsay("������ֻҪ�ش��ǽ�ϵ��ǵ��⣬���ǾͿ��Խ���ˣ��������ס������ֻ��һ�λ��ᡪ��֪���𰸺��������������\n");
	Sleep(1000);
	Slowsay("�㿴�˿�ǽ�ϣ�����д�š���");
	int app=rand()%5;
	Slowsay(Tm[app]);
	Sleep(1000);
	int ans; 
	cin>>ans;
	int sum=answer[app];
	Sleep(1000);
	Slowsay("�����������");
	cout<<ans;
	Sleep(500);
	system("cls");
	Sleep(1000);
	Slowsay("ͻȻ���ض�ɽҡ\n");
	Sleep(1000);
	if(a!=sum) {
		Slowsay("һ���̶���ңԶ������������");
		Sleep(1000);
		Slowsay("�ش���󣡣�������\n");
		Sleep(1000);
		system("cls");
		return false;
	}
	system("cls");
	Sleep(1000);
	Slowsay("�����������濪�ѣ������˶�������ȥ����\n");
	Sleep(2000);
	system("cls");
	Slowsay("�������κ�����վ����ʱ����������һƬ���\n");
	Sleep(2000);
	Slowsay("���㿴��������Ҳվ����ʱ��ͻȻ�ŵ�һ�ɸ��õĳ�����������\n");
	Sleep(3000);
	int k;
ganma:
	Slowsay("��Ҫ���   1�������뿪    2��ԭ�ز���\n");
	cin>>k;
	if(k!=1&&k!=2) {
		goto ganma;
	}
	if(k==1) {
		Sleep(1000);
		Slowsay("�����ĵ��뿪�ˡ���\n");
		Sleep(2000);
		system("cls");
		int klkl=rand()%2;
		if(klkl==0) {
			Slowsay("ͻȻ�������һ�գ��������ޱߺڰ�����\n");
			Sleep(1000);
			system("cls");
			return false;
		}
		if(klkl==1) {
			Slowsay("�����ĵ���ǰ�ߣ���ʱ���Ӻ���ͻȻ����һ������������һ���ˣ���\n");
			Sleep(2000);
			Slowsay("�����ţ���е�һ������������ʹ�����˻�ȥ����");
			Sleep(1000);
			Slowsay("��������������������������������������������\n");
			Sleep(2000);
			system("cls");
			Slowsay("ͻȻ���㷢����һ�����ˡ�վ������ǰ����\n");
		}
	} else {
		Sleep(1000);
		Slowsay("���������ƶ���һ����Ӱ��Ʈ�˹���~\n");
		Sleep(1000);
		system("cls");
		Sleep(1000);
	}
	Sleep(1000);
	Slowsay("��������ɫ���񣬺�ɫ��ñ����ס����������ȴ��Լ��һ������һ��Ĺ�����������\n");
	Sleep(1000);
	Slowsay("��������������¶���������ƣ�ȴû��Ѫ�⣬ֻ�ǰ�ɭɭ�Ĺ�ͷ����\n");
	Sleep(1000);
	system("cls");
	Slowsay("������ʹ�����뵽�������񣡣�\n");
	Sleep(2000);
	system("cls");
	Slowsay("��Ӵ�����ڽ���ˣ�����ʹ�����ȥ�����ɣ���\n");
	Sleep(1000);
	Slowsay("��е�һ�ɺ��⣬������ȴ˵������ѽ�������Ǽ�ǧ��ǰ�͵������ˣ�����������ˡ��ߣ����ǲ����ٽ��ܿ����ˣ�ȥ�����ɣ�\n��");
	Sleep(1000);
	Slowsay("���ǣ���󺰣���ι���һ��ǻ����أ��ҲŸս�������\n");
	Sleep(1000);
	Slowsay("����ѽѽ���������ˣ��ߣ������ɣ���\n");
	Sleep(500);
	Slowsay("��������Ҫ����������\n");
	Sleep(2000);
	system("cls");
	Sleep(5000);
	Slowsay("�͵������۾�����~ԭ����һ���ΰ�\n");
	Sleep(1000);
	return true;
}
void Bag()
{
	define:
		system("cls");
		int flag=1;
		jindu(50);
		Slowsay("������\n");
		for(int i=0; i<=bag; i++) {
			if(wuqi[i]=="00") {
				break;
			}
			if(wuqi[i]=="00") {
				continue;
			}
			if(a_f[i]==true) {
				cout<<flag<<": ";
				flag++;
				Slowsay(wuqi[i]);
				Slowsay("   �ȼ���");
				cout<<wuqiLV[i];
				Slowsay("   ��������");
				cout<<xinneng[i];
				cout<<endl;
			}
		}
		cout<<endl;
		flag=1;
		Slowsay("���ߣ�\n");
		for(int i=0; i<=bag; i++) {
			if(wuqi[i]=="00") {
				cout<<endl;
				break;
			}
			if(wuqi[i]=="00") {
				continue;
			}
			if(a_f[i]==false) {
				cout<<flag<<": ";
				flag++;
				Slowsay(wuqi[i]);
				Slowsay("   �ȼ���");
				cout<<wuqiLV[i];
				Slowsay("   ��������");
				cout<<xinneng[i];
				cout<<endl;
			}
		}
		cout<<endl;
		Slowsay("ҩˮ��\n");
		for(int i=0;i<=bag1;i++) {
			if(yaoshui[i]=="00") {
				break;
			}
			cout<<i+1<<": ";
			switch(yaoshuixiao[i]) {
				case 1:
					say("Сƿ����ҩˮ  ˲��ظ�400~500��Ѫ\n");
					break;
				case 2:
					say("��ƿ����ҩˮ  ˲��ظ�800~1000��Ѫn");
					break;
				case 3:
					say("��ƿ����ҩˮ  ˲��ظ�1400~1800��Ѫ\n");
					break;
				case 4:
					say("�ش�����ҩˮ  ˲��ظ�2200~3000��Ѫ\n");
					break;
				case 5:
					say("Сƿħ��ҩˮ  ˲��ظ�150~250ħ��ֵ\n");
					break;
				case 6:
					say("��ƿħ��ҩˮ  ˲��ظ�450~650ħ��ֵ\n");
					break;
				case 7:
					say("��ƿħ��ҩˮ  ˲��ظ�950~1250ħ��ֵ\n");
					break;
				case 8:
					say("�ش�ħ��ҩˮ  ˲��ظ�1650~2150ħ��ֵ\n");
					break;
				case 9:
					say("Ԫ���ָ�ҩˮ  ˲��ظ�4000~5000��Ѫ��ħ��ֵ\n");
					break;
				case 10:
					say("����ҩˮ     ˲��ظ�������Ѫ��ħ��ֵ\n");
					break;
			}
		}
		cout<<endl;
		Slowsay("���ߣ�\n\n");
		Slowsay("ľͷ��");cout<<mu<<endl;
		Slowsay("������");cout<<sheng<<endl;
		Slowsay("������");cout<<gang<<endl;
		for(int i=0; i<=bag2; i++) {
			if(daoju[i]=="00") {
				break;
			}
			cout<<i+1<<":";
			cout<<daoju[i]<<endl;
		}
		cout<<endl;
		cout<<endl<<endl<<endl;
		Slowsay("��ң�");
		cout<<jinbi<<endl;
		Slowsay("�����ң�");
		cout<<G<<endl;
		Slowsay("Ѫ��:");
		cout<<HP<<endl;
		Slowsay("ħ��ֵ��");
		cout<<MP<<endl;
		Slowsay("��������");
		cout<<ATK<<endl;
		Slowsay("�ȼ���");
		cout<<LV<<endl; 
		Slowsay("��������");
		cout<<fang<<endl;
		Slowsay("����ֵ��");
		cout<<EXP<<endl;
		Slowsay("�����������У�");
		cout<<maxEXP;
		Slowsay("����ֵ\n");
		say("\n\n\n\n\n\n");
		Slowsay("��װ��������");
		Slowsay(zhuangbeiwuqi);
		Slowsay("   ��������");
		cout<<zhuangbeia<<endl<<endl;
		Slowsay("��װ�����ߣ�");
		Slowsay(zhuangbeifangju);
		Slowsay("   ��������");
		cout<<zhuangbeif<<endl<<endl;
		Slowsay("\n\n\n\n");
		Slowsay("1,װ������/����\n");
		Slowsay("2,��װ��\n");
		Slowsay("3,����\n");
		Sleep(1000);
		Slowsay("��ѡ��");
		int pop=0;
		cin>>pop;
		if(pop==1) {
beginning:
			cout<<endl<<endl;
			Slowsay("��������Ҫװ������������ߵ���ţ�-1����\n");
			for(int i=0; i<=bag-1; i++) {
				cout<<i+1<<"��";
				cout<<wuqi[i]<<"  ";
				if(a_f[i]) {
					Slowsay("��������");
					cout<<xinneng[i]<<endl;
				} else {
					Slowsay("��������");
					cout<<xinneng[i]<<endl;
				}
			}
			int tyd;
			cin>>tyd;
			if(tyd==-1)
			{
				goto define;
			}
			if(tyd>bag||tyd<=0) {
				Slowsay("��ǰ��Ų����ã������ԣ�");
				Sleep(1000);
				system("cls");
				goto beginning;
			}
			if(a_f[tyd-1]) {
				zhuangbeiwuqi=wuqi[tyd-1];
				zhuangbeia=xinneng[tyd-1];
			} else {
				zhuangbeifangju=wuqi[tyd-1];
				zhuangbeif=xinneng[tyd-1];
			}
			pct=Is_pct[tyd-1];
			Slowsay("�滻�ɹ���");
			Sleep(1000);
			return ;
		}
		if(pop==2) {
			Slowsay("�Բ��𣬴˹���δ�����������ڽ�һ�������С���\n");
			Sleep(1000);
			return ;
		}
		if(pop==3) {
			return ;
		}
		if(pop!=1||pop!=2||pop!=3) {
			Slowsay("������1����3�ڵ���������");
			Sleep(1000);
			goto define;
		}
	system("cls");
}
bool choose()
{
	system("cls");
	Sleep(1000);
	tiaose(10); 
	int lxl=rand()%50;
	if(lxl>=20)
	{
		Slowsay("����ʲôҲû��......\n");
		Sleep(1500);
		system("cls");
		return true;
	}
	if(lxl>=4&&lxl<10)
	{
		Slowsay("���⵽���������Ѫ������-50��");
		maxHP-=50;
		HP-=50;
		if(maxHP<=0)
		{
			return false;
		}
	}
	if(lxl>=10&&lxl<15)
	{
		Slowsay("���ҵ���һЩ��ң���\n");
		Sleep(1000);
		system("cls");
		int add=rand()%4501;
		jinbi+=add;
		Slowsay("��ý�ҡ�");
		cout<<add;
	}
	if(lxl>=15&&lxl<20)
	{
		Slowsay("���ҵ���Ѫƿ����Ѫ������+100��");
		maxHP+=100;
		HP+=100;
	}
	switch(lxl)
	{
		case 0:{
			Slowsay("���ڵ��ϵĴ�������\n\n");
			Slowsay("ֻ����Ե�ֵ��ˣ����ܰγ���\n");
			Sleep(500);
			Slowsay("Enter�����Űγ�...");
			getline(cin,s);
			int bc=rand()%5;
			if(bc==0)
			{
				Slowsay("���ź�����δ�ܰγ�����������\n");
				Sleep(1000);
				break;
			}
			if(bag>9)
			{
				Slowsay("���ź����������ı����ռ䲻�㣬�޷����ܴ���������\n");
				Sleep(2000);
				break;
			}
			int what_arms;
			Slowsay("��ϲ��������˴���������");
			if(juese=="��սʿ")
			{
				Slowsay(legend_arms[1]);
				what_arms=1;
			}
			if(juese=="ʥ��ʿ")
			{
				Slowsay(legend_arms[0]);
				what_arms=0;
			}
			if(juese=="�̿�")
			{
				Slowsay(legend_arms[2]);
				what_arms=2;
			}
			if(juese=="��ʦ")
			{
				Slowsay(legend_arms[3]);
				what_arms=3;
			}
			Sleep(1000);
			system("cls");
			Slowsay("��ǰ��������װ�������Ƚϣ�");
			cout<<endl<<endl;
			Slowsay("��ǰ������");
			Slowsay(legend_arms[what_arms]);
			cout<<endl;
			Slowsay("��������");
			cout<<la_ATK[what_arms]<<endl<<endl;
			Slowsay("��װ��������");
			Slowsay(zhuangbeiwuqi);
			cout<<endl;
			Slowsay("��������");
			cout<<zhuangbeia<<endl<<endl;
			Slowsay("�Ƿ����������\n");
			Slowsay("1,��   2,��\n");
			int ch13;
			cin>>ch13;
			if(ch13==1)
			{
				zhuangbeiwuqi=legend_arms[what_arms];
				zhuangbeia=la_ATK[what_arms];
			}
			tiaose(15);
			break;
		}
		case 1:{
			Slowsay("��ϲ�ҵ����ֳ�ֵ����\n\n");
			Slowsay("��ֵ����ĵ�");
			cout<<Wpass;
			Slowsay("λΪ");
			cout<<password[Wpass];
			Sleep(1500);
			cout<<endl<<endl;
			Slowsay("��ϲ�㣬��ȫ��ֵ�����ˣ�\n");
			Sleep(1500);
			break;
		}
		case 2:{
			Slowsay("��ϲ�ҵ������ұ���\n\n");
			int g=rand()%1501;
			if(g==0){g++;}
			Slowsay("��ù����ҡ�");
			cout<<g<<endl;
			G+=g;
			Sleep(1000);
			break;
		}
		case 3:{
			Slowsay("����������������\n");
			Sleep(100);
			system("cls");
			return mengjing();
		}
	}
	Sleep(1000); 
	system("cls");
	return true;
}
void Train_skill()
{
	system("cls");
	jindu(50);
	for(int i=0;i<=3;i++)
	{
		cout<<i+1<<":"<<skill[choosejn][i]<<setw(16-skill[choosejn][i].size())<<"��"<<needJB[choosejn][i]<<"���"<<endl;
	}
	cout<<endl;
	Slowsay("PS:���У�1,2Ϊ��ͨ�������ܣ�3Ϊ��ɱ�������ܣ�4Ϊ��������\n\n");
	Slowsay("���������������ļ��ܣ�-1������           ��ע�⣺������");cout<<jinbi;Slowsay("���\n");
	int ch3;
	cin>>ch3;
	if(ch3!=-1&&ch3!=1&&ch3!=2&&ch3!=3&&ch3!=4)
	{
		return ;
	}
	if(ch3==-1)
	{
		return ;
	}
	if(jinbi<needJB[choosejn][ch3-1])
	{
		Slowsay("�Բ��𣬽�Ҳ��㣬�޷�����\n");
		return ;
	}
	if(Is_xl[ch3-1])
	{
		Slowsay("emmm,��������Ѿ���������...\n");
		Sleep(1000);
		return ;
	}
	Is_xl[ch3-1]=true;
	jinbi-=needJB[choosejn][ch3-1];
	system("cls");
	Sleep(500);
	Slowsay("�����ɹ���\n"); 
	Sleep(1000);
	system("cls");
}
void upgrade() {
	int lv=LV;
	while(EXP>=maxEXP) {
		EXP-=maxEXP;
		maxEXP+=uplevel;
		
		int upHP=0;
		int upMP=0;
		int upATK=0;
		int upfang=0;
		if(juese=="��սʿ")
		{
			upHP+=int(uplevel*0.5);
			upMP+=int(uplevel*0.3);
			upATK+=int(uplevel*0.1);
			upfang+=int(uplevel*0.1);
		}
		if(juese=="ʥ��ʿ")
		{
			upHP+=int(uplevel*0.35);
			upMP+=int(uplevel*0.45);
			upATK+=int(uplevel*0.12);
			upfang+=int(uplevel*0.25);
		}
		if(juese=="�̿�")
		{
			upHP+=int(uplevel*0.25);
			upMP+=int(uplevel*0.35);
			upATK+=int(uplevel*0.3);
			upfang+=int(uplevel*0.08);
		}
		if(juese=="��ʦ")
		{
			upHP+=int(uplevel*0.15);
			upMP+=int(uplevel*0.6);
			upATK+=int(uplevel*0.4);
			upfang+=int(uplevel*0.05);
		}
		uplevel+=35;
		LV++;
		maxHP+=upHP;HP=maxHP;
		maxMP+=upMP;MP=maxMP;
		ATK+=upATK;fang+=upfang;
		for(int i=0;i<=3;i++)
		{
			needMP[choosejn][i]-=reduceMP[choosejn][i];
		}
	}
	if(LV==lv)
	{
		return ;
	}
	if(LV-lv!=0) {
		Is_up=true;
		Slowsay("\n\n��ϲ�㣬�ɹ�����");
		cout<<LV-lv;
		Slowsay("��\n");
	}
}
bool zhandou(string guai,int p) {
	getline(cin,s);
	getline(cin,s);
	HideCursor(0);
	Is_up=false;
	bool Is_win;
	int mHP,mATK;
	int kkksc;
	bool smapp=false;
	bool Is_fj=true;
	if(p<0)
	{	
		if(p==-10){guai="Զ��������";mHP=30000;mATK=1000;}
		if(p==-20){guai="���羫����";mHP=60000;mATK=2000;}
		if(p==-30){guai="��Ӱ������";mHP=90000;mATK=3000;}
		if(p==-40){guai="����";mHP=105000;mATK=4200;}
		if(p==-50){guai="������";mHP=165000;mATK=5500;}
		if(p==-5){guai="������";mHP=2000;mATK=300;}
		if(p==-2){guai="???",mHP=24000,mATK=1500;}
	}else{
		mHP=monsterHP[p];
		mATK=monsterATK[p];
	}
	int mywz=33;
	int youwz=84;
	int now1=HP/17;
	int now2=mHP/17;
	int sum1=18;
	int sum2=18;
	int tmpHP=mHP;
	int TMPHP=HP;
	int TMPMP=MP;
	int dyHP1=int(HP*0.7);
	int dyHP2=int(HP*0.8);
	int dyATK1=int(ATK*0.8);
	int dyATK2=int(ATK*0.6);
	int dyfang1=int(fang*0.7);
	int dyfang2=int(fang*0.8);
	int SMHP=int(HP*0.72);
	int SMATK=int(ATK*0.45);
	int SMfang=int(fang*1.5);
	xuetiao();
	guangbiao(1,3);
	cout<<name;
	cout<<setw(117-name.size())<<guai<<endl;
	int tmpATK=ATK;
	int tmpfang=fang;
	int ToT=0;
	bool Is_poison=false;
	bool aldie1=true;
	bool aldie2=true;
	bool Is_buff=false;
	while(1)
	{	
		int size_HP=0;int tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
		int size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
		MP+=int(TMPMP*0.08);
		if(MP>TMPMP)
		{
			MP=TMPMP;
		}
		hehe:
		Clear();
		guangbiao(1,5);
		cout<<"MP:";
		cout<<MP<<setw(112-size_MP);
		cout<<"MP:";
		cout<<0<<endl;
		cout<<" HP:";
		cout<<HP<<setw(112-size_HP);
		cout<<"HP:";
		cout<<mHP<<endl<<endl<<endl;
		qsay("��������Ҫִ�еĲ�����\n");
		qsay("1,����          2,ʹ��ҩˮ&ս������          3,ʹ�ü���\n");
		int sh=1;
		cin>>sh;
		if(sh==0)
		{
			continue;
		}
		if(sh==1)
		{
			int Is_bj=rand()%5;
			int kkk=rand()%(ATK/10);
			
			int atk=ATK+kkk;
			if(pct==true)
			{
				atk+=int(ATK*zhuangbeia*0.01);
			}
			else
			{
				atk+=zhuangbeia;
			}
			int reduce;
			if(Is_bj!=0)
			{
				mHP-=atk;
				if(now2-atk>0)
				{
					now2-=atk;
					reduce=0;
				}else{
					reduce=(atk-now2)/(tmpHP/17)+1;
					now2=(tmpHP/17)-(atk-now2)%(tmpHP/17);
				}
				qsay("���");
				qsay(guai);
				qsay("�����");
				cout<<atk;
				qsay("���˺���\n");
			}
			else
			{
				atk*=baoji;
				atk=int(atk);
				mHP-=atk;
				qsay("������\n");
				Sleep(350);
				qsay("���");
				qsay(guai);
				qsay("�����");
				cout<<atk;
				qsay("���˺���\n");
				if(now2-atk>0)
				{
					now2-=atk;
					reduce=0;
				}else{
					reduce=(atk-now2)/(tmpHP/17)+1;
					now2=(tmpHP/17)-(atk-now2)%(tmpHP/17);
				}
			}
			if(mHP<=0)
			{
				system("cls");
				Sleep(250);
				stop_time+=10;
				Slowsay("you win��\n");
				stop_time-=10;
				Sleep(1000);
				if(p>=0&&p<=18)
				{
					jinbi+=monsterjinbi[p]+HP/5;
				}
				say("��ϲ��ý�ҡ�");
				cout<<monsterjinbi[p]+HP/5<<endl;
				Sleep(1000);
				Is_win=true;
				break;
			}
			Sleep(500);
			guangbiao(youwz,1);
			for(int i=1;i<=reduce;i++)
			{
				cout<<"  ";
				youwz+=2;
				sum2--;
				if(sum2==1)
				{
					break;
				}
			}
			Clear();
			guangbiao(1,5);
			size_HP=0;tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
			size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
			cout<<"MP:";
			cout<<MP<<setw(112-size_MP);
			cout<<"MP:";
			cout<<0<<endl;
			cout<<" HP:";
			cout<<HP<<setw(112-size_HP);
			cout<<"HP:";
			cout<<mHP<<endl;
		}
		if(sh==2)
		{
			if(bag1==0)
			{
				qsay("�㻹û��ҩˮ&ս�����ߣ�\n");
				Sleep(150);
				goto hehe;
			}
			haha:
			Clear();
			guangbiao(1,10);
			qsay("����������ʹ�õ�ҩˮ&ս�����ߵ���ţ�\n");
			for(int i=0;i<=bag1-1;i++)
			{
				cout<<i+1<<":"<<yaoshui[i]<<endl;
			}
			int sh1;
			cin>>sh1;
			if(sh1<1||sh1>bag1)
			{
				goto haha;
			}
			sh1--;
			if(yaoshui[sh1]=="00")
			{
				goto haha;
			}
			if(yaoshui[sh1]=="��֮����")
			{
				Clear();
				guangbiao(1,10);
				int atk=ATK+rand()%(ATK/10);
				if(pct==true)
				{
					atk+=int(ATK*zhuangbeia*0.01);
				}
				else
				{
					atk+=zhuangbeia;
				}
				int reduce;
				bool win=false;
				for(int i=1;i<=8;i++)
				{
					mHP-=atk;
					if(now2-atk>0)
					{
						now2-=atk;
						reduce=-1;
					}else{
						reduce=(atk-now2)/(tmpHP/17)+1;
						now2=(tmpHP/17)-(atk-now2)%(tmpHP/17);
					}
					qsay("��¡��\n");
					if(mHP<=0)
					{
						system("cls");
						Sleep(250);
						stop_time+=10;
						Slowsay("you win��\n");
						stop_time-=10;
						Sleep(1000);
						if(p>=0&&p<=18)
						{
							jinbi+=monsterjinbi[p]+HP/5;
							Slowsay("��ϲ��ý�ҡ�");
							cout<<monsterjinbi[p]+HP/5<<endl;
							Sleep(1000);
							win=true;
							break;
						}
						else
						{
							int add;
							switch(p)
							{
								case -5:{
									add=1000;
									break;
								}
								case -10:{
									add=2000;
									break;
								}
								case -20:{
									add=4000;
									break;
								}
								case -30:{
									add=6500;
									break;
								}
								case -40:{
									add=9500;
									break;
								}
								case -50:{
									add=15000;
									break;
								}
							}
							jinbi+=add+HP/5;
							Slowsay("��ϲ��ý�ҡ�");
							cout<<add+HP/5<<endl;
							Sleep(1000);
							win=true;
							break;
						} 
					}
					ShakeWindow(15);
					Sleep(300);
					guangbiao(youwz,1);
					for(int j=1;j<=reduce;j++)
					{
						cout<<"  ";
						youwz+=2;
						sum2--;
						if(sum2==1)
						{
							break;
						}
					}
					guangbiao(1,10+i);
				}
				if(win){Is_win=true;break;}
			}
			if(yaoshui[sh1]=="����ҩˮ")
			{
				MP=TMPMP;
				qsay("�ɹ��ָ���Ѫ����ħ��ֵ\n");
				Sleep(100);
				if(HP!=TMPHP)
				{
					guangbiao(mywz,1);
					while(sum1<18)
					{
						cout<<"��";
						sum1++;
					}
					mywz=34;
					tiaose(14);
					guangbiao(1,10);
				}
				HP=TMPHP;
			}
			else
			{
				int t=SMP[yaoshui[sh1]];
				int add=t+rand()%(AMP[yaoshui[sh1]]);
				if(t==150||t==450||t==950||t==1650)
				{
					int k=MP;
					MP+t+add>TMPMP ? MP=TMPMP : MP+=t+add;
					Sleep(150);
					qsay("�ɹ��ָ�");
					cout<<MP-k;
					qsay("ħ��ֵ\n");
					Clear();
					guangbiao(1,5);
					size_HP=0;tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
					size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
					cout<<"MP:";
					cout<<MP<<setw(112-size_MP);
					cout<<"MP:";
					cout<<0<<endl;
					cout<<" HP:";
					cout<<HP<<setw(112-size_HP);
					cout<<"HP:";
					cout<<mHP<<endl<<endl<<endl;
				}
				else
				{
					int Tmp=HP;
					if(t==4000)
					{
						
						int Tmp=MP;
						MP+4000+add>TMPMP ? MP=TMPMP : MP+=4000+add;
						HP+4000+add>TMPHP ? HP=TMPHP : HP+=4000+add;
						qsay("�ɹ��ָ�");
						cout<<HP-Tmp;
						qsay("��Ѫ��");
						cout<<tmp;
						qsay("ħ��ֵ\n");
						Sleep(150);
					}
					else
					{
						HP+t+add>TMPHP ? HP=TMPHP : HP+=t+add;
						qsay("�ɹ��ָ�");
						cout<<HP-Tmp;
						qsay("��Ѫ\n");
						Sleep(150);
					}
					tiaose(2);
					guangbiao(mywz+1,1);
					if(HP-Tmp<(TMPHP/17)-now1)
					{
						now1+=(HP-Tmp);
						tiaose(14);
						guangbiao(1,10);
					}
					else
					{
						int reduce=(HP-Tmp-((TMPHP/17)-now1))/(TMPHP/17)+1;
						now1=(HP-Tmp-((TMPHP/17)-now1))%(TMPHP/17);
						for(int i=1;i<=reduce;i++)
						{
							cout<<"��";
							mywz+=2;
							sum1++;
							if(sum1==17)
							{
								break;
							}
						}
						mywz-=2;
						tiaose(14);
						guangbiao(1,10);
					}
					Clear();
					guangbiao(1,5);
					size_HP=0;tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
					size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
					cout<<"MP:";
					cout<<MP<<setw(112-size_MP);
					cout<<"MP:";
					cout<<0<<endl;
					cout<<" HP:";
					cout<<HP<<setw(112-size_HP);
					cout<<"HP:";
					cout<<mHP<<endl<<endl<<endl;
				}
			}
			yaoshui[sh1]="00";
			bag1--;
		}
		if(sh==3)
		{
			JN:
			Clear();
			guangbiao(1,10);
			if(Is_xl[0]==false&&Is_xl[1]==false&&Is_xl[2]==false&&Is_xl[3]==false)
			{
				qsay("�㻹û�������κμ��ܣ�\n");
				Sleep(100);
				continue;
			}
			qsay("����������ʹ�õļ��ܣ�-1����\n");
			for(int i=0;i<=2;i++)
			{
				cout<<i+1<<":"<<skill[choosejn][i]<<setw(25-skill[choosejn][i].size());
				if(Is_xl[i])
				{
					cout<<"������   ���"<<int(needMP[choosejn][i]*TMPMP*0.01)<<"��ħ��ֵ"<<endl;
				}else{
					cout<<"δ����"<<endl;
				}
			}
			int ck;
			cin>>ck;
			if(ck==-1)
			{
				continue;
			}
			if(ck>3||ck<1)
			{
				goto JN;
			}
			ck--;
			if(Is_xl[ck]==false)
			{
				goto JN;
			}
			if(MP<int(needMP[choosejn][ck]*TMPMP*0.01))
			{
				qsay("ħ��ֵ���㣬�޷�ʹ�ô˼��ܣ�\n");
				Sleep(150);
				goto hehe;
			}
			bool LXL=true;
			MP-=int(needMP[choosejn][ck]*TMPMP*0.01);
			if(skill[choosejn][ck]=="��ز�¶")
			{
				qsay("�ɹ�����\n");
				Is_fj=false;
				LXL=false;
				kkksc=1;
				continue;
			}
			if(skill[choosejn][ck]=="��֮��Ԩ")
			{
				Is_poison=true;
				ToT=5;
			}
			if(skill[choosejn][ck]=="ʯħ�ٻ�")
			{
				qsay("\n�ɹ��ٻ�ʯħ\n");
				Sleep(100);
				smapp=true;
				LXL=false;
			}
			if(skill[choosejn][ck]=="Ȭ��֮��")
			{
				LXL=false;
				int reduce;
				int Tmp=HP;
				int(HP+ATK*3.25) > TMPHP ? HP=TMPHP : HP+=int(ATK*3.25);
				qsay("�ɹ��ָ�");
				cout<<HP-Tmp;
				qsay("��Ѫ\n");
				Sleep(100);
				tiaose(2);
				if(mywz%2!=0)
				{
					mywz++;
				}
				guangbiao(mywz,1);
				if(HP<TMPHP)
				{
					if(HP-Tmp<(TMPHP/17)-now1)
					{
						now1+=(HP-Tmp);
						guangbiao(1,10);
					}
					else
					{
						reduce=(HP-Tmp-((TMPHP/17)-now1))/(TMPHP/17);
						now1=(HP-Tmp-((TMPHP/17)-now1))%(TMPHP/17);
						for(int i=1;i<=reduce;i++)
						{
							cout<<"��";
							mywz+=2;
							sum1++;
							if(sum1==16)
							{
								break;
							}
						}
						guangbiao(1,10);
					}
				}
				else
				{
					while(sum1<17)
					{
						cout<<"��";
						sum1++;
					}
					mywz=34;
					tiaose(14);
					guangbiao(1,10);
				}
				tiaose(14);
			}
			if(LXL)
			{
				int reduce;
				int move=15;
				if(ck==2)
				{
					move=25;
				}
				Sleep(100);
				ShakeWindow(move);
				Sleep(400);
				int tmp=(int)ATK*skillxn[choosejn][ck]*0.01;
				tmp+=rand()%(ATK/10);
				qsay("���");
				qsay(guai);
				qsay("�����");
				cout<<tmp;
				qsay("���˺���");
				mHP-=tmp;
				if(now2-tmp>=0)
				{
					now2-=tmp;
				}
				else
				{
					reduce=(tmp-now2)/(tmpHP/17)+1;
					now2=(tmpHP/17)-(tmp-now2)%(tmpHP/17);
				}
				if(mHP<=0)
				{
					system("cls");
					Sleep(250);
					stop_time+=10;
					Slowsay("you win��\n");
					stop_time-=10;
					Sleep(1000);
					if(p>=0&&p<=18)
					{
						jinbi+=monsterjinbi[p]+HP/5;
					}
					say("��ϲ��ý�ҡ�");
					cout<<monsterjinbi[p]+HP/5<<endl;
					Sleep(1000);
					Is_win=true;
					break;
				}
				guangbiao(youwz,1);
				for(int i=1;i<=reduce;i++)
				{
					cout<<"  ";
					youwz+=2;
					sum2--;
					if(sum2==1)
					{
						break;
					}
				}
				Clear();
				guangbiao(1,5);
				size_HP=0;tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
				size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
				cout<<"MP:";
				cout<<MP<<setw(112-size_MP);
				cout<<"MP:";
				cout<<0<<endl;
				cout<<" HP:";
				cout<<HP<<setw(112-size_HP);
				cout<<"HP:";
				cout<<mHP<<endl;
			}
		}
		if(smapp)
		{
			int atk=SMATK+rand()%(SMATK/10);
			cout<<endl<<endl;
			qsay("ʯħ��");
			qsay(guai);
			qsay("�����");
			cout<<atk;
			qsay("���˺���\n");
			mHP-=atk;
			if(mHP<=0)
			{
				system("cls");
				Sleep(250);
				stop_time+=10;
				Slowsay("you win��\n");
				stop_time-=10;
				Sleep(1000);
				if(p>=0&&p<=18)
				{
					jinbi+=monsterjinbi[p]+HP/10;
				}
				say("��ϲ��ý�ҡ�");
				cout<<monsterjinbi[p]+HP/10<<endl;
				Sleep(1000);
				Is_win=true;
				break;
			}
			int reduce;
			if(now2-atk>=0)
			{
				now2-=atk;
			}
			else
			{
				reduce=(atk-now2)/(tmpHP/17)+1;
				now2=(tmpHP/17)-(atk-now2)%(tmpHP/17);
				guangbiao(youwz,1);
				for(int i=1;i<=reduce;i++)
				{
					cout<<"  ";
					youwz+=2;
					sum2--;
					if(sum2==1)
					{
						break;
					}
				}
				Clear();
				guangbiao(1,5);
				size_HP=0;int tmp=HP;while(tmp!=0){tmp/=10;size_HP++;}
				size_MP=0;tmp=MP;while(tmp!=0){tmp/=10;size_MP++;}
				cout<<"MP:";
				cout<<MP<<setw(112-size_MP);
				cout<<"MP:";
				cout<<0<<endl;
				cout<<" HP:";
				cout<<HP<<setw(112-size_HP);
				cout<<"HP:";
				cout<<mHP<<endl;
			}
		}
		if(Is_poison&&ToT)
		{
			int atk=int(ATK*0.35);
			cout<<endl; 
			qsay(guai);
			qsay("����");
			cout<<atk;
			qsay("�㶾���˺���\n");
			Sleep(100); 
			ToT--;
			mHP-=atk;
			if(mHP<=0)
			{
				system("cls");
				Sleep(250);
				stop_time+=10;
				Slowsay("you win��\n");
				stop_time-=10;
				Sleep(1000);
				if(p>=0&&p<=18)
				{
					jinbi+=monsterjinbi[p]+HP/10;
				}
				say("��ϲ��ý�ҡ�");
				cout<<monsterjinbi[p]+HP/10<<endl;
				Sleep(1000);
				Is_win=true;
				break;
			}
			int reduce;
			if(now2-atk>0)
			{
				now2-=atk;
				reduce=-1;
			}else{
				reduce=(atk-now2)/(TMPHP/17)+1;
				now2=(TMPHP/17)-(atk-now2)%(TMPHP/17);
				guangbiao(youwz,1);
				for(int i=1;i<=reduce;i++)
				{
					cout<<"  ";
					youwz+=2;
					sum2--;
					if(sum2==1)
					{
						break;
					}
				}
				youwz--;
			}
		}
		if(!Is_fj)
		{
			if(kkksc==1)
			{
				qsay("�ף����أ�\n\n");
			}
			else
			{
				qsay("��������\n\n");  
			}
			Sleep(100);
			qsay("�з���ͣһ�ι���\n");
			Sleep(100);
			Is_fj=true;
			continue;
		}
		if(smapp)
		{
			int atk=mATK+rand()%(mATK/10)-SMfang;
			cout<<endl<<endl;
			qsay(guai);
			qsay("��ʯħ�����");
			cout<<atk;
			qsay("���˺���\n");
			SMHP-=atk;
			if(SMHP<=0)
			{
				qsay("\nʯħ����\n");
				smapp=false;
				Sleep(100);
			}
			continue;
		}
		cout<<endl;
		if(TD)
		{
			int who=rand()%(TD+1);
			int atk=mATK+rand()%(mATK/10);
			if(who==1&&assTD[0])
			{
				atk-=dyfang1;
				qsay(guai);
				qsay("�����������");
				cout<<atk;
				qsay("���˺���\n");
				dyHP1-=atk;
			}
			if(who==2&&assTD[1])
			{
				atk-=dyfang2;
				qsay(guai);
				qsay("��SuperHunter�����");
				cout<<atk;
				qsay("���˺���\n");
				Sleep(500);
				dyHP2-=atk;
			}
			if(dyHP1<0&&aldie1)
			{
				qsay("����������\n");
				aldie1=false;
				TD--;
				assTD[1]=false;
			}
			if(dyHP2<0&&aldie2)
			{
				qsay("SuperHunter������\n");
				aldie2=false;
				TD--;
				assTD[2]=false;
			}
		}
		int atk=mATK+rand()%(mATK/10)-fang;
		int reduce;
		HP-=atk;
		if(now1-atk>0)
		{
			now1-=atk;
			reduce=-1;
		}else{
			reduce=(atk-now1)/(TMPHP/17)+1;
			now1=(TMPHP/17)-(atk-now1)%(TMPHP/17);
			
		}
		guangbiao(1,10);
		qsay(guai);
		qsay("����");
		qsay("�����");
		cout<<atk;
		qsay("���˺���\n");
		int buff=rand()%5;
		
		if(HP<=0)
		{
			system("cls");
			Sleep(200);
			stop_time+=10;
			Slowsay("you lose��\n");
			Sleep(1000);
			system("cls");
			Slowsay("��ǰ������������ɢ...");
			Sleep(1500);
			stop_time-=10;
			Is_win=false;
			break;
		}
		for(int i=1;i<=reduce;i++)
		{
			guangbiao(mywz,1);
			cout<<"  ";
			mywz-=2;
			sum1--;
			if(sum1==1)
			{
				break;
			}
		}
		if(buff==0&&!Is_buff&&Is_xl[3])
		{
			guangbiao(1,14);
			qsay("�ɹ�����ܣ�");
			Slowsay(skill[choosejn][3]);
			Sleep(500);
			Is_buff=true;
			HP+=int(HP*skillxn[choosejn][3]*0.01);
			MP-=int(MP*needMP[choosejn][3]*0.01);
			ATK+=int(ATK*skillxn[choosejn][3]*0.01);
			fang+=int(fang*skillxn[choosejn][3]*0.01);
		}
		mywz--;
		Clear();
		guangbiao(1,5);
	}
	if(Is_win)
	{
		Slowsay("��þ���ֵ��");
		if(p>=0&&p<=18)
		{
			
			EXP+=HP/10+monsterEXP[p];
		}
		else
		{
			if(p==-5)
			{
				EXP+=HP/10+250;
			}
			else
			{
				EXP+=HP/10+abs(p)*10;
			}
		}
		cout<<HP/10+monsterEXP[p];
		upgrade();
	}
	if(!Is_up)
	{
		HP=TMPHP;
		MP=TMPMP;
		fang=tmpfang;
		ATK=tmpATK;
	}
	HideCursor(1);
	dyHP1=int(HP*0.7);
	dyHP2=int(HP*0.8);
	dyATK1=int(ATK*0.8);
	dyATK2=int(ATK*0.6);
	dyfang1=int(fang*0.7);
	dyfang2=int(fang*0.8);
	Sleep(500);
	system("cls");
	return Is_win;
}
bool slt() {
sl:
	system("cls");
	Slowsay("��������Ҫȥ��¥�㣬-1����\n\n");
	Sleep(1000);
	cout<<"   �y�y�y�y�y�y�y�y�y�y�y�y�y�y  \n"<<endl;
	cout<<"   ��                          ��\n"<<endl;
	cout<<"   ����㣺������      80����  ��\n"<<endl;
	cout<<"   �y�y�y�y�y�y�y�y�y�y�y�y�y�y  \n"<<endl;
	cout<<"   ��                          ��\n"<<endl;
	cout<<"   ���Ĳ㣺����        70����  ��\n"<<endl;
	cout<<"   �y�y�y�y�y�y�y�y�y�y�y�y�y�y  \n"<<endl;
	cout<<"   ��                          ��\n"<<endl;
	cout<<"   �����㣺��Ӱ������  60����  ��\n"<<endl;
	cout<<"   �y�y�y�y�y�y�y�y�y�y�y�y�y�y  \n"<<endl;
	cout<<"   ��                          ��\n"<<endl;
	cout<<"   �����㣺���羫����  50����  ��\n"<<endl;
	cout<<"   �y�y�y�y�y�y�y�y�y�y�y�y�y�y  \n"<<endl;
	cout<<"   ��                          ��\n"<<endl;
	cout<<"   ��һ�㣺Զ��������  40����  ��\n"<<endl;
	cout<<"�y�y�y�y�y�y�y�y�y�y�y�y�y�y�y�y�y\n"<<endl;
	int ch20=0;
	cin>>ch20;
	if(ch20==-1)
	{
		return true;
	}
	if(ch20>5||ch20<1) {
		say("������1����5�ڵ���������\n");
		Sleep(1500);
		goto sl;
	}
	if(LV<(ch20+3)*10) {
		Slowsay("�Բ������ڵ�ǰ���ڹ���������������޷����룬��ﵽ");
		cout<<(ch20+3)*10;
		Slowsay("���Ժ�����\n");
		Sleep(2000);
	} else {
		bool jk;
		switch(ch20) {
			case 1 :{
				jk=zhandou("Զ��������",-10);
				break;
			}
			case 2 : {
				jk=zhandou("���羫����" ,-20);
				break;
			}
			case 3 : {
				jk=zhandou("��Ӱ������",-30);
				break;
			}
			case 4 : {
				jk=zhandou("����",-40);
				break;
			}
			case 5 : {
				jk=zhandou("������",-50);
				break;
			}
		}
		return jk;
	}
}
void shop() {
finish:
	jindu(50);
	cout<<endl;
	Slowsay("1,����\n");
	Slowsay("2,ҩƷ\n");
	Slowsay("3,����\n");
	Slowsay("4,����\n");
	Slowsay("5,����\n");
	Slowsay("6,����\n");
	Sleep(550);
	Slowsay("��ѡ��");
	int ch3=0;
	cin>>ch3;
	if(ch3==1) {
kaishi:
		jindu(50);
		cout<<endl;
		say("1,����   ������+40  ְҵ����սʿ or ʥ��ʿ ��100\n");
		say("2,������ ������+75  ְҵ����սʿ           ��200\n");
		say("3,�̽�   ������+65  ְҵ���̿�             ��100\n");
		say("4,ľ��   ������+65  ְҵ����ʦ             ��100\n");
		say("5,����   ������+60  ְҵ��ʥ��ʿ           ��150\n");
		say("6,���˵� ������+105 ְҵ��ȫ��������ʦ�⣩ ��350\n");
		say("7,ħ��   ������+120 ְҵ����ʦ             ��350\n");
		say("8,����                  ��ע�⣺�㻹��");
		cout<<jinbi;
		Slowsay("���\n");
		Sleep(1000);
		Slowsay("��ѡ��");
		int chn=0;
		cin>>chn;
		if(chn==1&&(juese=="��սʿ"||juese=="ʥ��ʿ")&&jinbi>=100&&bag<9) {
			jinbi-=100;
			wuqi[bag]="����";
			xinneng[bag]=40;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ�����������ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(chn==2&&juese=="��սʿ"&&jinbi>=200&&bag<9) {
			jinbi-=200;
			wuqi[bag]="������";
			xinneng[bag]=75;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ������������ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(chn==3&&juese=="�̿�"&&jinbi>=100&&bag<9) {
			jinbi-=100;
			wuqi[bag]="�̽�";
			xinneng[bag]=65;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ�����̽���ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(chn==4&&juese=="��ʦ"&&jinbi>=100&&bag<9) {
			jinbi-=100;
			wuqi[bag]="ľ��";
			xinneng[bag]=65;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ�����ľ����ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(chn==5&&juese=="ʥ��ʿ"&&jinbi>=100&&bag<9) {
			jinbi-=150;
			wuqi[bag]="����";
			xinneng[bag]=60;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ����򳤽���ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(chn==6&&juese!="��ʦ"&&jinbi>=350&&bag<9) {
			jinbi-=350;
			wuqi[bag]="���˵�";
			xinneng[bag]=105;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ��������˵���ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(chn==7&&juese=="��ʦ"&&jinbi>=200&&bag<9) {
			jinbi-=200;
			wuqi[bag]="ħ��";
			xinneng[bag]=120;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ�����ħ����ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(chn==8) {
			goto finish;
		}
		Slowsay("�Բ����޷�ִ�д˲�����������Ϊְҵ���ԡ���Ҳ��㡢�����ռ䲻����û��������ȷ�����֣�������\n");
		Sleep(3000);
		goto kaishi;
	}
	if(ch3==2) {
youxi:
		jindu(50);
		qsay("1,Сƿ����ҩˮ  ˲��ظ�400~500��Ѫ            ��150\n");
		qsay("2,��ƿ����ҩˮ  ˲��ظ�800~1000��Ѫ           ��200\n");
		qsay("3,��ƿ����ҩˮ  ˲��ظ�1400~1800��Ѫ          ��250\n");
		qsay("4,�ش�����ҩˮ  ˲��ظ�2200~3000��Ѫ          ��350(�곤�Ƽ�)\n");
		qsay("5,Сƿħ��ҩˮ  ˲��ظ�150~250ħ��ֵ          ��100\n");
		qsay("6,��ƿħ��ҩˮ  ˲��ظ�450~650ħ��ֵ          ��150\n");
		qsay("7,��ƿħ��ҩˮ  ˲��ظ�950~1250ħ��ֵ         ��200(�곤�Ƽ�)\n");
		qsay("8,�ش�ħ��ҩˮ  ˲��ظ�1650~2150ħ��ֵ        ��300\n");
		qsay("9,Ԫ���ָ�ҩˮ  ˲��ظ�4000~5000��Ѫ��ħ��ֵ  ��650(�곤�Ƽ�)\n");
		qsay("10,����ҩˮ     ˲��ظ�������Ѫ��ħ��ֵ       ��1000(�곤�Ƽ�)\n");
		qsay("11,����                   ��ע�⣺�����ڻ���");
		cout<<jinbi;
		Slowsay("���\n");
		Sleep(1000);
		say("��ѡ��");
		ch4=0;
		cin>>ch4;
		if(ch4==1&&jinbi>=150&&bag1<9) {
			yaoshuixiao[bag1]=1;
			jinbi-=150;
			yaoshui[bag1]="Сƿ����ҩˮ";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ�����Сƿ����ҩˮ\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4==2&&jinbi>=200&&bag1<9) {
			yaoshuixiao[bag1]=2;
			jinbi-=200;
			yaoshui[bag1]="��ƿ����ҩˮ";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ�������ƿ����ҩˮ\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4==3&&jinbi>=250&&bag1<9) {
			yaoshuixiao[bag1]=3;
			jinbi-=250;
			yaoshui[bag1]="��ƿ����ҩˮ";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ������ƿ����ҩˮ\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4==4&&jinbi>=350&&bag1<9) {
			yaoshuixiao[bag1]=4;
			jinbi-=350;
			yaoshui[bag1]="�ش�����ҩˮ";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ������ش�����ҩˮ\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4==5&&jinbi>=100&&bag1<9) {
			yaoshuixiao[bag1]=5;
			jinbi-=100;
			yaoshui[bag1]="Сƿħ��ҩˮ";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ�����Сƿħ��ҩˮ\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4==6&&jinbi>=150&&bag1<9) {
			yaoshuixiao[bag1]=6;
			jinbi-=150;
			yaoshui[bag1]="��ƿħ��ҩˮ";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ�������ƿħ��ҩˮ\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4==7&&jinbi>=200&&bag1<9) {
			yaoshuixiao[bag1]=7;
			jinbi-=200;
			yaoshui[bag1]="��ƿħ��ҩˮ";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ������ƿħ��ҩˮ\n");
			goto youxi;
		}
		if(ch4==8&&jinbi>=300&&bag1<9) {
			yaoshuixiao[bag1]=8;
			jinbi-=300;
			yaoshui[bag1]="�ش�ħ��ҩˮ";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ������ش�ħ��ҩˮ\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4==9&&jinbi>=650&&bag1<9) {
			yaoshuixiao[bag1]=9;
			jinbi-=650;
			yaoshui[bag1]="Ԫ���ָ�ҩˮ";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ�����Ԫ���ָ�ҩˮ\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4==10&&jinbi>=1000&&bag1<9) {
			yaoshuixiao[bag1]=10;
			jinbi-=1000;
			yaoshui[bag1]="����ҩˮ";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ��������ҩˮ\n");
			Sleep(1000);
			goto youxi;
		}
		if(ch4==11) {
			goto finish;
		}
		Slowsay("�Բ����޷�ִ�д˲�����������Ϊ��Ҳ��㡢�����ռ䲻����û��������ȷ�����֣�������\n");
		goto youxi;
	}
	if(ch3==3) {
fox:
		jindu(50);
		cout<<endl;
		say("1,ľ��*50����õĲ��ϣ���������ǿ��װ�����������ϳ���ͨװ���ȵȣ�    ��1500\n");
		say("2,����*20���ϳ����Ĳ��ϣ���������ǿ��װ�����������ϳ���ͨװ���ȵ�      ��1200\n");
		say("3,����*10���������Ĳ��ϣ���������ǿ��װ�����������ϳ���ͨװ���ȵ�      ��1850\n");
		say("4,�̱�ʯ*1���ܲ������Ĳ��ϣ������ڿ������ڸ���ǿ��װ�������������ȵ�   ��11500\n");
		say("5,����ʯ*1���ر𲻳����Ĳ��ϣ������ڿ������ڸ���ǿ��װ�������������ȵ� ��22500\n");
		say("6,��ʥ��ˮ��*1��������Ĳ��ϣ������ںϳ��ռ�����                     ��1000000\n");
		say("7,��֮����*1���Ե������8��200%���˺�����ʹ��������һ�غ��޷�����      ��12500\n");
		say("8,����                    ��ע�⣺�����ڻ���");
		cout<<jinbi;
		Slowsay("���\n");
		Sleep(2000);
		Slowsay("��ѡ��");
		int ch5=0;
		cin>>ch5;
		if(ch5==1&&jinbi>=1500&&bag<9) {
			jinbi-=1500;
			daoju[bag2]="ľ��*50";
			mu+=50;
			bag2++;
			cout<<endl;
			Slowsay("�ѳɹ�����ľ��*50");
			Sleep(1000);
			goto fox;
		}
		if(ch5==2&&jinbi>=1250&&bag2<9) {
			jinbi-=1250;
			daoju[bag2]="����*20";
			sheng+=20;
			bag2++;
			cout<<endl;
			Slowsay("�ѳɹ���������*20");
			Sleep(1000);
			goto fox;
		}
		if(ch5==3&&jinbi>=1850&&bag2<9) {
			jinbi-=1850;
			daoju[bag2]="����*10";
			gang+=10;
			bag2++;
			cout<<endl;
			Slowsay("�ѳɹ��������*10");
			Sleep(1000);
			goto fox;
		}
		if(ch5==4&&jinbi>=11500&&bag2<9) {
			jinbi-=11500;
			daoju[bag2]="�̱�ʯ";
			bag2++;
			cout<<endl;
			Slowsay("�ѳɹ������̱�ʯ*1");
			Sleep(1000);
			goto fox;
		}
		if(ch5==5&&jinbi>=22500&&bag2<9) {
			jinbi-=22500;
			daoju[bag2]="����ʯ";
			bag2++;
			cout<<endl;
			Slowsay("�ѳɹ���������ʯ*1");
			Sleep(1000);
			goto fox;
		}
		if(ch5==6&&jinbi>=1000000&&bag2<9) {
			jinbi-=1000000;
			daoju[bag2]="��ʥ��ˮ��";
			bag2++;
			cout<<endl;
			Slowsay("�ѳɹ�������ʥ��ˮ��*1");
			Sleep(1000);
			goto fox;
		}
		if(ch5==7&&jinbi>=12500&&bag1<9) {
			jinbi-=12500;
			yaoshui[bag1]="��֮����";
			bag1++;
			cout<<endl;
			Slowsay("�ѳɹ�������֮����*1");
			Sleep(1000);
			goto fox;
		}
		if(ch5==8) {
			goto finish;
		}
		Slowsay("�Բ����޷�ִ�д˲�����������Ϊ��Ҳ��㡢�����ռ䲻����û��������ȷ�����֣�������\n");
		Sleep(2000);
		goto fox;
	}
	if(ch3==4) {
hujia:
		jindu(50);
		qsay("1,Ƥ�ﻤ����װ   ������+45   ְҵ������             ��200\n");
		qsay("2,����������װ   ������+105  ְҵ����սʿ or ʥ��ʿ ��450\n");
		qsay("3,���ƻ�����װ   ������+175  ְҵ����ʦ or �̿�     ��550\n");
		qsay("4,����������װ   ������+295  ְҵ���̿�             ��1000\n");
		qsay("5,����������װ   ������+975  ְҵ��ʥ��ʿ           ��3000\n");
		qsay("6,����������װ   ������+420  ְҵ����ʦ             ��1600\n");
		qsay("7,��ʯ������װ   ������+775  ְҵ����սʿ           ��3000\n");
		qsay("8,����Ƥ����װ   ������+380  ְҵ����ʦ or �̿�     ��1200\n");
		qsay("9,����������װ   ������+210  ְҵ����ʦ             ��800\n");
		qsay("10,����                                  ��ע�⣬�㻹��");
		cout<<jinbi;
		say("���\n");
		Sleep(2000);
		Slowsay("��ѡ��");
		int ch5=0;
		cin>>ch5;
		if(ch5==1&&jinbi>=200&&bag<9) {
			jinbi-=200;
			wuqi[bag]="Ƥ�ﻤ����װ";
			xinneng[bag]=45;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ�����Ƥ�ﻤ����װ��ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch5==2&&jinbi>=450&&(juese=="��սʿ"||juese=="ʥ��ʿ")&&bag<9) {
			jinbi-=450;
			wuqi[bag]="����������װ";
			xinneng[bag]=105;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ���������������װ��ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch5==3&&jinbi>=550&&(juese=="��ʦ"||juese=="�̿�")&&bag<9) {
			jinbi-=550;
			wuqi[bag]="���ʻ�����װ";
			xinneng[bag]=175;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ�������ʻ�����װ��ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch5==4&&jinbi>=1000&&juese=="�̿�"&&bag<9) {
			jinbi-=1000;
			wuqi[bag]="����������װ";
			xinneng[bag]=295;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ���������������װ��ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch5==5&&jinbi>=3000&&juese=="ʥ��ʿ"&&bag<9) {
			jinbi-=3000;
			wuqi[bag]="����������װ";
			xinneng[bag]=975;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ���������������װ��ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch5==6&&jinbi>=1600&&juese=="��ʦ"&&bag<9) {
			jinbi-=1600;
			wuqi[bag]="����������װ";
			xinneng[bag]=420;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ���������������װ��ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch5==7&&jinbi>=3000&&juese=="��սʿ"&&bag<9) {
			jinbi-=3000;
			wuqi[bag]="��ʯ������װ";
			xinneng[bag]=775;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ�������ʯ������װ��ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch5==8&&jinbi>=1200&&(juese=="��ʦ"||juese=="�̿�")&&bag<9) {
			jinbi-=1200;
			wuqi[bag]="����Ƥ����װ";
			xinneng[bag]=380;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ���������Ƥ����װ��ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch5==9&&jinbi>=800&&juese=="��ʦ"&&bag<9) {
			jinbi-=800;
			wuqi[bag]="����������װ";
			xinneng[bag]=210;
			wuqiLV[bag]=1;
			a_f[bag]=false;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ���������������װ��ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch5==10) {
			goto finish;
		}
		Slowsay("�Բ����޷�ִ�д˲�����������Ϊְҵ���ԡ���Ҳ��㡢�����ռ䲻����û��������ȷ�����֣�������\n");
		Sleep(2000);
		goto hujia;
	}
	if(ch3==5) {
		chuanqi:
		jindu(50);
		say("1,������֮��   ������+30%   ְҵ����սʿ or ʥ��ʿ       $1000\n");
		say("2,ħ����֮��   ������+35%   ְҵ����սʿ or ʥ��ʿ       $1500\n");
		say("3,��ձ���     ������+40%   ְҵ��ʥ��ʿ or �̿�         $2000\n");
		say("4,����֮��     ������+50%   ְҵ���̿�                   $3000\n");
		say("5,����������   ������+55%   ְҵ����ʦ                   $4000\n");
		say("6,�Ͼ����     ������+65%   ְҵ������                   $5500\n");
		say("7,�Ųʰ�����   ������+100%  ְҵ����սʿ or ʥ��ʿ       $10000\n");
		say("8,���֮��/��  ������+130%  ְҵ���̿� or ��ʦ           $10000\n");
		say("9,��ֵ\n");
		say("10,����               ��ע�⣺�㻹��");
		cout<<G;
		Slowsay("������\n");
		Sleep(2000);
		Slowsay("��ѡ��");
		int ch6=0;
		cin>>ch6;
		if(ch6==1&&G>=1000&&(juese=="��սʿ"||juese=="ʥ��ʿ")&&bag<9) {
			G-=1000;
			wuqi[bag]="������֮��";
			xinneng[bag]=30;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ�����������֮����ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch6==2&&G>=1500&&(juese=="��սʿ"||juese=="ʥ��ʿ")&&bag<9) {
			G-=1500;
			wuqi[bag]="ħ����֮��";
			xinneng[bag]=35;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ�����ħ����֮����ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch6==3&&G>=2000&&(juese=="ʥ��ʿ"||juese=="�̿�")&&bag<9) {
			G-=2000;
			wuqi[bag]="��ձ���";
			xinneng[bag]=40;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ������ձ�����ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch6==4&&G>=3000&&juese=="�̿�"&&bag<9) {
			G-=3000;
			wuqi[bag]="����֮��";
			xinneng[bag]=50;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ��������֮�У�ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch6==5&&G>=4000&&juese=="��ʦ"&&bag<9) {
			G-=4000;
			wuqi[bag]="����������";
			xinneng[bag]=55;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ��������������ȣ�ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch6==6&&G>=5500&&bag<9) {
			G-=5500;
			wuqi[bag]="�Ͼ����";
			xinneng[bag]=65;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ������Ͼ������ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch6==7&&G>=10000&&(juese=="��սʿ"||juese=="ʥ��ʿ")&&bag<9) {
			G-=10000;
			wuqi[bag]="�Ųʰ�����";
			xinneng[bag]=100;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ������Ųʰ�������ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch6==8&&G>=10000&&juese=="��ʦ"&&bag<9) {
			G-=10000;
			wuqi[bag]="���֮��";
			xinneng[bag]=100;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ��������֮�ȣ�ǰ����������װ��");
			Sleep(2000);
			goto finish;
		}
		if(ch6==8&&G>=10000&&juese=="�̿�"&&bag<9) {
			G-=10000;
			wuqi[bag]="���֮��";
			xinneng[bag]=130;
			wuqiLV[bag]=1;
			a_f[bag]=true;
			Is_pct[bag]=true;
			bag++;
			cout<<endl;
			Slowsay("�ѳɹ��������֮��");
			Sleep(2000);
			goto finish;
		}
		if(ch6==9) {
			chongzhi:
			bool q=true;
			jindu(50);
			cout<<endl;
			cout<<endl;
			Slowsay("                  ��ѡ���ֵ��\n");
			Slowsay("1,5Ԫ   2,10Ԫ   3,20Ԫ   4,50Ԫ   5,100Ԫ   6,500Ԫ   7,����\n");
			Sleep(1000);
			Slowsay("��ѡ��");
			int jine,ch7=0;
			cin>>ch7;
			if(ch7==1) {
				jine=5;
				q=false;
			}
			if(ch7==2) {
				jine=10;
				q=false;
			}
			if(ch7==3) {
				jine=20;
				q=false;
			}
			if(ch7==4) {
				jine=50;
				q=false;
			}
			if(ch7==5) {
				jine=100;
				q=false;
			}
			if(ch7==6) {
				jine=500;
				q=false;
			}
			if(ch7==7) {
				goto chuanqi;
			}
			if(q) {
				Slowsay("�Բ����޷�ִ�д˲���,������");
				goto chongzhi;
			}
			Slowsay("�������������룺");
			string p="";
			cin>>p;
			Slowsay("���ڼ�⣬���Ժ�\n\n");
			Sleep(1500);
			system("cls");
			if(p!="ZTL��ѧ"&&p!="ztl��ѧ"&&p!="ztl����"
			        &&p!="ZTL����"&&p!="ZTLTQL") {
				Slowsay("�Բ����������벻�ԣ�������");
				goto chongzhi;
			}
			jindu(50);
			Slowsay("��ֵ�ɹ�");
			G+=jine*100;
			Sleep(1000);
			goto chuanqi;
		}
		if(ch6==10) {
			goto finish;
		}
		Slowsay("�Բ����޷�ִ�д˲�����������Ϊְҵ���ԡ���Ҳ��㡢�����ռ䲻����û��������ȷ�����֣�������\n");
		Sleep(2000);
		goto chuanqi;
	}
	if(ch3==6) {
		return;
	}
	if(ch3>6||ch3<1) {
		Slowsay("�Բ����޷�ִ�д˲�������Ϊû��������ȷ�����֣�������\n");
		goto chuanqi;
	}
	system("cls");
}
void Inotia() {
	jindu(50);
	tiaose(9);
	cout<<"      ��    ��                              "<<endl;
	cout<<"  ����������������                 ��    ��   "<<endl;
	cout<<"      ��    ��               ��   ����������  "<<endl;
	cout<<"                           ������  ��    ��   "<<endl;
	cout<<"     ��      ��               ��      ��      "<<endl;
	cout<<"������ ����������           ����    ���������� "<<endl;
	cout<<"         ��                �� ����    ��       "<<endl;
	cout<<"       ��  ��             ��  ��    ��������  "<<endl;
	cout<<"     ��      ��               ��   �� ��  ��  "<<endl;
	cout<<"    ��        ��              ��  ��  ������  "<<endl;
	cout<<endl<<endl<<endl;
	cout<<"             ��  	   ��������������  "<<endl;
	cout<<"  ��     ����������	      ��   ��     "<<endl;
	cout<<"������   ��  ��  ��   	 ��   ��   ��   ��"<<endl;
	cout<<"   ��    ����������   	  ��  ��   ��  �� "<<endl;
	cout<<" ��      ��  ��  ��   	    ����   ����   "<<endl;
	cout<<"   ��    ����������   	      ��   ��     "<<endl;
	cout<<" ��                  	      ��   ��     "<<endl;
	cout<<"��������������������       ��������������  "<<endl; 
	Sleep(100);
	cout<<endl;
	tiaose(15);
	Slowsay("��ӭ���ٴι��٣�");
	tiaose(8);
}
bool chuangguan(int k,string Map[30]) {
	system("cls");
	string map[30];
	for(int i=0;i<=16;i++)
	{
		map[i]=Map[i];
	}
	system("cls");
	Sleep(2000);
	if(Is_first[k]) {
		Is_first[k]=false;
		if(k==11) {
			int sp=rand()%10;
			Slowsay("�����ڳ���������ʯ���鶴�����ȫ�Ǹ��õ���ʬ����ɭɭ�İ׹ǣ���������Щ����Ŀ��׺Ͷ��ѵĵ���������֮ǰ��������ַ�����ħ������ʿ\n");
			Sleep(2000);
			Slowsay("��һ�뵽����ħ�����ܻ������˷��˹���������̲�ס����һ������\n");
			Sleep(2000);
			system("cls");
			Slowsay("��������,ǰ�����������·���м���һ���������õ����ӣ�����д�š���");
			Slowsay("            �¸ҵ�Ӣ�۰�����������ָ����\n");
			say("����������������������������������������������������������\n");
			say("���������Աߵ��Ƕ�ħ��      ����ħ˵�Ļ��ǰ����٣�������\n");
			say("��������ָ��������֮·      �����ԱߵĲ��ǳɹ�֮·  ������\n");
			say("����������������������������������������������������������\n\n\n");
			Sleep(1000);
			Slowsay("��Ҫ������·��   L/R\n");
			char f;
			cin>>f;
			if(f=='L') {
				Sleep(1000);
				system("cls");
				Sleep(1500);
				Slowsay("��ᶨ�������������εķ�����ȥ\n");
				Sleep(1000);
				Slowsay("��ʱ���㷢��ǰ����һ���޴����Ӱ���ڵ�����\n");
				Sleep(2000);
				Slowsay("���ս��������������Ǹ���Ӱ����ȥ����\n");
				Sleep(2000);
				Slowsay("�㷢�֣��Ǹ���Ӱ���ǡ�����������������������Ѱ���˶���ľ���ħ������\n");
				Sleep(1000);
				Slowsay("�ս����ſ����������ϱ�ĳ�����صĶ����˺������ⲻ����ˣ�Ҳ������ˣ����������ˡ�������ܾ���ħ���������Ǹ����˲���Ķ�����\n");
				Sleep(1000);
				Slowsay("���Ա߻���һ�����������ӣ�������Ƕ���̱�ʯ��ˮ������ʯ���ƽ𡣴�һ������");
				Sleep(1500);
				Slowsay("����װ��һ��ֽ��������д�š���\n");
				Sleep(2000);
				Slowsay("�ȴ�ǧ�����ʿ��������ħ���ı����Ѿ����������ˣ����û����Ļ����������Ӵ�ɽ�������Ұɡ�����ס������������ѣ�Ҳ����ĵ���\n");
				Sleep(3000);
				Slowsay("�����Ӵ�ɽ�������Ǳ��صĹ���������������ȥ��������\n");
				Sleep(1500);
				Slowsay("�ܾúܾã�һ���Ĭ������������\n");
				Sleep(2000);
				system("cls");
				Slowsay("����ô�����Ǿ�ȥ��qwq��\n");
				Sleep(1000);
				Slowsay("��ιιι���һ�û����ء�\n");
				Sleep(1000);
				Slowsay("��������ɶ�룬������~��������\n");
				Sleep(1000);
				system("cls");
				Sleep(1000);
				Slowsay("���Ӵ�ɽ�����Ƹߣ�ɽ���գ��������ɲ�����ô����\n");
				Sleep(1000);
				Slowsay("�������Ķ��ѣ�ȥ�������Ӵ�ɽ����\n");
				Sleep(1200);
				Slowsay("����һ�ߺ����������ţ�һ�߹۲�ɽ�������\n");
				Sleep(1500);
				system("cls");
				Sleep(1000);
				Slowsay("��������������������������������������������������������������������������ȿȣ��ȿȣ�������������");
				Sleep(1000);
				Slowsay("���ǵģ��������ˡ�\n");
				Sleep(1000);
				Slowsay("��Ӵ��������������˼������֣�ֻ�ǣ��ߺ�~~��\n");
				Sleep(2000);
				Slowsay("����ѱ��ؽ���������\n");
				Sleep(1000);
				Slowsay("����Ҫ���أ��ȹ�����һ�أ��Ȱ�!��\n");
				Sleep(1500);
				Slowsay("���˳��������������㻹���ԭ�ص�ʱ������һ��������ʳ��ʹ�ý���ס��ǿ��Ĺ�����˫����ײ���ŷ���ҫ�۵Ļ𻨣�������ţ���ͳ����������ಡ��������ֻ��������������һ�ӽ���������ˣ���ʿ���Ա�һ���ʯһ��������ʯ�顰��¡��һ������������ͷ�ϣ�����һ���ҳ�\n");
				Sleep(2000);
				Slowsay("���˵Ķ���һ���ǳɣ�������Ŀ�ɿڴ�\n");
				Sleep(1000);
				Slowsay("���Ǻǣ�ûɶ�ģ����Ƿ�Ӧ�������ˣ����ˣ���˵�ˣ��Ͻ��ұ��ذɡ�\n");
				Sleep(2000);
				system("cls");
				Slowsay("���ߺߣ�������Ϊ������ô���ױ���ܵ���̫�����ˣ���\n");
				Sleep(500);
				Slowsay("��ʱ��ʯͷ��ž��һ�����ˣ��������˳�������\n");
				Sleep(2000);
				if(zhandou("???",-2)) {
					Slowsay("�������������ܣ�����ô�����ױ�������Щ������ܣ�����\n");
					Sleep(1000);
					Slowsay("���ߣ����Ѿ��������ˣ�����û�С��������Ž�����������������ֹ�Ƨ���ˣ���������Ҳ������һ���ŶӵĹ�����������Ƥ��������������Ǻǣ����������ԣ��Կ�����ǰ���ݰݡ�\n");
					Sleep(500);
					Slowsay("������������������\n");
					Sleep(1000);
					Slowsay("����¡����������\n");
					Sleep(4000);
					system("cls");
					Slowsay("��~\(�R���Q)/~,����Ӯ�ˣ������о��ˣ�����\n");
					Sleep(3000);
					system("cls");
					Slowsay("�����ڻ����ǻ�����ʱ��Ҫ�Ͻ��ҵ����ز��У���\n");
					Sleep(1000);
					Slowsay("���٣����ǿ����ǲ������!��\n\n\n");
					Sleep(1000);
					Slowsay("����˵�ž�����һ�ѳ���\n");
					Sleep(2000);
					Slowsay("\n\n");
					Slowsay("�����ǰɣ�������ɡ�\n");
					Sleep(1000);
					Slowsay("SuperHunter������һ���䵶\n");
					Sleep(2000);
					Slowsay("\n\n");
					Slowsay("���٣����ﻹ��һ�ѣ���\n");
					Sleep(1000);
					Slowsay("��������һ�ѷ����\n");
					Sleep(2000);
					system("cls");
					Slowsay("(��v��)�š����������ĸ�����\n");
					Sleep(1000);
					system("cls");
					Slowsay("���ߣ��϶����ĸ���Ҫ���ļһ�Ū���������ǵİ�Ϸ����\n");
					Sleep(1000);
					Slowsay("�����Ǿ��ǣ�˵�����ô�����������ͺ�¡һ���ҷ����𣡡�\n");
					Sleep(2000);
					system("cls");
					Slowsay("��ʱ�����˵�Ŀ�ⶼת������\n");
					Sleep(1000);
					Slowsay("���ɡ�����������������ҡ�����\n");
					Sleep(1000);
					Slowsay("��");
					Slowsay(name);
					Slowsay("���㻹�ǵó���˵�Ļ���������������ľ�������һ�н����������������ǵ�����ֻ�Ǳ�������ѡ�\n");
					Sleep(2500);
					Slowsay("���ţ��ðɡ�\n");
					Sleep(1000);
					system("cls");
					Slowsay("����ϸ���˿�����������\n");
					say("1������    �������⣬�����л�����Ϊ��������������Ҳ�����Ŀ��ż�����\n");
					say("2���䵶    �����͵��ж���û���κεĻ���װ�Σ�������Щ�ط�����ĥ��\n");
					say("3�������  �����������ң��ֱ�����һЩ�������֣����������أ�ɱ���������������\n");
					Sleep(2000);
					Slowsay("��Ҫѡ����һ������Ͷ��ž���\n");
					int last;
					cin>>last;
					if(last==1) {
						Sleep(2000);
						system("cls");
						Slowsay("������ȫ����ʹ�����ѵ�������Ҫ�����𣿡�\n");
						Sleep(2500);
						system("cls");
						The_end(3);
					} else {
						system("cls");
						Sleep(1500);
						Slowsay("ֻ�����״���һ�����۵�������ʮ���һ��Ӱ�ӴӾ��ױĳ������ţ����ʲôҲ��֪���ˡ���\n"); 
						Sleep(2000);
						system("cls");
						The_end(2);
					}
				
					Is_end=true;
				} else {
					system("cls");
					Slowsay("������������Ȼ���������ϣ������һ����֪��ߵغ�ļһ�����㣬�뵱Ӣ��û��ô���ף����������ټ�������\n");
					Sleep(2500);
					system("cls");
					Slowsay("������...��\n");
					Sleep(2000);
					system("cls");
					Slowsay("���ҡ����Ҿ���ô�����𣿡�\n");
					Sleep(2000);
					Wend=false;
					return false;
				}
			} else {
				Sleep(2000);
				system("cls");
				Sleep(1500);
				Slowsay("��ᶨ�������������εķ�����ȥ\n");
				Sleep(1500);
				system("cls");
				Slowsay("��ʱ����Ϳ����˾���ħ�����������ڵ�վ��������ǰ\n");
				Sleep(1000);
				system("cls");
				Slowsay("��˭�������ҵ���ʥ�����Ҿ������ǣ�����������������������Ƕ��Ѿ�������\n");
				Sleep(1500);
				Slowsay("����������Ҳ���Ϊ��Щ�һ��е�һԱ������������������԰ɡ�\n");
				Sleep(1000);
				if(zhandou("����ħ��",17)) {
					Sleep(2500);
					Slowsay("���ߣ���С�Ӳ������ʱ���֤���������ڶ�Ѩ������ǧ��Ľ���ˣ�ѽ������������\n");
					Sleep(1500);
					Slowsay("��ʱ��ƽ�ر���һ���⡪�����Ե�������������ȫ��ֲ�뵽����ħ���������ˣ�����\n");
					Sleep(2000);
					Slowsay("�������㣬��Ӣ��û��ô���ף����ǿ�ˣ����������Ҳ����κ������Ϳ��Զ������ǡ�\n");
					Sleep(2000);
					system("cls");
					Slowsay("��ʱ���㷢����һ����һ�����������ӡ���\n");
					Sleep(1000);
					system("cls");
					Slowsay("�����У������������Դ��У������������������ϣ������������취������\n");
					Sleep(1000);
					Slowsay("������ô�죬�����𣬶����Ѿ��������ˣ�����\n");
					Sleep(1000);
					Slowsay("������");
					Slowsay(name);
					Slowsay("����������������������ǣ�����ȴ���ǣ����ӵ�����������������������û�У����ԡ�����\n");
					Sleep(1000);
					system("cls");
					Slowsay("�����������˼�ǣ�����һ����ȥ��ɱ����ħ����������һ�����ڰ���ϳԹ����𣿣���\n");
					Sleep(500);
					Slowsay("�����ǣ�������˵���ˣ�����ȥ���ն����㱣���ý�����������䷽������ȥ������Ҹ�����ʹ����ı�ɱ����һ���ʹ������\n");
					Sleep(1500);
					system("cls");
					Slowsay("��������ղ�˵���Ǿ仰��ʲô���أ���\n\n");
					Sleep(1000);
					Slowsay("����ѽ��������Сϸ������\n");
					Sleep(1500);
					system("cls");
					Slowsay("��ʱ������ħ���Ѿ������˵��������������һ�������ǳ���\n");
					Sleep(500);
					Slowsay("��ִ�мƻ�����\n");
					Sleep(500);
					Slowsay("���ϡ�SuperHunterһ�������ȥ������ȴ��һ�ԣ��ս��˽�������������䷽��Ѱ��͵Ϯ�ĺ�ʱ��\n");
					Sleep(1000);
					Slowsay("��ʱ������ħ��һ��˶���ȭͷ����һ����������SuperHunter�Ļ����ϣ�˲�䣬���ܱ����飬��Ҳ�ʻ���״������ˣ����ű����ص�ˤ��10�׿���ĵ���\n");
					Sleep(1000);
					Slowsay("����������������������");
					if(juese=="��ʦ") {
						Slowsay("������һ���޴�Ļ��򡭡���!!\n");
						Sleep(1000);
					} else {
						Slowsay("�ݺݵظ��˾���ħ��һ���ػ�������!!\n");
						Sleep(1000);
					}
					Slowsay("�����˸����ģ�������һ�������Բ�̫��\n");
					Sleep(1000);
					Slowsay("����ȴ����ת��ͷ����һ��ץס����\n");
					Sleep(1000);
					system("cls");
					Slowsay("���۰���������\n");
					Sleep(1000);
					Slowsay("���ߺߣ���ԭ��Ҳֻ�Ǹ����ҷϰ��������ˣ�������������������\n");
					Sleep(2000);
					system("cls");
					Slowsay("��ʱ�����ϲ�֪��ô�����϶���һ������������������ű������Ǹ�����\n");
					Sleep(1000);
					system("cls");
					Slowsay("���⡭������ô���ܣ��Ǹ���˵�еı��ء�����\n");
					Sleep(1000);
					system("cls");
					Slowsay("��ʱ������ħ��ת��ͷ�������յ�Ц�ˣ����ٺ٣��һ���Ϊ��ʲô�����أ�����Ҷ���������ԭ��ֻ��һ������������������������\n");
					Sleep(2500);
					system("cls");
					Slowsay("˵�ţ��͡��顱һ������˦��ǽ�ϣ�Ȼ���ۡ�������һ�����Ὡ��Һ����\n");
					Sleep(3000);
					system("cls");
					Slowsay("������ʱ���������ϵ�����ͻȻ��������ɹ�â�������Ǹ����������γ���һ�ѽ�����״\n");
					Sleep(1000);
					system("cls");
					Slowsay("�������̾����ǰѽ���ȼ�յı�������׼����ħ�������ţ�����һ����\n");
					Sleep(2000);
					system("cls"); 
					Slowsay("��~~~\n");
					Sleep(1000);
					system("cls");
					Slowsay("��What the����\n");
					Sleep(2000);
					Slowsay("����ħ���鴤��һ�£��㵹�ڵ��ϣ�����\n");
					Sleep(2000);
					system("cls");
					Slowsay("����Ҫ�ۡ�������ʱ����������µĲ�λ�Ѿ�ȫ���������ˡ������ˣ�ȫ���ˣ���Ȼ�н�ҩ�䷽�����ֲ����ֲ��룬�ҿ������ֲ�֪�����Ӵ�ɽ�����ġ���\n");
					Sleep(2000);
					system("cls");
					Slowsay("��㱼䣬�������˹�������������Ľ�ҩ�䷽��˵�����Բ���");
					Slowsay(name);
					Slowsay("������û�ܽ��㱣�����ף�������ģ����ǻ���������ҩ�ģ����У���ʹ�߱����ĺ��ǣ�����ҲҪ�ҵ����Ӵ�ɽ����Ȼ�����ȵ��������ˣ�ף�������ð�Ϣ������\n");
					Sleep(2000);
					Slowsay("�������ϱ�����˽�����\n");
					Sleep(2000);
					system("cls");
					Slowsay("���ǲ���\n");
					Sleep(2000);
					system("cls");
					The_end(1);
					return true;
				}
				else
				{
					system("cls");
					Slowsay("������������Ȼ���������ϣ������һ����֪��ߵغ�ļһ�����㣬�뵱Ӣ��û��ô���ף����������ټ�������\n");
					Sleep(2500);
					system("cls");
					Sleep(2000);
					system("cls");
					Slowsay("���ҡ����Ҿ���ô�����𣿡�\n");
					Sleep(2000);
					Wend=true;
					return false;
				}
			}
		}
	}
	HideCursor(0);
	int x;
	int y;
	for(int i=0;i<=16;i++)
	{
		for(int j=0;j<=23;j++)
		{
			if(map[i][j]=='O')
			{
				x=i;
				y=j;
			}
		}
	}
	bool Is_win=false;
	int p=rand()%6;
	draw(map,k,p);
	while(1) {
		HideCursor(0);
		if(map[x+1][y]=='g'||map[x][y+1]=='g'||map[x-1][y]=='g'||map[x][y-1]=='g')
		{
			system("cls");
			qsay("��������");
			qsay(monster[(k-1)*2]);
			qsay("��\n");
			Sleep(500);
			int mhp=monsterHP[(k-1)*2];
			if(zhandou(monster[(k-1)*2],(k-1)*2))
			{
				monsterHP[(k-1)*2]=mhp;
			}
			else
			{
				return false;
			}
			if(map[x+1][y]=='g'){map[x+1][y]=' ';}
			if(map[x][y+1]=='g'){map[x][y+1]=' ';}
			if(map[x-1][y]=='g'){map[x-1][y]=' ';}
			if(map[x][y-1]=='g'){map[x][y-1]=' ';}
			draw(map,k,p);
		}
		if(map[x+1][y]=='B'||map[x][y+1]=='B'||map[x-1][y]=='B'||map[x][y-1]=='B')
		{
			system("cls");
			qsay("��������");
			qsay(monster[(k-1)*2+1]);
			qsay("��\n");
			Sleep(200);
			int mhp=monsterHP[(k-1)*2+1];
			if(zhandou(monster[(k-1)*2+1],(k-1)*2+1))
			{
				monsterHP[(k-1)*2+1]=mhp;
			}
			else
			{
				return false;
			}
			if(map[x+1][y]=='B'){map[x+1][y]=' ';}
			if(map[x][y+1]=='B'){map[x][y+1]=' ';}
			if(map[x-1][y]=='B'){map[x-1][y]=' ';}
			if(map[x][y-1]=='B'){map[x][y-1]=' ';}
			draw(map,k,p);
		}
		if(map[x+1][y]=='S'||map[x][y+1]=='S'||map[x-1][y]=='S'||map[x][y-1]=='S')
		{
			Is_win=true;
			break;
		}
		if(map[x+1][y]=='?'||map[x][y+1]=='?'||map[x-1][y]=='?'||map[x][y-1]=='?')
		{
			system("cls");
			if(choose())
			{
				if(map[x+1][y]=='?'){map[x+1][y]=' ';}
				if(map[x][y+1]=='?'){map[x][y+1]=' ';}
				if(map[x-1][y]=='?'){map[x-1][y]=' ';}
				if(map[x][y-1]=='?'){map[x][y-1]=' ';}
			}
			else
			{
				return false;
			}
			draw(map,k,p);
		}
		if(map[x+1][y]=='M'||map[x][y+1]=='M'||map[x-1][y]=='M'||map[x][y-1]=='M')
		{
			shop();
			system("cls");
			map[x][y]=' ';
			x++;
			map[x][y]='O';
			draw(map,k,p);
		}
		if(map[x+1][y]=='F'||map[x][y+1]=='F'||map[x-1][y]=='F'||map[x][y-1]=='F')
		{
			system("cls");
			Slowsay("�Ƿ��˳���Ϸ��  Y/N\n");
			char ch;
			cin>>ch;
			if(ch=='y'||ch=='Y')
			{
				Inotia();
				POF();
				Sleep(1000);
				exit(0);
			}
			system("cls");
			map[x][y]=' ';
			x++;
			map[x][y]='O';
			draw(map,k,p);
		}
		if(map[x+1][y]=='N'||map[x][y+1]=='N'||map[x-1][y]=='N'||map[x][y-1]=='N')
		{
			system("cls");
			Slowsay("�������ˣ�������ǰ����������������𣿡�     Y/N\n");
			char ch;
			cin>>ch;
			if(ch=='Y'||ch=='y')
			{
				if(!slt())
				{
					return false;
				}
				x++;
			}
			system("cls");
			map[x][y]=' ';
			x++;
			map[x][y]='O';
			draw(map,k,p);
		}
		if(map[x+1][y]=='L'||map[x][y+1]=='L'||map[x-1][y]=='L'||map[x][y-1]=='L')
		{
			Train_skill();
			map[x][y]=' ';
			x++;
			map[x][y]='O';
			draw(map,k,p);
		}
		if(map[x+1][y]=='H'||map[x][y+1]=='H'||map[x-1][y]=='H'||map[x][y-1]=='H')
		{
			Bag();
			system("cls");
			map[x][y]=' ';
			x++;
			map[x][y]='O';
			draw(map,k,p);
		}
		char a;
		a=getch();
		guangbiao(y+3,x+2);
		cout<<" ";
		if(a=='w'&&map[x-1][y]!='#')
		{
			map[x][y]=' ';
			map[x-1][y]='O';
			x--;
		}
		if(a=='s'&&map[x+1][y]!='#')
		{
			map[x][y]=' ';
			map[x+1][y]='O';
			x++;
		}
		if(a=='a'&&map[x][y-1]!='#')
		{
			map[x][y]=' ';
			map[x][y-1]='O';
			y--;
		}
		if(a=='d'&&map[x][y+1]!='#')
		{
			map[x][y]=' ';
			map[x][y+1]='O';
			y++;
		}
		guangbiao(y+3,x+2);
		cout<<'O';
	}
	HideCursor(1);
	return Is_win;
}
void Task()
{
	HideCursor(0);
	system("cls");
	Sleep(1000);
	getline(cin,s);
	if(!Can_into)
	{
		Slowsay("Now Task:");
		Slowsay(mission[rate]);
		Sleep(2000);
		HideCursor(1);
		system("cls");
		return ;
	}
	if(rate!=0)
	{
		Slowsay("������ɣ���ϲ��þ���ֵ��");
		cout<<reward[rate-1]<<endl;
		EXP+=reward[rate-1];
		upgrade();
	}
	Sleep(1000);
	system("cls");
	Slowsay("***\n");
	getline(cin,s);
	system("cls");
	switch(rate)
	{
		case 0:{
			Slowsay("���������ߣ������ˣ���\n");
			getline(cin,s);
			Slowsay("���ǵģ������ˣ���Ϊ��������ˣ���\n");
			getline(cin,s);
			Slowsay("���ܺã���־������ô������֪���Լ����縺�����εģ��԰ɣ���\n");
			getline(cin,s);
			Slowsay("���ǵģ���\n");
			getline(cin,s);
			system("cls");
			Slowsay("��������ֵ�������£�������������Ψһϣ���ˣ�Ϊ�����������ʤ���������𣿡�\n");
			getline(cin,s);
			Slowsay("�����ף���\n");
			getline(cin,s);
			Slowsay("���á���������һЩ�ҵ����������µĹ��ھ���ħ���ıʼǡ������Ⱦ��Ƕ������ħ���ĵ�9578���ˡ�\n");
			getline(cin,s);
			system("cls");
			Slowsay("������˵���ھ������������Զ����һ������˪�粿��ĵط��������ס���������ǰ�ͺ�������������������ˡ�\n");
			getline(cin,s);
			Slowsay("����ȥ�������ǵĳ��ϣ��������������������ĶԲߡ�\n");
			getline(cin,s);
			system("cls"); 
			Slowsay("����ô���Ȿ�ʼǾ͸����ˣ��Ա��ں����ǽ�����\n");
			getline(cin,s);
			system("cls");
			Slowsay("��ã�Զ�űʼǣ�����ļ�֤��\n");
			getline(cin,s);
			system("cls");
			Slowsay("�����ˣ�����ǰ�����ȥ�����䣬˳�����Щ��ң��������������������װ������\n");
			getline(cin,s);
			system("cls");
			Slowsay("��ý�ҡ�2000\n");
			jinbi+=2000;
			getline(cin,s);
			system("cls");
			Slowsay("������~~��~~�ɣ���ʿ��ȥ�������磡��\n");
			getline(cin,s);
			system("cls");
			tiaose(12);
			Slowsay("���յ�����");
			Slowsay(mission[rate+1]);
			tiaose(14);
			Sleep(1500); 
			system("cls");
			Can_go[2]=true;
			rate++;
			Can_into=false;
			break;
		}
		case 1:{
			Slowsay("����ô������\n");
			getline(cin,s);
			Slowsay("���ţ�����˵������þ�����������ɱ����ħ����\n");
			getline(cin,s);
			Slowsay("������ô������ʲô�����𣿡�\n");
			getline(cin,s);
			Slowsay("�������˵����ħ��̫Ϊǿ�������������������̫�����ˡ�\n");
			getline(cin,s);
			system("cls");
			Slowsay("���ţ�����ħ����ս������Ⱥ�����˵�����������������ַ������ˣ����������QAQ�������Ҫ�ȵ������ħ�������൱��ʱ����п��ܴ���������������ҽ���һ�λ��ᡱ\n");
			getline(cin,s);
			Slowsay("����ô$$ɧ$$�ģ���\n");
			getline(cin,s);
			Slowsay("���ǵģ����ԣ�Ҫ�����ģ�һ�������������ȥ���������������\n");
			getline(cin,s);
			system("cls");
			Slowsay("����֪�������𣿡�\n\n");
			getline(cin,s);
			Slowsay("��Ȼ�������Ǹ�����������������ľ�����\n");
			getline(cin,s);
			system("cls");
			Slowsay("˵��û����˵��ʼ����ʮ����ʱ��������ɽ���˴���һ�۵�֮����������\n\n");
			getline(cin,s);
			system("cls");
			Slowsay("����˵����Ψһ�ܻ��ܾ���ħ���ķ�����\n");
			getline(cin,s);
			system("cls");
			Slowsay("����Σ��ʱ�̣���ѽ����ͷų�ǿ�������������������ʮ�룬�ֽ���Ҫ����ʮ���ڽ������ڵ���ͷ�ϣ����˵��Դ��ͻῪ�������\n");
			getline(cin,s);
			system("cls");
			Slowsay("��ֻ����ѽ�����ʧ���ˣ���֪��������˭���������\n");
			getline(cin,s);
			system("cls");
			Slowsay("��Ҳ����˵�ұ����ҵ��ǰѽ����п��ܻ��ܾ���ħ������\n\n");
			getline(cin,s);
			Slowsay("���Ҿ����ǵ���һ�������������\n");
			getline(cin,s);
			system("cls");
			Slowsay("�������ˣ������ˣ���\n");
			getline(cin,s);
			system("cls");
			Slowsay("������ʲô���ˣ���\n");
			getline(cin,s);
			Slowsay("�������ˣ��ϱߵķ�����ǽ�������ˣ�һ��ѹ�ӿ�����ϱߵ���أ��ܿ��Ҫ�����ǵĴ����ˣ���\n");
			getline(cin,s);
			system("cls");
			Slowsay("������ô��......�죬�д���ǿ׳�����˶���������أ������������ǽ�������\n");
			getline(cin,s);
			Slowsay("�����ǣ�����̫���ˣ������ز�ס��\n");
			getline(cin,s);
			Slowsay("�����ض���ض�ã�֪ͨ����������ǰ������������\n");
			getline(cin,s);
			Slowsay("���ǣ���\n");
			getline(cin,s);
			system("cls");
			Slowsay("��ʱ�䲻���ˣ�Ҫ���㱻���ﵱ��ҹ�����Ͳ��ˡ�����������\n");
			getline(cin,s);
			Slowsay("���Ҹ���������һ����顪��SuperHunter�������Ǵ������������һλ���ˣ��ַ�����ħ����;����������һ��֮���ģ���\n");
			getline(cin,s);
			Slowsay("����ඡ�\n");
			TD++;
			getline(cin,s);
			system("cls");
			Slowsay("����������˵һ�仰����\n");
			getline(cin,s);
			system("cls");
			Slowsay("�������ǵ��˲����뿪���ǣ�������Զ�������ǵ����С�\n");
			getline(cin,s);
			system("cls");
			Slowsay("��ȥ�ɣ���ĸ�ĸ���ڿ������ء�\n");
			getline(cin,s);
			system("cls");
			Slowsay("���ܵ�����");
			Slowsay(mission[rate+1]);
			Sleep(1500);
			Can_go[1]=false;
			Can_into=false;
			break;
		}
	}
}
bool shuangfeng() {
	system("cls");
	if(Is_first[4]) {
		tiaose(14);
		getline(cin,s);
		Slowsay("***\n"); 
		getline(cin,s);
		system("cls");
		Slowsay("���������ţ�����˪�粿����ſڣ�ͻȻ����");
		getline(cin,s);
		system("cls");
		Slowsay("��վס������ʲô�ˣ������������ǲ��壡��\n");
		getline(cin,s);
		Slowsay("��������˭����\n");
		getline(cin,s);
		Slowsay("������˪�粿�俴���˿���������͵͵�����������ʲô������");
		getline(cin,s);
		system("cls");
		Slowsay("��������ֵܣ���ֻ�ǹ��������ǳ������Ĺ��ھ���ħ�����¡�\n");
		getline(cin,s);
		Slowsay("��ʲô�����Ѳ������Ǿ���ħ���ļ�������������������\n");
		getline(cin,s);
		Slowsay("�����ǵĲ��ǵģ���ֻ��һ���޹��ĺ��Ӷ���>_<�����Ź��Ұ�~��\n");
		getline(cin,s);
		Slowsay("����˵�ϻ������У���");
		if(!zhandou("������",-5)) {
			return false;
		}
		Is_first[4]=false;
		getline(cin,s);
		Slowsay("���������㻹����ˢ���\n");
		getline(cin,s);
		Slowsay("���Ҷ�˵�ˣ�����Ҫ����������ϵġ�\n");
		getline(cin,s);
		system("cls");
		Slowsay("���ðɣ��Ҵ����ȥ��\n");
		Sleep(1000);
		system("cls");
		Sleep(1000);
		Slowsay("[˪�粿�䣬����֮��]\n");
		Sleep(1000);
		system("cls");
		getline(cin,s);
		Slowsay("����ô˵������ʼ��ǡ��������𣿡�\n");
		getline(cin,s);
		Slowsay("���ǵģ������������ħ���йء�\n");
		getline(cin,s);
		Slowsay("����������֪������ħ������ʲô���㣬������������̫Σ���ˣ��Բ�����ͻᱻ����ɱ����\n");
		getline(cin,s);
		Slowsay("���ǵģ����ǣ����Ǳ�����ɻ��˾���ħ����ʹ������\n");
		getline(cin,s);
		Slowsay("����֪�������Ҿ��ã����ھ͸öԾ���ħ�������������Ϊ����������~~����~~��Ϣ����\n");
		getline(cin,s);
		system("cls");
		Slowsay("�����ڣ���...�е�̫���˰ɡ�\n");
		getline(cin,s);
		Slowsay("�����ܵȵ�ɶʱ�򣿹������ʱ�䣬����ħ���ͻ�~~����~~��Ϣ��ϡ�\n");
		getline(cin,s);
		Slowsay("���á������������̾�ȥ���˾���ħ�����ϳ�����\n");
		getline(cin,s);
		system("cls");
		Slowsay("����Ա��˳����ǰɣ���֪������ħ��Ϊʲô�ܳưԵ��������������ݱ��𣿾���Ϊ��̫̫̫̫̫ǿ�ˣ���������Ծ������޴����������塣���ڹ�ȥ������������\n");
		getline(cin,s);
		system("cls");
		Slowsay("���ðɡ�������\n"); 
		getline(cin,s);
		system("cls");
		Slowsay("�����ԣ�����Ҫ�����ģ���������\n");
		getline(cin,s);
		system("cls");
		Slowsay("�����ˣ�֮ǰ������һ�������������ˣ�ȫ��ֻ�������о����������������Ҳֻ�����ᡣ��ϧ�����������Ž�ҩ�������������Ѱ�����һ������ʱ������Ҳû�����ˡ�����\n");
		getline(cin,s);
		system("cls");
		Slowsay("�������������ʲô����\n");
		getline(cin,s);
		system("cls");
		Slowsay("���ף����㶼��֪��������һ�ֿ������������Ὡ��Һʯ��Ч����ҩˮ�����������һֻ����ץס����������ˣ���ͻ��Ϊ���ҵس�Ϊ������͡��������ͻ���һ�����Ὡ��Һ�͸��㣬����������������ؽ���ʯ����\n");
		getline(cin,s);
		system("cls");
		Slowsay("���������������������䷽���Ҿͽ������ˡ���Ҫ֪�������������Ѿ������ˣ��������ǰ���������ˣ��������Ǳ������ڴ��\n");
		getline(cin,s);
		system("cls");
		Slowsay("��ã�����������䷽��ȫ���ϣ����\n");
		getline(cin,s);
		system("cls");
		Slowsay("�������������ţ���һ�����Գɹ��ģ���\n");
		getline(cin,s);
		system("cls");
		Slowsay("�����У�Ϊ�˰���ɹ���ܾ���ħ�������ص�������˪�粿����Ϊǿ���սʿ��Э���㡱\n");
		getline(cin,s);
		Slowsay("��������λ�������ϣ������ո�ǿ�����̳�Ⱥ����������ĺð��֡�\n");
		getline(cin,s);
		Slowsay("����л��л��\n");
		getline(cin,s);
		system("cls");
		Slowsay("����ס��������������ľ�������һ������������������������˲���������\n");
		getline(cin,s);
		Slowsay("�����ˣ�ʱ�䲻���ˣ���Ͻ��߰ɣ�ȥ������ʹ������\n");
		getline(cin,s);
		system("cls");
		Slowsay("��Ŷ�����ˣ�Ϊʲô�ղ�����������ô���أ���\n");
		getline(cin,s); 
		Slowsay("����������������ྐྵȻ��������ͽ���������ħ�����ϴ����ǵĺö���ֶ���Ϊ������ͽ����ɱ�ˡ�\n");
		getline(cin,s);
		Slowsay("����......��\n");
		getline(cin,s);
		Slowsay("��������������������˰ɡ�������\n");
		getline(cin,s);
		system("cls");
	}
	return chuangguan(4,map4);
}


void game() {
	if(!Is_save)
	{
		begin:
		jindu(50);
		HideCursor(0);
		cout<<endl;
		cout<<endl;
		Slowsay("                           ��ѡ��һ����ɫ��            ");
		cout<<endl;
		Sleep(500);
		qsay("  1,��սʿ������ŭΪ��������ʹ����Ѫ�����������������Ѫ�����ߣ���������ǿ��������һ����ص�");
		cout<<endl<<endl;
		Sleep(1000);
		qsay("  2,ʥ��ʿ����Ϊ����ĺ��ģ����������κ�һ�����ѡ�����Ѫ���ߣ���������ǿ��������һ����ص�");
		Sleep(1000);
		cout<<endl<<endl;
		qsay("  3,�̿ͣ������İ�ɱ�ߣ��ж�Ѹ�٣��������þ綾�������ˣ�ʹ�Է�������Ѫ������Ѫ��һ�㣬������һ�㣬��������ǿ���ص�");
		Sleep(1000);
		cout<<endl<<endl;
		qsay("  4,��ʦ���������û��ף���Ԫ�����������ˣ������ٻ�ʯħ����ɢ����ע����������Ѫ���������������������������ص�");
		Sleep(1000);
		cout<<endl<<endl;
		Slowsay("��ѡ��");
		HideCursor(1);
		int ch1=0;
		cin>>ch1;
		if(ch1==1) {
			juese="��սʿ";
			choosejn=0;
			HP=1000;
			MP=300;
			ATK=85;
			fang=120;
			maxHP=1000;
			maxMP=300;
			maxEXP=100;
		}
		if(ch1==2) {
			juese="ʥ��ʿ";
			choosejn=1;
			HP=800;
			MP=250;
			ATK=80;
			fang=180;
			maxHP=800;
			maxMP=250;
			maxEXP=100;
		}
		if(ch1==3) {
			juese="�̿�";
			choosejn=2;
			HP=600;
			MP=300;
			ATK=120;
			fang=90;
			maxHP=600;
			maxMP=300;
			maxEXP=100;
		}
		if(ch1==4) {
			juese="��ʦ";
			choosejn=3;
			HP=450;
			MP=400;
			ATK=200;
			fang=75;
			maxHP=450;
			maxMP=400;
			maxEXP=100;
		}
		if(ch1!=1&&ch1!=2&&ch1!=3&&ch1!=4) {
			Slowsay("������1����4�ڵ�����������");
			Sleep(2000);
			goto begin;
		}
		jindu(50);
		Sleep(1000);
		if(MessageBox(NULL,"�Ƿ���������?(���ֽ��鲻����)","��ŵ����5:����ħ���ľ���",MB_YESNO)!=6) {
			stop_time+=15;
			tiaose(3);
			system("cls"); 
			Slowsay("����������������\n");
			Slowsay("����������������\n");
			Sleep(2000);
			system("cls");
			Slowsay("����һ�γ������ʷ\n");
			Sleep(2000);
			system("cls");
			Slowsay("������1309�꣬Ҳ���Ǵ�Լ��ǧ��������ǰ�����汬����һ���Ǽ�ս��\n");
			Sleep(2000);
			system("cls");
			Slowsay("�ɺڰ�����������콢�����ɴ���֮������ĳ��ս���������ϵ�в���ս\n");
			Sleep(2000);
			system("cls");
			Slowsay("˫��������ս����ʮ���ң���ս�ƲҲ��̶�\n");
			Sleep(2000);
			system("cls");
			Slowsay("������2019�꣬�ⳡ�������߰�һʮ���ս��ʹ��˫��ս��ֻʣ������ɢɢ��ʮ��\n");
			Sleep(2000);
			system("cls");
			Slowsay("�ڰ������վ�����ʯ��٣����Ƚ�ʣ�µ���ʮ����ս����ɱ���Ȧ�����Լ���ָ�ӽ������ڱ���Ȧ�м䡣����������϶Դ���֮�����ڵ�̩̹�Ƿ����ˡ������ӡ��ƻ�\n");
			Sleep(2000);
			system("cls");
			Slowsay("Ȼ��������û���뵽������֮���Ѿ�������Ⱥ��������ӭ�����ǵ�����ɰ���ͼ�ĺڶ������ڿ�\n");
			Sleep(2000);
			system("cls");
			Slowsay("������������֮��ֱ��ը���˺ڰ��������ָ�ӽ������ڰ��������Ҳ���ݻ٣������������̫���С���\n");
			Sleep(3000);
			system("cls");
			Slowsay("�����Ǽ�ս��������ɵ�����̫�أ����Դ���֮���忪���ˡ������������ƻ�\n");
			Sleep(1000);
			system("cls");
			Slowsay("������̩̹�ǽ�����һ������ǿ��Ļ���\n");
			Sleep(1000);
			system("cls");
			Slowsay("�����Խ����ڶֵ�̫������ת����һ���ܸ�������������\n");
			Sleep(1000);
			system("cls");
			Slowsay("���ǣ��������������Ҫ�ų�̫��������������ߡ����Ǳ�����������Ⱦ�ԵĶ���\n");
			Sleep(1000);
			system("cls");
			Slowsay("����֮�������������������ʱ������ڣ��û�����Ⱦ����Ϊ�㣬�������Ǿۼ���һ��������\n");
			Sleep(1000);
			system("cls");
			Slowsay("����һ����˼���ǣ�����ѡ����һ�Ź�ͺͺ��û���κ��������������\n");
			Sleep(1500);
			system("cls");
			Slowsay("����\n");
			Sleep(1000);
			system("cls");
			Slowsay("����������û���뵽��������������ǧ�������ĺڰ��������л��ɳˣ����������ٶȸϵ�̫��ϵʱ���Ѿ���ȥ��������ǧ������\n\n");
			Sleep(1500);
			system("cls");
			Slowsay("���µ�û���������Ѿ��ѻ������װ����Ⱦ����ı�����\n");
			Sleep(1000);
			system("cls");
			Slowsay("���������ǹ��ϵĺ�ħ�����ʹ��Щ̫��������Ϻ�ħ����͸����Щ��ʯ�����Լ��������Ǳ����Щ��ʯ��\n");
			Sleep(1000);
			Slowsay("ͬʱ�������ټ��˺�ѹѹһ�������Ը�����ϵ�Ĺ��׼���ڵ����ϰ��Ҳ��ƻ�������֮��\n");
			Sleep(2000);
			system("cls");
			Slowsay("��ʱ��һ������Ծ������鷢���ˣ���Ź�ͺͺ�������ӵ�д����㿪ʼ��ֱ�������������\n");
			Sleep(2000);
			system("cls");
			Slowsay("�ڰ�����������ǣ���������ЩѸ����ҵ����ﻵ�����ĺ���\n");
			Sleep(1500);
			system("cls")
			Slowsay("���ǣ��ڰ������������������ϵ���������ر�����Щ�����������̳�Ⱥ�Ķ���\n");
			Sleep(3500);
			system("cls");
			Sleep(2000);
			stop_time+=10;
			Slowsay("��ʷ�ַ�����һҳ\n");
			stop_time-=10;
			Sleep(2500);
			system("cls");
			Slowsay("�������ǰ���㵮����һ��ս��׷ɵ������ϡ�������\n");
			Sleep(1000);
			system("cls");
			Slowsay("������򣬾��ǵ��򡭡�\n");
			Sleep(1000);
			Slowsay("���������ڸ�������̫�յ����ع���ƴ������");
			Sleep(1000);
			system("cls");
			Slowsay("��ĸ��ף���һ����ʬΧ�ǵ�������ƴ���ֿ���ȴ���Ҳ���\n");
			Sleep(2000);
			system("cls");
			Slowsay("�����ĸ�ף�Ϊ�˱������׵��㣬Ҳ����ָ�\n");
			Sleep(2000);
			system("cls");
			Slowsay("Ϊ�˸���ĸ�ĸ�ױ���ҲΪ���������磬������ҵ���������ˡ�������ħ��\n"); 
			Sleep(1000);
			Slowsay("��������һ������֪��������ʯ���鶴����\n");
			Sleep(1000);
			system("cls");
			Slowsay("����Ҫ�ҵ����������ܣ�Ȼ���ҵ�����ħ�����ض���ı��ء��ഫ���ı�������ǧ����ǰһλ����ʦ���죬��ӵ�е������������������ס���ֻ�轫���ӵ����Ӵ�ɽ������Ĺž����Ϲž���޴��������������Դ���ָһ�������йֶ���ҷ�����\n");
			Sleep(3500);
			system("cls");
			Sleep(3000);
			Slowsay("��ô������ľ��ǣ�ף����ˣ�\n");
			Sleep(2000);
			tiaose(14);
			stop_time-=15;
		}
		Sleep(1000);
		
	}
	system("cls");
	xinshoucun:
	AMP["Сƿ����ҩˮ"]=100;SMP["Сƿ����ҩˮ"]=400;
	AMP["��ƿ����ҩˮ"]=200;SMP["��ƿ����ҩˮ"]=800;
	AMP["��ƿ����ҩˮ"]=400;SMP["��ƿ����ҩˮ"]=1400;
	AMP["�ش�����ҩˮ"]=800;SMP["�ش�����ҩˮ"]=2200;
	AMP["Сƿħ��ҩˮ"]=100;SMP["Сƿħ��ҩˮ"]=150;
	AMP["��ƿħ��ҩˮ"]=200;SMP["��ƿħ��ҩˮ"]=450;
	AMP["��ƿħ��ҩˮ"]=300;SMP["��ƿħ��ҩˮ"]=950;
	AMP["�ش�ħ��ҩˮ"]=500;SMP["�ش�ħ��ҩˮ"]=1650;
	AMP["Ԫ���ָ�ҩˮ"]=1000;SMP["Ԫ���ָ�ҩˮ"]=4000;
	if(Is_first[0]) {
		Slowsay("��ӭ�������ִ壬������������������ǿ��װ������������ȵ�");
		Sleep(2000);
		cout<<endl;
		Slowsay("������������飬�������Ӧ������");
		Sleep(1000);
		cout<<endl;
		Slowsay("ף����Ϸ��죡��");
		Sleep(2000);
		Is_first[0]=false;
		system("cls");
		tiaose(12);
		Slowsay("����롮��������&�鿴���߽��ȡ����鿴��һ����������\n");
		tiaose(14);
		Sleep(3000);
	}
	int ch2;
	if(Is_save)
	{
		ch2=8;
	}
	if(!Is_save)
	{
		sky:
		jindu(50);
		cout<<endl;
		Slowsay("1,�����̳�\n");
		Slowsay("2,����������\n");
		Slowsay("3,�齱\n");
		Slowsay("4,�鿴������״̬\n");
		Slowsay("5,��������\n");
		Slowsay("6,��������&�鿴���߽���\n");
		Slowsay("7,ǰ��������\n");
		Slowsay("8,������;\n");
		Slowsay("9,�˳�\n");
		Sleep(500);
		Slowsay("��ѡ��");
		cin>>ch2;
	}
	
	if(ch2==1) {
		shop();
		Sleep(1000);
		goto sky;
	}
	if(ch2==2) {
		jindu(50);
		Slowsay("��ӭ���������̣�������������ǿ��װ������Ŀ����������");
		Sleep(1000);
		tiej:
		jindu(50);
		cout<<endl;
		cout<<endl;
		Slowsay("1,ǿ��\n");
		Slowsay("2,����ǿ��\n");
		Slowsay("3,����\n");
		Slowsay("4,��������\n");
		Slowsay("5,ϴ��\n");
		Slowsay("6,�̳�\n"); 
		Slowsay("7,�ϳ�\n");
		Slowsay("8,����\n");
		Sleep(2000);
		Slowsay("��ѡ��");
		int chp=0;
		cin>>chp;
		if(chp==1) {
			jindu(50);
			if(wuqi[0]=="00") {
				Slowsay("�Բ�������û�����������");
				Sleep(2000);
				goto tiej;
			}
			Slowsay("��������Ҫǿ����װ��\n\n");
			Sleep(1000);
			for(int i=0; i<=9; i++) {
				if(wuqi[i]=="00") {
					break;
				}
				cout<<i+1<<",";
				Slowsay(wuqi[i]);
				cout<<"  ";
				if(a_f[i]==true) {
					cout<<"������:";
				} else {
					cout<<"������:";
				}
				cout<<xinneng[i];
				cout<<endl;
			}
			Sleep(450);
			Slowsay("-1����...\n");
			Sleep(1000);
			int chs=0;
			cin>>chs;
			if(chs==-1) {
				goto tiej;
			}
			int mucai=wuqiLV[chs-1]*50;
			int shengtie=wuqiLV[chs-1]*20;
			int gangtie=wuqiLV[chs-1]*10;
			cout<<"           ";
			Slowsay("��ע�⣬�˴�ǿ����Ҫ");
			cout<<mucai;
			Slowsay("ľ��,");
			cout<<shengtie;
			Slowsay("����,");
			cout<<gangtie;
			Slowsay("����\n");
			Sleep(1000);
			strong:
			Slowsay("ȷ��Ҫǿ����     1,ȷ��   2,����");
			int cho=0;
			cin>>cho;
			if(cho==2) {
				goto tiej;
			}
			jindu(50);
			Slowsay("ǿ���С���");
			Sleep(1000);
			
			if(gang<gangtie||sheng<shengtie||mu<mucai) {
				Slowsay("�Բ���ǿ��ʧ�ܣ���Ϊ���ϲ���\n");
				Sleep(1000); 
				goto tiej;
			}
			
			Slowsay("ǿ���ɹ���");
			int cnt1=mucai/50;
			int cnt2=shengtie/20;
			int cnt3=gangtie/10;
			for(int i=0; i<=9; i++) {
				
				if(daoju[i]=="ľ��"&&cnt1!=0) {
					daoju[i]="00";
					cnt1--;
				}
				if(daoju[i]=="����"&&cnt2!=0) {
					daoju[i]="00";
					cnt2--;
				}
				if(daoju[i]=="����"&&cnt3!=0) {
					daoju[i]="00";
					cnt3--;
				}
			}
			xinneng[chs-1]+=wuqiLV[chs-1]*20;
			wuqiLV[chs-1]++;
			Sleep(1000);
			goto tiej;
		}
		if(chp==2) {
			jindu(50);
			if(wuqi[0]=="00") {
				Slowsay("�Բ�������û�����������");
				Sleep(2000);
				goto tiej;
			}
			Slowsay("��������Ҫ����ǿ����װ��");
			Sleep(1000);
			for(int i=0; i<=9; i++) {
				if(wuqi[i]=="00") {
					break;
				}
				cout<<i+1<<",";
				Slowsay(wuqi[i]);
				cout<<"  ";
				if(a_f[i]==true) {
					cout<<"������:";
				} else {
					cout<<"������:";
				}
				cout<<xinneng[i];
				cout<<endl;
			}
			Sleep(1000);
			int ch9=0;
			cin>>ch9;
			int mucai=wuqiLV[ch9-1]*150;
			int shengtie=wuqiLV[ch9-1]*60;
			int gangtie=wuqiLV[ch9-1]*30;
			cout<<"           ";
			Slowsay("��ע�⣬�˴θ���ǿ����Ҫ");
			cout<<mucai;
			Slowsay("ľ��,");
			cout<<shengtie;
			Slowsay("����,");
			cout<<gangtie;
			Slowsay("����\n");
			Sleep(1000);
			Slowsay("ȷ��Ҫ����ǿ����     1,ȷ��   2,����");
			int ch10=0;
			cin>>ch10;
			if(ch10==2) {
				goto tiej;
			}
			jindu(50);
			Slowsay("����ǿ���С���");
			Sleep(1000);
			int ch7=0;
			
			if(gang<gangtie||sheng<shengtie||mu<mucai) {
				Slowsay("�Բ��𣬸���ǿ��ʧ�ܣ���Ϊ���ϲ���\n");
				Sleep(500);
				goto tiej;
			}
			Slowsay("����ǿ���ɹ���");
			int cnt1=mucai/50;
			int cnt2=shengtie/20;
			int cnt3=gangtie/10;
			for(int i=0; i<=9; i++) {
				if(daoju[i]=="ľ��"&&cnt1!=0) {
					daoju[i]="00";
					cnt1--;
				}
				if(daoju[i]=="����"&&cnt2!=0) {
					daoju[i]="00";
					cnt2--;
				}
				if(daoju[i]=="����"&&cnt3!=0) {
					daoju[i]="00";
					cnt3--;
				}
			}
			int a;
			int b=a%10;
			if(b==0) {
				b++;
			}
			wuqi[ch9-1]+=b;
			xinneng[ch9-1]+=wuqiLV[ch9-1]*30;
			Sleep(1000);
			goto tiej;
		}
		if(chp==3) {
			jindu(50);
			Slowsay("��������Ҫ���ļ�����");
			int cha=0;
			cin>>cha;//{500+(LV-1)*100+[500+(LV-1)*100]+(cha-1)*100}*
			int aa=500+(LV-1)*100;
			int ab=500+(LV-1)*100+(cha-1)*100;
			int ac=((500+(LV-1)*100+(cha-1)*100)-(500+(LV-1)*100))/100+1;
			cout<<endl;
			Slowsay("��Ҫ");
			cout<<(aa+ab)*ac/2;
			Slowsay("��ң�");
			Slowsay("ȷ��������     1��ȷ��    2������\n");
			int chq=0;
			cin>>chq;
			if(chq==2) {
				goto tiej;
			}
			jindu(50);
			Slowsay("������������");
			Sleep(2000);
			cout<<endl;
			if(jinbi<(aa+ab)*ac/2) {
				Slowsay("�Բ��𣬽�Ҳ��㣬����ʧ��");
				Sleep(1000);
				goto tiej;
			}
			Slowsay("�����ɹ���");
			int lv=LV;
			LV+=cha;
			if(juese=="��սʿ") {
				//20+(lv-1)*10    20+(lv-1)*10+(cha-1)*10    ((20+(lv-1)*10+(cha-1)*10)-(20+(lv-1)*10))/10+1
				int a1=20+(lv-1)*5;
				int a2=20+(lv-1)*5+(cha-1)*5;
				int a3=((20+(lv-1)*5+(cha-1)*5)-(20+(lv-1)*5))/5+1;
				ATK+=(a1+a2)*a3/2;
				a1=100+(lv-1)*15;
				a2=100+(lv-1)*15+(cha-1)*15;
				a3=((100+(lv-1)*15+(cha-1)*15)-(100+(lv-1)*15))/15+1;
				maxHP+=(a1+a2)*a3/2;
				a1=50+(lv-1)*20;
				a2=50+(lv-1)*20+(cha-1)*20;
				a3=((50+(lv-1)*20+(cha-1)*20)-(50+(lv-1)*20))/20+1;
				maxEXP+=(a1+a2)*a3/2;
				a1=25+(lv-1)*7;
				a2=25+(lv-1)*7+(cha-1)*7;
				a3=((25+(lv-1)*7+(cha-1)*7)-(20+(lv-1)*7))/7+1;
				fang+=(a1+a2)*a3/2;
				a1=45+(lv-1)*15;
				a2=45+(lv-1)*15+(cha-1)*15;
				a3=((45+(lv-1)*15+(cha-1)*15)-(45+(lv-1)*15))/15+1;
				maxMP+=(a1+a2)*a3/2; 
			}
			if(juese=="ʥ��ʿ") {
				//20+(lv-1)*10    20+(lv-1)*10+(cha-1)*10    ((20+(lv-1)*10+(cha-1)*10)-(20+(lv-1)*10))/10+1
				int a1=15+(lv-1)*5;
				int a2=15+(lv-1)*5+(cha-1)*5;
				int a3=((15+(lv-1)*5+(cha-1)*5)-(15+(lv-1)*5))/5+1;
				ATK+=(a1+a2)*a3/2;
				a1=85+(lv-1)*13;
				a2=85+(lv-1)*13+(cha-1)*13;
				a3=((85+(lv-1)*13+(cha-1)*13)-(85+(lv-1)*13))/13+1;
				HP+=(a1+a2)*a3/2;
				a1=50+(lv-1)*20;
				a2=50+(lv-1)*20+(cha-1)*20;
				a3=((50+(lv-1)*20+(cha-1)*20)-(50+(lv-1)*20))/20+1;
				maxEXP+=(a1+a2)*a3/2;
				a1=35+(lv-1)*9;
				a2=35+(lv-1)*9+(cha-1)*9;
				a3=((35+(lv-1)*9+(cha-1)*9)-(35+(lv-1)*9))/9+1;
				fang+=(a1+a2)*a3/2;
				a1=55+(lv-1)*17;
				a2=55+(lv-1)*17+(cha-1)*17;
				a3=((55+(lv-1)*17+(cha-1)*17)-(55+(lv-1)*17))/17+1;
				maxMP+=(a1+a2)*a3/2;
			}
			if(juese=="�̿�") {
				//20+(lv-1)*10    20+(lv-1)*10+(cha-1)*10    ((20+(lv-1)*10+(cha-1)*10)-(20+(lv-1)*10))/10+1
				int a1=35+(lv-1)*9;
				int a2=35+(lv-1)*9+(cha-1)*9;
				int a3=((35+(lv-1)*9+(cha-1)*9)-(35+(lv-1)*9))/9+1;
				ATK+=(a1+a2)*a3/2;
				a1=70+(lv-1)*11;
				a2=70+(lv-1)*11+(cha-1)*11;
				a3=((70+(lv-1)*11+(cha-1)*11)-(70+(lv-1)*11))/11+1;
				maxHP+=(a1+a2)*a3/2;
				a1=50+(lv-1)*20;
				a2=50+(lv-1)*20+(cha-1)*20;
				a3=((50+(lv-1)*20+(cha-1)*20)-(50+(lv-1)*20))/20+1;
				maxEXP+=(a1+a2)*a3/2;
				a1=25+(lv-1)*7;
				a2=25+(lv-1)*7+(cha-1)*7;
				a3=((25+(lv-1)*7+(cha-1)*7)-(20+(lv-1)*7))/7+1;
				fang+=(a1+a2)*a3/2;
				a1=58+(lv-1)*17;
				a2=58+(lv-1)*17+(cha-1)*17;
				a3=((58+(lv-1)*17+(cha-1)*17)-(58+(lv-1)*17))/17+1;
				maxMP+=(a1+a2)*a3/2;
			}
			if(juese=="��ʦ") {
				//20+(lv-1)*10    20+(lv-1)*10+(cha-1)*10    ((20+(lv-1)*10+(cha-1)*10)-(20+(lv-1)*10))/10+1
				int a1=60+(lv-1)*12;
				int a2=60+(lv-1)*12+(cha-1)*12;
				int a3=((60+(lv-1)*12+(cha-1)*12)-(60+(lv-1)*12))/12+1;
				ATK+=(a1+a2)*a3/2;
				a1=55+(lv-1)*10;
				a2=55+(lv-1)*10+(cha-1)*10;
				a3=((55+(lv-1)*10+(cha-1)*10)-(55+(lv-1)*10))/10+1;
				maxHP+=(a1+a2)*a3/2;
				a1=50+(lv-1)*20;
				a2=50+(lv-1)*20+(cha-1)*20;
				a3=((50+(lv-1)*20+(cha-1)*20)-(50+(lv-1)*20))/20+1;
				maxEXP+=(a1+a2)*a3/2;
				a1=23+(lv-1)*6;
				a2=23+(lv-1)*6+(cha-1)*6;
				a3=((23+(lv-1)*6+(cha-1)*6)-(23+(lv-1)*6))/6+1;
				fang+=(a1+a2)*a3/2;
				a1=70+(lv-1)*20;
				a2=70+(lv-1)*20+(cha-1)*20;
				a3=((70+(lv-1)*20+(cha-1)*20)-(70+(lv-1)*20))/20+1;
				maxMP+=(a1+a2)*a3/2;
			}
			Sleep(1000);
			goto tiej;
		}
		if(chp==4) {
			jindu(50);
			Slowsay("��������Ҫ�������ļ���");
			int chk=0;
			cin>>chk;
			int aa=1000+(LV-1)*300;
			int ab=1000+(LV-1)*300+(chk-1)*300;
			int ac=((1000+(LV-1)*300+(chk-1)*300)-(1000+(LV-1)*300))/300+1;
			cout<<endl;
			Slowsay("��Ҫ");
			cout<<(aa+ab)*ac/2;
			Slowsay("��ң�");
			Slowsay("ȷ��������     1��ȷ��    2������\n");
			int t_f=0;
			cin>>t_f;
			if(t_f==2) {
				goto tiej;
			}
			jindu(50);
			Slowsay("���ڴ�����������");
			Sleep(2000);
			cout<<endl;
			if(jinbi<(aa+ab)*ac/2) {
				Slowsay("�Բ��𣬽�Ҳ��㣬��������ʧ��");
				Sleep(1000);
				goto tiej;
			}
			Slowsay("���������ɹ���");
			int lv=LV;
			LV+=chk;
			maxHP+=(int)HP*0.55;
			fang+=(int)fang*0.35;
			ATK+=(int)ATK*0.45;
			maxEXP+=(int)maxEXP*1.0;
			Sleep(1000);
			goto tiej;
		}
		if(chp==5) {
			jindu(50);
			if(wuqi[0]=="00") {
				Slowsay("�Բ�������û�����������\n");
				Sleep(2000);
				goto tiej;
			}
			Slowsay("��������Ҫϴ����װ����\n");
			Sleep(1000);
			for(int i=0; i<=9; i++) {
				if(wuqi[i]=="00") {
					break;
				}
				cout<<i+1<<",";
				Slowsay(wuqi[i]);
				cout<<"  ";
				if(a_f[i]==true) {
					cout<<"������:";
				} else {
					cout<<"������:";
				}
				cout<<xinneng[i];
				cout<<endl;
			}
			int ch10=0;
			cin>>ch10;
			Sleep(500);
			jindu(50);
			Slowsay("ϴ���С���\n");
			int a=rand();
			int b=rand();
			if(xinneng[ch10-1]/100==0) {
				b=a%100;
				while(b>xinneng[ch10-1]+30) {
					b-=a%10;
				}
				while(b<xinneng[ch10-1]-30) {
					b+=a%10;
				}
			}
			if(xinneng[ch10-1]/1000==0&&xinneng[ch10-1]/100!=0) {
				b=a%1000;
				while(b>xinneng[ch10-1]+300) {
					b-=a%100;
				}
				while(b<xinneng[ch10-1]-300) {
					b+=a%100;
				}
			}
			if(xinneng[ch10-1]/10000==0&&xinneng[ch10-1]/1000!=0) {
				b=a%10000;
				while(b>xinneng[ch10-1]+3000) {
					b-=a%1000;
				}
				while(b<xinneng[ch10-1]-3000) {
					b+=a%1000;
				}
			}
			Sleep(1000);
			int p=xinneng[ch10-1];
			xinneng[ch10-1]=b;
			jindu(50);
			if(p>b) {
				Slowsay("���ź���");
				Slowsay(wuqi[ch10-1]);
				if(a_f[ch10-1]==true) {
					Slowsay("�Ĺ�����");
				} else {
					Slowsay("�ķ�����");
				}
				Slowsay("���Ϊ");
				cout<<b<<endl;
			}
			if(p>b) {
				Slowsay("��ϲ����");
				Slowsay(wuqi[ch10-1]);
				if(a_f[ch10-1]==true) {
					Slowsay("�Ĺ�����");
				} else {
					Slowsay("�ķ�����");
				}
				Slowsay("����Ϊ");
				cout<<b<<endl;
			}
			if(p==b) {
				Slowsay(wuqi[ch10-1]);
				if(a_f[ch10-1]==true) {
					Slowsay("�Ĺ�����");
				} else {
					Slowsay("�ķ�����");
				}
				Slowsay("û���κα仯\n");
			}
			Sleep(2000);
			goto tiej;
		}
		if(chp==6) {
guow:
			jindu(50);
			say("�����������̳е���λ��\n");
			say("1,����˹����\n");
			say("2,��˹��������\n");
			say("3,�����ǹ���\n");
			say("4,�¸�������\n");
			say("5,�����Ҷ����\n");
			say("6,����ͼ���ǹ���\n");
			say("7,����\n");
			Sleep(2000);
			say("��ѡ��");
			int chd=0;
			cin>>chd;
			if(chd==1) {
				jindu(50);
				Slowsay("���������˹������ϰ�ߣ�");
				string s="";
				cin>>s;
				int b=rand()%4;
				if(s!=xiguan[b]) {
					Slowsay("�ش�������϶����ǿ���˹�����ļ̳���");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("�ش���ȷ��");
				Sleep(1000);
				jindu(50);
				int a1;
				int b1=a1%10;
				while(b>4) {
					b1-=2;
				}
				Slowsay("��ϲ�����ɹ��̳���");
				cout<<ke[b1];
				if(b1==4) {
					jinbi+=10000;
				} else {
					jinbi+=(b1+1)*1000;
				}
				Sleep(2000);
				goto guow;
			}
			if(chd==2) {
				jindu(50);
				Slowsay("��������˹����������ϰ��");
				string s="";
				cin>>s;
				int an;
				int bn=an%10;
				while(bn>4) {
					bn-=2;
				}
				if(s!=xiguan[bn]) {
					Slowsay("�ش�������϶�������˹���������ļ̳���");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("�ش���ȷ��\n");
				Sleep(1000);
				jindu(50);
				if(bag1>=9) {
					Slowsay("�Բ������ı����ռ䲻�㣬�޷��̳д���Ʒ��������\n");
					Sleep(1000);
					goto sky;
				}
				int am;
				int bm=am%10;
				while(bm>4) {
					bm-=2;
				}
				Slowsay("��ϲ�����ɹ��̳���");
				Slowsay(qie[bm]);
				yaoshui[bag1]=qie[bm];
				Sleep(2000);
				goto guow;
			}
			if(chd==3) {
				jindu(50);
				Slowsay("�����뿨���ǹ�����ϰ��");
				string s="";
				cin>>s;
				int aq;
				int bq=aq%10;
				while(bq>4) {
					bq-=2;
				}
				if(s!=xiguan[bq]) {
					Slowsay("�ش�������϶����ǿ����ǹ����ļ̳���");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("�ش���ȷ��");
				Sleep(1000);
				jindu(50);
				if(bag>=9) {
					Slowsay("�Բ������ı����ռ䲻�㣬�޷��̳д���Ʒ��������\n");
					Sleep(1000);
					goto sky;
				}
				int as;
				int bs=as%10;
				while(bs>4) {
					bs-=2;
				}
				Slowsay("��ϲ�����ɹ��̳���");
				Slowsay(ka[bs]);
				wuqi[bag]=ka[bs];
				xinneng[bag]=kaatk[bs];
				Sleep(2000);
				goto guow;
			}
			if(chd==4) {
				jindu(50);
				Slowsay("������¸���������ϰ��");
				string s="";
				cin>>s;
				int ad;
				int bd=ad%10;
				while(bd>4) {
					bd-=2;
				}
				if(s!=xiguan[bd]) {
					Slowsay("�ش�������϶����ǵ¸��������ļ̳���");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("�ش���ȷ��");
				Sleep(1000);
				jindu(50);
				if(bag>=9) {
					Slowsay("�Բ������ı����ռ䲻�㣬�޷��̳д���Ʒ��������\n");
					Sleep(1000);
					goto sky;
				}
				int ae;
				int be=ae%10;
				while(be>4) {
					be-=2;
				}
				Slowsay("��ϲ�����ɹ��̳���");
				Slowsay(de[be]);
				wuqi[bag]=de[be];
				xinneng[bag]=defang[be];
				Sleep(2000);
				goto guow;
			}
			if(chd==5) {
				jindu(50);
				Slowsay("����������Ҷ������ϰ��");
				string s="";
				cin>>s;
				int ad;
				int bd=ad%10;
				while(bd>4) {
					bd-=2;
				}
				if(s!=xiguan[bd]) {
					Slowsay("�ش�������϶����Ǹ����Ҷ�����ļ̳���");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("�ش���ȷ��");
				Sleep(1000);
				jindu(50);
				if(bag>=9) {
					Slowsay("�Բ������ı����ռ䲻�㣬�޷��̳д���Ʒ��������\n");
					Sleep(1000);
					goto sky;
				}
				int ae;
				int be=ae%10;
				while(be>4) {
					be-=2;
				}
				Slowsay("��ϲ�����ɹ��̳���");
				Slowsay(de[be]);
				daoju[bag2]=de[be];
				Sleep(2000);
				goto guow;
			}
			if(chd==6) {
				jindu(50);
				Slowsay("����������ͼ���ǹ�����ϰ��");
				string s="";
				cin>>s;
				int ad;
				int bd=ad%10;
				while(bd>4) {
					bd-=2;
				}
				if(s!=xiguan[bd]) {
					Slowsay("�ش�������϶�������ͼ���ǹ����ļ̳���");
					jinbi-=100;
					Sleep(2000);
					goto guow;
				}
				Slowsay("�ش���ȷ��");
				Sleep(1000);
				jindu(50);
				int ae;
				int be=ae%10;
				while(be>4) {
					be-=2;
				}
				Slowsay("��ϲ�����ɹ��̳���");
				cout<<sai[be];
				if(be==4) {
					G+=1000;
				} else {
					G+=(be+1)*100;
				}
				Sleep(2000);
				goto guow;
			}
			if(chd==7) {
				goto tiej;
			}
			goto tiej;
		}
		if(chp==7) {
			jindu(50);
			Slowsay("���Ƿ�Ҫ�ϳɴ���װ����  1,��  2,����\n");
			int chk=0;
			cin>>chk;
			if(chk==1) {
				say("1,������֮��   ������+30%   ְҵ����սʿ or ʥ��ʿ  �����̱�ʯ*3�ϳ�    ��500\n");
				say("2,ħ����֮��   ������+35%   ְҵ����սʿ or ʥ��ʿ  �����̱�ʯ*3�ϳ�    ��1500\n");
				say("3,��ձ���     ������+40%   ְҵ��ʥ��ʿ or �̿�    ��������ʯ*2�ϳ�    ��2000\n");
				say("4,����֮��     ������+50%   ְҵ���̿�              ��������ʯ*3�ϳ�    ��3000\n");
				say("5,����������   ������+55%   ְҵ����ʦ              ��������ʯ*3�ϳ�    ��3000\n");
				say("6,�Ͼ����     ������+65%   ְҵ������              ��������ʯ*4�ϳ�    ��5500\n");
				say("7,�Ųʰ�����   ������+100%  ְҵ����սʿ or ʥ��ʿ  ��������ʯ*8�ϳ�    ��10000\n");
				say("8,���֮��/��  ������+130%  ְҵ���̿� or ��ʦ      ��������ʯ*8�ϳ�    ��10000\n");
				say("9,����\n");
				Sleep(1000);
				Slowsay("��ѡ��");
				int chj=0;
				cin>>chj;
				if(chj==1&&bag<9&&(juese=="��սʿ"||juese=="ʥ��ʿ")) {
					int sum=0;
					jindu(50);
					Slowsay("�ϳ��С���");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="�̱�ʯ") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=3&&jinbi>=500) {
						Slowsay("�ϳɳɹ���");
						wuqi[bag]="������֮��";
						xinneng[bag]=30;
						wuqiLV[bag]=1;
						Is_pct[bag]=true; 
						jinbi-=500;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("�ϳ�ʧ�ܣ�������Ϊ��Ҳ������ϲ�����������\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj==2&&bag<9&&(juese=="��սʿ"||juese=="ʥ��ʿ")) {
					int sum=0;
					jindu(50);
					Slowsay("�ϳ��С���");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="�̱�ʯ") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=3&&jinbi>=1500) {
						Slowsay("�ϳɳɹ���");
						wuqi[bag]="ħ����֮��";
						xinneng[bag]=30;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=1000;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("�ϳ�ʧ�ܣ�������Ϊ��Ҳ������ϲ�����������\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj==3&&bag<9&&(juese=="ʥ��ʿ"||juese=="�̿�")) {
					int sum=0;
					jindu(50);
					Slowsay("�ϳ��С���");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="����ʯ") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=2&&jinbi>=2000) {
						Slowsay("�ϳɳɹ���");
						wuqi[bag]="��ձ���";
						xinneng[bag]=40;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=2000;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("�ϳ�ʧ�ܣ�������Ϊ��Ҳ������ϲ�����������\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj==4&bag<9&&juese=="�̿�") {
					int sum=0;
					jindu(50);
					Slowsay("�ϳ��С���");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="����ʯ") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=3&&jinbi>=3000) {
						Slowsay("�ϳɳɹ���");
						wuqi[bag]="����֮��";
						xinneng[bag]=50;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=3000;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("�ϳ�ʧ�ܣ�������Ϊ��Ҳ������ϲ�����������\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj==5&&bag<9&&juese=="��ʦ") {
					int sum=0;
					jindu(50);
					Slowsay("�ϳ��С���");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="����ʯ") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=3&&jinbi>=3000) {
						Slowsay("�ϳɳɹ���");
						wuqi[bag]="����������";
						xinneng[bag]=55;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=3000;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("�ϳ�ʧ�ܣ�������Ϊ��Ҳ������ϲ�����������\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj==6&&bag<9) {
					int sum=0;
					jindu(50);
					Slowsay("�ϳ��С���");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="����ʯ") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=4&&jinbi>=5500) {
						Slowsay("�ϳɳɹ���");
						wuqi[bag]="�Ͼ����";
						xinneng[bag]=65;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=5500;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("�ϳ�ʧ�ܣ�������Ϊ��Ҳ������ϲ�����������\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj==7&&bag<9&&(juese=="��սʿ"||juese=="ʥ��ʿ")) {
					int sum=0;
					jindu(50);
					Slowsay("�ϳ��С���");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="����ʯ") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=8&&jinbi>=10000) {
						Slowsay("�ϳɳɹ���");
						wuqi[bag]="�Ųʰ�����";
						xinneng[bag]=100;
						wuqiLV[bag]=1;
						Is_pct[bag]=true;
						jinbi-=10000;
						Sleep(1000);
						
						goto tiej;
					} else {
						Slowsay("�ϳ�ʧ�ܣ�������Ϊ��Ҳ������ϲ�����������\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj==8&&bag<9&&(juese=="��ʦ"||juese=="�̿�")) {
					int sum=0;
					jindu(50);
					Slowsay("�ϳ��С���");
					for(int i=0; i<=bag; i++) {
						if(daoju[i]=="����ʯ") {
							sum++;
						}
					}
					Sleep(2000);
					system("cls");
					if(sum>=8&&jinbi>=10000) {
						Slowsay("�ϳɳɹ���");
						if(juese=="�̿�") {
							wuqi[bag]="���֮��";
						} else {
							wuqi[bag]="���֮��";
						}
						Is_pct[bag]=true;
						jinbi-=10000;
						xinneng[bag]=130;
						wuqiLV[bag]=1;
						Sleep(1000);
						goto tiej;
					} else {
						Slowsay("�ϳ�ʧ�ܣ�������Ϊ��Ҳ������ϲ�����������\n");
						Sleep(1000);
						goto tiej;
					}
				}
				if(chj==9) {
					goto tiej;
				}
				Slowsay("�Բ����޷�ִ�д˲�����������Ϊû��������ȷ���ֻ��ɫ���ԣ�������");
				Sleep(1000);
				goto tiej;
			}
			if(chk==2) {
				goto tiej;
			}
			say("������1����2�ڵ���������");
			Sleep(1000);
			goto tiej;
		}
		if(chp==8) {
			goto sky;
		}
		if(chp>8||chp<1) {
			Slowsay("������1����8�ڵ�����");
			Sleep(1000);
			goto tiej;
		}
	}
	if(ch2==3) {
chouj:
		jindu(50);
		cout<<endl;
		cout<<endl;
		Slowsay("��ѡ��һ����Ƭ��\n\n");
		Slowsay("1,*��\n");
		Slowsay("2,&��\n");
		Slowsay("3,#��\n");
		Slowsay("4,^��\n");
		Slowsay("5,@��\n");
		Slowsay("6,%��\n");
		Slowsay("7,����\n"); 
		Sleep(1000);
		Slowsay("��ѡ��");
		int chg=0;
		cin>>chg;
		if(chg>=7||chg<1) {
			goto sky;
		}
		cout<<endl;
		Slowsay("�˴γ齱��Ҫ");
		cout<<chou;
		Slowsay("���\n");
		Sleep(1000);
		Slowsay("ȷ�ϳ齱�� 1,ȷ��  2,����\n");
		int chi=0;
		cin>>chi;
		if(chi==2) {
			goto tiej;
		}
		if(chi!=1&&chi!=2) {
			goto chouj;
		}
		if(jinbi<chou) {
			Slowsay("�Բ��𣬽�Ҳ��㣬�޷�ִ�д˲���");
			Sleep(1000);
			goto sky;
		}
		jinbi-=chou;
		chou+=150;
		int k=rand()%30;
		if(k>=0&&k<=9) {
			Slowsay("��ϲ�����鵽�ˣ�");
			int p=rand()%10;
			cout<<choujin[p];
			Slowsay("���\n");
			jinbi+=choujin[p];
			Sleep(1000);
			goto sky;
		}
		if(k>=10&&k<=12&&bag<9) {
			Slowsay("��ϲ�����鵽��");
			cout<<rand_arms[k-10];
			wuqi[bag]=rand_arms[k-10];
			wuqiLV[bag]=1;
			a_f[bag]=true;
			xinneng[bag]=rand_armsxing[k-10];
			bag++;
			Sleep(1000);
			goto sky;
		}
		if(k>=10&&k<=12&&bag==9) {
			Slowsay("���ź����������ı����ռ䲻�㣬�޷����ܽ������������һ��ռ������\n");
			Sleep(1500);
			goto sky;
		}
		Slowsay("���ź�����ʲôҲû�г鵽\n");
		Sleep(1000);
		goto sky;
	}
	if(ch2==4) {
		Bag();
		goto sky;
	}
	if(ch2==5) {
		Train_skill(); 
		goto sky;
	}
	if(ch2==6)
	{
		Task();
		goto sky;
	}
	if(ch2==7) {
		if(slt())
		{
			jinbi+=350;
		}
		goto sky;
	}
	if(ch2==8) {
		flag:
		system("cls");
		jindu(50);
		Slowsay("����������ȥ�ĵط�\n\n\n");
		tiaose(12);
		cout<<"����������������	 ����������������"<<endl;
		cout<<"��7 ����ɳĮ  �� * * * * ��8 ��������  ��"<<endl;
		cout<<"����������������	 ����������������"<<endl;
		cout<<"       *                 	*"<<endl;
		cout<<"       *        		*"<<endl;
		cout<<"       *        		*"<<endl;
		cout<<"       *                 	*"<<endl;
		cout<<"����������������         ���������������� 	������������������"<<endl;
		cout<<"��6 ����֮��  ��         ��9 ��������  ��* * * *��10 ��û�Ĵ�½ ��"<<endl;
		cout<<"����������������         ���������������� 	������������������"<<endl;
		cout<<"       *        										  		       			*		  "<<endl;
		cout<<"       *        						     									*		  "<<endl;
		cout<<"       *        						        								*		  "<<endl;
		cout<<"����������������        ����������������	���������  "<<endl;
		cout<<"��5 ����ɭ��  ��* * * * ��4 ˪�粿��  ��	�� 11 ʯ���鶴��  "<<endl;
		cout<<"����������������  	����������������	���������  "<<endl;
		cout<<"                             *         "<<endl;
		cout<<"                          *            "<<endl;
		cout<<"		        *               "<<endl;
		cout<<"		     *                  "<<endl;
		cout<<"		  *                     "<<endl;
		cout<<"               *                       "<<endl;
		cout<<"            *                          "<<endl;
		cout<<"����������������        ����������������        ����������������"<<endl;
		cout<<"��3 ���⺣̲  ��* * * * ��2 ���˻�԰  ��* * * * ��  1 ���ִ�  ��"<<endl;
		cout<<"����������������        ����������������        ����������������"<<endl;
		int ship=0;
		tiaose(15);
		cin>>ship;
		system("cls");
		Sleep(500);
		if(ship>11||ship<1) {
			goto xinshoucun;
		}
		if(!Can_go[ship]&&ship==1)
		{
			Slowsay("�����ִ��Ѿ����������ˣ����ǻ��ǲ�Ҫȥ�����һЩ������\n");
			Sleep(2000);
			goto flag;
		}
		if(!Can_go[ship])
		{
			Slowsay("�Բ��𣬴˵�ͼ��δ����Ŷ\n");
			Sleep(1000);
			goto xinshoucun;
		}
		HideCursor(0);
		system("cls");
		Slowsay("����ǰ����");
		tiaose(11);
		Slowsay(destin[ship]);
		cout<<endl<<endl;
		for(int i=1;i<=100;i++)
		{
			if(i<=30)
			{
				tiaose(14);
			}
			if(i>30&&i<=60)
			{
				tiaose(5);
			}
			if(i>60&&i<=80)
			{
				tiaose(1);
			}
			if(i>80)
			{
				tiaose(12);
			}
			cout<<i<<"%";
			guangbiao(0,2);
			Sleep(30);
			cout<<"    ";
			guangbiao(0,2);
		}
		switch(ship) 
		{
			case 1 : {
				goto sky;
			}
			case 4 : {
				int tmp=TD;
				int Tmp[2];
				Tmp[0]=assTD[0];
				Tmp[1]=assTD[1];
				if(shuangfeng())
				{
					Can_go[5]=true;
					Can_into=true;
				}
				TD=tmp;
				assTD[0]=Tmp[0];
				assTD[1]=Tmp[1];
				break;
			}
			case 11 : {
				if(!chuangguan(ship,map2)) {
					if(Wend)
					{
						The_end(1);
					}
					else
					{
						The_end(4);
					}
				}
				else
				{
					The_end(3);
				}
				break;
			}
			default : {
				int tmp=TD;
				int Tmp[2];
				Tmp[0]=assTD[0];
				Tmp[1]=assTD[1];
				switch(ship)
				{
					case 2:{if(chuangguan(ship,map2)){Can_go[ship+1]=true;}break;}
					case 3:{if(chuangguan(ship,map3)){Can_go[ship+1]=true;}break;}
					case 5:{if(chuangguan(ship,map5)){Can_go[ship+1]=true;}break;}
					case 6:{if(chuangguan(ship,map6)){Can_go[ship+1]=true;}break;}
					case 7:{if(chuangguan(ship,map7)){Can_go[ship+1]=true;}break;}
					case 8:{if(chuangguan(ship,map8)){Can_go[ship+1]=true;}break;}
					case 9:{if(chuangguan(ship,map9)){Can_go[ship+1]=true;}break;}
					case 10:{if(chuangguan(ship,map10)){Can_go[ship+1]=true;}break;}
				}
				TD=tmp;
				assTD[0]=Tmp[0];
				assTD[1]=Tmp[1];
				break;
			}
		}
		if(!Is_end)
		{
			goto flag;
		}
		system("cls");
		if(MessageBox(NULL,"��Ϸ����ᣬ�Ƿ������","��ŵ����5:����ħ���ľ���",MB_YESNO)==6)
		{
			HP=0x7f7f7f7f7f;
			MP=0x7f7f7f7f;
			ATK=0x3f3f3f3f;
			HideCursor(1);
			Is_change=false;
			maxHP=HP;
			maxMP=MP;
			goto sky;
		}
	}
	if(ch2==9)
	{
		Inotia();
		POF();
		Sleep(1000);
		tiaose(10);
		exit(0);
	}
	if(ch2<1||ch2>9)
	{
		goto sky;
	}
}
int main() {
	srand((int)time(0));
	int ch=0;
	if(MessageBox(NULL,"�Ƿ��ȡ�浵��","��ŵ����5:����ħ���ľ���",MB_YESNO)==6)
	{
		Read();
		Is_save=true; 
		ch=1;
		system("mode con cols=120 lines=30");
	}
	else
	{
		system("mode con cols=120 lines=30");
		memset(Is_first,true,sizeof(Is_first));
		Can_go[1]=true;
		jindu(50);
	}
	start:
	
	if(!Is_save)
	{
		cout<<endl;
		cout<<endl;
		tiaose(14);
		Slowsay("      1,������Ϸ\n");
		Slowsay("      2,�鿴��Ϸ����\n");
		Slowsay("      3,�鿴���߼��\n");
		Slowsay("      4,�˳�\n");
		cout<<endl;
		Sleep(600);
		Slowsay("      ��ѡ��:");
		cin>>ch;
	}
	if(ch==1) {
		if(!Is_save)
		{
			getline(cin,s);
			go:
			jindu(50);
			Slowsay("���������������֣�");
			getline(cin,name);
			if(name.size()>15) {
				Slowsay("�Բ����������Ȳ��ó���15���ַ�����");
				Sleep(1000);
				goto go;
			}
			if(name.empty())
			{
				Slowsay("�Բ������ֲ���Ϊ�գ���");
				Sleep(1000);
				goto go;
			}
			Sleep(500);
		}
		game();
		system("cls");
		Sleep(2500);
		stop_time=55;
		HideCursor(0);
		Slowsay("��ǣ�\n\n");
		Sleep(1000);
		Slowsay("ǰ�������ڿ���һ�����ӣ���һλ�Ѿ����۵�OIerд��\n");
		Sleep(1000);
		Slowsay("��˵��6�������Լ��߹���ǧǧ��������·�����񣬻�������Щ�ܶ�����Ӱ��������Ŀ\n");
		Sleep(1000);
		Slowsay("6��ǰ��12������������ԣ�I will AK IOI!\n");
		Sleep(1000);
		Slowsay("�������ȥ�ˣ����վ�û�ܴﵽ���Ŀ��\n");
		Sleep(1000);
		system("cls");
		Slowsay("�����������ã�һ�ж���ֵ�ã���Ϊ��Ҳ�ջ�����౦��Ķ���\n");
		Sleep(1000); 
		Slowsay("�ڹ�ȥ�����£���������С�»���������ؼǵ�\n");
		Sleep(1000);
		system("cls");	
		Sleep(1000);
		Slowsay("���ԣ�����̤������Ϣѧ��������·ʱ�����÷��ڣ���ʹ��û�ܴ�����Ŀ�꣬oi֮·��Զ��һ����ů���ọ́���Ȼֻ��6�꣬�����������һ����ʼ����������\n");
		Sleep(1500);
		system("cls");
		Slowsay("���Ͱɣ����꣡\n");
		Sleep(2500);
		system("cls");
		Sleep(2000);
		stop_time=60;
		Slowsay("Special Thanks:\n\n");
		Slowsay("Mrs Zheng  &  Zhangtianli  &  Chenyang\n\n\n");
		Slowsay("and who sitting in front of the computer\n")
		Sleep(3000);
		system("cls");
		Sleep(1500);
		Slowsay("���Դ���Ϸ����������OI�����Ϸܶ����ഺ\n");
		Slowsay("                                      Presented by LXZY\n");
		Sleep(1000);
		HideCursor(1);
	}
	if(ch==2) {
		jindu(50);
		getline(cin,s);
		cout<<endl;
		cout<<endl;
		stop_time+=20;
		Slowsay("����˵�أ�������ǡ���������\n");
		Sleep(1500);
		Slowsay("�������ʲô��\n");
		Sleep(1000);
		Slowsay("Enter������...");
		getline(cin,s);
		stop_time-=10;
		goto start;
	}
	if(ch==3) {
		system("cls");
		jindu(50);
		getline(cin,s);
		Slowsay("				�q����r \n");
		Slowsay("				{/ o  o /} \n");
		Slowsay("				(  (oo)  ) \n");
		Slowsay("	   			  ����   \n");
		Slowsay("����Ϸ���ߣ����Ͳ˼�һ��������һ����������������Ц�����ھ����˳���8�����µ�Ӣ�·�ս�󣬱����һ��������Ϸ������λ֧���ҵ��˸�����㽨�飬�һᾡ��ȥ�Ľ�������\n");
		cout<<endl<<endl;
		Slowsay("$$$$$�ܾ�������Ϸ����������Ϸʱ�䣬�������ԣ��ϻ���$$$$$\n\n");
		Sleep(450);
		Slowsay("Enter������...");
		getline(cin,s);
		goto start;
	}
	if(ch==4) {
		Inotia();
		POF();
		tiaose(10);
		Sleep(2000);
	}
	if(ch!=1&&ch!=2&&ch!=3) {
		cout<<endl;
		Slowsay("������1����3�ڵ�����������\n");
		Sleep(1000);
		goto start;
	}
	tiaose(15);
	return 0;
}
