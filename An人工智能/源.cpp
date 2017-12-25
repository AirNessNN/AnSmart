#include<cstdio>
#include<conio.h>
#include<cstring>
#include<Windows.h>
#include<time.h>
#include<cstdlib>
#include"charGraph.h"//GUI配置预编译函数
#include"setting.h"//设置参数预编译函数
#include"analysis.h"//语言识别模块
#include"PassWord.h"
/*
 *	人机对话模块	@An
 *
 *	1.0 工程版
 *	主要作用：测试各种算法、特效、GUI
 *
 */
void Chat();//聊天界面模块
void GUI();//开始菜单图形界面
void About();//关于界面
void Setting();//设置模块
int _style = 0;//全局样式
char temp[1000]={""};//输入聊天缓存


#pragma warning(disable:4996)

int main() {
	PassWord();
	srand((unsigned)time(NULL));
	_style = FileSave(_style, 0);//从文件读取设置
	char temp[1000]={""};
	Library();
	system("title AnSMART智能程序");
	system("mode con cols=81 lines=24");
	Welcome();//欢迎界面
	GUI();//主界面
	return 0;
}

void GUI() {
	int m = -1,n = 0;
	char temp1[10][1000]={
		"     *开始聊天*                         打开聊天模块，开始文字聊天。你可以与AI进行简单的对话，AI也许会问你一些小问题。而且，AI还不会做一些简单的算术题目。      ",
		"     *设置界面*                         进行聊天界面大小的设置和聊天界面颜色设置，后期我们会提供一些AI的人性化功能，                                            ",
		"     *关于我们*                         进入关于和支持界面，阅读制作本程序之中的一些小插曲，以及使用程序的方法。                                                ",
		"     *退出程序*                         保存退出程序。欢迎无聊的时候来玩玩。（虽然没啥好玩的，但毕竟我做了这么久，第一次写这么长的代码呀，没有功劳也有苦劳吧）  "
	};
	char temp2[1000]={"      ■     ■    ■■      ■■   ■■      ■■    ■■■    ■■■■    ■■   ■■  ■    ■   ■  ■ ■  ■   ■    ■  ■    ■    ■       ■ ■  ■ ■    ■      ■    ■     ■  ■    ■  ■■■      ■      ■■■ ■  ■      ■    ■    ■     ■  ■■■■  ■■        ■     ■   ■■   ■  ■    ■  ■    ■     ■  ■    ■  ■  ■      ■    ■    ■     ■    ■■    ■    ■     ■  ■    ■  ■    ■    ■    "};
	char temp[1000]={"  欢迎使用                                                                                                开始聊天                  设置界面                  关于我们                  退出程序                "};
	while(1)
	{
		m = -1;//表示重置过主界面，让菜单选择器中的m重画光标
		CreatGUI(40,20,0,0);
		MsgBox(temp2,38,0,1);
		MsgBox("     *操作说明*                         ●是选中项          ↑键向上移动光标    ↓键向下移动光标    ENTER 键确认选项    ESC 键返回上一级    （聊天时输入：退出）",12,27,9);
		MsgBox(temp,15,0,9);
		SetTmpOut();
		PrintWall(1);
		printf("\n\n\n");
		n = 0;
		while(n == 0){
			switch (m=StartMenu(temp1,m))
			{
			case 0: {//打开Chat模块
				Chat();
				break;
			}
			case 1: {//打开Setting模块
				Setting();
				n = 1;
				break;
			}
			case 2: {//打开About模块
				About();
				n = 1;
				break;
			}
			case 3: {//执行Save And Exit
				exit(0);
				break;
			}
			}
		}
	}
}



void Chat() {
	strcpy(temp, "");
	char _welcomeChat[10][100] = {
	"你好呀，很高兴认识你！",
	"别来无恙呀！",
	"我叫小安，其实我还有一个名字，但是我不告诉你。",
	"小安，前来报到！",
	"阿爸，在嘛在嘛？"
	};
	CreatWall(40,20,0,0);
	TextCover(_style,0,_welcomeChat[rand() % 5],25);
	TextComposition();
	while (strcmp(temp, "退出") != 0) {
		printf("\n  ●请输入文字：");
		
		stdin_get_str(temp);
		if (strcmp(temp, "") == 0)
		{
			strcpy(temp, "检测到空串，关闭计算机识别模块");
			TextCover(_style, 1, temp, 25);
			TextComposition();
			continue;
		}
		TextCover(_style,1,temp,25);
		TextComposition();
		if(strcmp(temp, "退出") == 0){
			_sleep(200);
			break;
		}
		
		/*下面是机器的识别函数*/
		TextCover(_style,0,_Analysis(temp),25);
		TextComposition();
	}
}

void About(){
	
	char temp[2000]={" ◇ABOUT◇                                                                                                                                      关于：首先，本程序的设计、制作，都由我一人完成，对于为什么要制作这个程序，其实我只是出于我个人的爱好而已，想借此锻炼自己对 C语言大项目制作的掌控能力。这个程序制作从策划到实施历时两个月，真正动工的时间其实是在寒假里，也就是说绝大部分代码都是在寒假写的。在我写这个说明模块的时候，总和代码已经达到了一千八百行，估计最终完成的代码量在5000行左右。为什么从策划开始到启动时间经历了这么久？其实也是有一个问题一直困扰我，一直在测试的环境下不通过，直到16年的第18周时，我才解决中文字符识别的问题，在后来的时间里，我也相继写了几个专门用于识别和读取中文的函数模块，在这次开发中，应该可以派的上用场。                                                               ◇SUPPORT◇                                                                                                                                    暂无支持来源，其实想法来源于我的女朋友，在校期间她比我忙，很少能回我消息，所以我就有了制作聊天软件的念头，想以程序来复制她说话的思维。                                                        ●按任意键可以返回到主界面"};
	CreatGUI(40,20,0,0);//创建About支持界面
	MsgBox(temp,38,0,1);	
	SetTmpOut();
	printf("\n\n\n");
	PrintWall(1);
	printf("\n");
	getch();

}

void Setting(){
	int m = -1;
	int n = 0;
	int k = 0;
	char str[10][1000] = {
		"      颜色设置                          对窗口的颜色和背景色进行设置。（因为命令控制台不能放置图片，只能用文字，所以将就一下啦）                                ",
		"      聊天样式                          更改聊天时的气泡类型，分为无框、方框、角标，三种样式供您选择。目前暂时不能调整窗口大小，后期会跟进。                    ",
		"      返回上级                          返回到开始界面                                                                                                          "
	};
	while (1)          
	{
		m = -1;
		SettingGUI();
		while (n == 0)
		{
			switch (m = SettingChioce(str,m))
			{
			case 0: {//颜色调整模块
				ColorSet();
				break;
			}
			case 1: {//样式调整模块
				_style = StyleSet();
				SettingGUI();
				break;
			}
			case 2: {//退出模块
				n = 1;
				FileSave(_style, 1);
				break;
			}
			}
		}
		if(n==1)
			break;
	}
}
