#include<cstdio>
#include<conio.h>
#include<cstring>
#include<Windows.h>
#include<time.h>
#include<cstdlib>
#include"charGraph.h"//GUI����Ԥ���뺯��
#include"setting.h"//���ò���Ԥ���뺯��
#include"analysis.h"//����ʶ��ģ��
#include"PassWord.h"
/*
 *	�˻��Ի�ģ��	@An
 *
 *	1.0 ���̰�
 *	��Ҫ���ã����Ը����㷨����Ч��GUI
 *
 */
void Chat();//�������ģ��
void GUI();//��ʼ�˵�ͼ�ν���
void About();//���ڽ���
void Setting();//����ģ��
int _style = 0;//ȫ����ʽ
char temp[1000]={""};//�������컺��


#pragma warning(disable:4996)

int main() {
	PassWord();
	srand((unsigned)time(NULL));
	_style = FileSave(_style, 0);//���ļ���ȡ����
	char temp[1000]={""};
	Library();
	system("title AnSMART���ܳ���");
	system("mode con cols=81 lines=24");
	Welcome();//��ӭ����
	GUI();//������
	return 0;
}

void GUI() {
	int m = -1,n = 0;
	char temp1[10][1000]={
		"     *��ʼ����*                         ������ģ�飬��ʼ�������졣�������AI���м򵥵ĶԻ���AIҲ�������һЩС���⡣���ң�AI��������һЩ�򵥵�������Ŀ��      ",
		"     *���ý���*                         ������������С�����ú����������ɫ���ã��������ǻ��ṩһЩAI�����Ի����ܣ�                                            ",
		"     *��������*                         ������ں�֧�ֽ��棬�Ķ�����������֮�е�һЩС�������Լ�ʹ�ó���ķ�����                                                ",
		"     *�˳�����*                         �����˳����򡣻�ӭ���ĵ�ʱ�������档����Ȼûɶ����ģ����Ͼ���������ô�ã���һ��д��ô���Ĵ���ѽ��û�й���Ҳ�п��Ͱɣ�  "
	};
	char temp2[1000]={"      ��     ��    ����      ����   ����      ����    ������    ��������    ����   ����  ��    ��   ��  �� ��  ��   ��    ��  ��    ��    ��       �� ��  �� ��    ��      ��    ��     ��  ��    ��  ������      ��      ������ ��  ��      ��    ��    ��     ��  ��������  ����        ��     ��   ����   ��  ��    ��  ��    ��     ��  ��    ��  ��  ��      ��    ��    ��     ��    ����    ��    ��     ��  ��    ��  ��    ��    ��    "};
	char temp[1000]={"  ��ӭʹ��                                                                                                ��ʼ����                  ���ý���                  ��������                  �˳�����                "};
	while(1)
	{
		m = -1;//��ʾ���ù������棬�ò˵�ѡ�����е�m�ػ����
		CreatGUI(40,20,0,0);
		MsgBox(temp2,38,0,1);
		MsgBox("     *����˵��*                         ����ѡ����          ���������ƶ����    ���������ƶ����    ENTER ��ȷ��ѡ��    ESC ��������һ��    ������ʱ���룺�˳���",12,27,9);
		MsgBox(temp,15,0,9);
		SetTmpOut();
		PrintWall(1);
		printf("\n\n\n");
		n = 0;
		while(n == 0){
			switch (m=StartMenu(temp1,m))
			{
			case 0: {//��Chatģ��
				Chat();
				break;
			}
			case 1: {//��Settingģ��
				Setting();
				n = 1;
				break;
			}
			case 2: {//��Aboutģ��
				About();
				n = 1;
				break;
			}
			case 3: {//ִ��Save And Exit
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
	"���ѽ���ܸ�����ʶ�㣡",
	"�������ѽ��",
	"�ҽ�С������ʵ�һ���һ�����֣������Ҳ������㡣",
	"С����ǰ��������",
	"���֣��������"
	};
	CreatWall(40,20,0,0);
	TextCover(_style,0,_welcomeChat[rand() % 5],25);
	TextComposition();
	while (strcmp(temp, "�˳�") != 0) {
		printf("\n  �����������֣�");
		
		stdin_get_str(temp);
		if (strcmp(temp, "") == 0)
		{
			strcpy(temp, "��⵽�մ����رռ����ʶ��ģ��");
			TextCover(_style, 1, temp, 25);
			TextComposition();
			continue;
		}
		TextCover(_style,1,temp,25);
		TextComposition();
		if(strcmp(temp, "�˳�") == 0){
			_sleep(200);
			break;
		}
		
		/*�����ǻ�����ʶ����*/
		TextCover(_style,0,_Analysis(temp),25);
		TextComposition();
	}
}

void About(){
	
	char temp[2000]={" ��ABOUT��                                                                                                                                      ���ڣ����ȣ����������ơ�������������һ����ɣ�����ΪʲôҪ�������������ʵ��ֻ�ǳ����Ҹ��˵İ��ö��ѣ����˶����Լ��� C���Դ���Ŀ�������ƿ�������������������Ӳ߻���ʵʩ��ʱ�����£�����������ʱ����ʵ���ں����Ҳ����˵���󲿷ִ��붼���ں���д�ġ�����д���˵��ģ���ʱ���ܺʹ����Ѿ��ﵽ��һǧ�˰��У�����������ɵĴ�������5000�����ҡ�Ϊʲô�Ӳ߻���ʼ������ʱ�侭������ô�ã���ʵҲ����һ������һֱ�����ң�һֱ�ڲ��ԵĻ����²�ͨ����ֱ��16��ĵ�18��ʱ���ҲŽ�������ַ�ʶ������⣬�ں�����ʱ�����Ҳ���д�˼���ר������ʶ��Ͷ�ȡ���ĵĺ���ģ�飬����ο����У�Ӧ�ÿ����ɵ����ó���                                                               ��SUPPORT��                                                                                                                                    ����֧����Դ����ʵ�뷨��Դ���ҵ�Ů���ѣ���У�ڼ�������æ�������ܻ�����Ϣ�������Ҿ��������������������ͷ�����Գ�����������˵����˼ά��                                                        ����������Է��ص�������"};
	CreatGUI(40,20,0,0);//����About֧�ֽ���
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
		"      ��ɫ����                          �Դ��ڵ���ɫ�ͱ���ɫ�������á�����Ϊ�������̨���ܷ���ͼƬ��ֻ�������֣����Խ���һ������                                ",
		"      ������ʽ                          ��������ʱ���������ͣ���Ϊ�޿򡢷��򡢽Ǳ꣬������ʽ����ѡ��Ŀǰ��ʱ���ܵ������ڴ�С�����ڻ������                    ",
		"      �����ϼ�                          ���ص���ʼ����                                                                                                          "
	};
	while (1)          
	{
		m = -1;
		SettingGUI();
		while (n == 0)
		{
			switch (m = SettingChioce(str,m))
			{
			case 0: {//��ɫ����ģ��
				ColorSet();
				break;
			}
			case 1: {//��ʽ����ģ��
				_style = StyleSet();
				SettingGUI();
				break;
			}
			case 2: {//�˳�ģ��
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
