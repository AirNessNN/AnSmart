#pragma once
/*
 *		本嵌入式模块需要以下头文件才可以编译成功，请引入
 *
 *		@AirNess 安全模块
 *
 *
 *
 *
 *
 *
 */
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#include<string.h>
#define ADMINISTRATOR "admin"

char PW_newpassword[20];				//新建密码缓存
char PW_oldpassword[20];				//正式密码
char PW_contect[20];					//密码对照
char PW_check_p[20];					//密码是否被锁定的文件变量
int PW_chioce1, PW_chioce2;				//switch的变量
int PW_times;							//密码超时的次数
int PW_check = 0;						//检测变量
int c4, PW_i;
FILE *PW_fp;							//文件指针
char PW_str[20];

void PW_Login();
void PW_Newpassword();
void PW_Revise();
void PW_Resetting();
void PW_Login_N();
void PW_Draw();
void PW_Draw_wall();
void PW_FileCheck();
int PW_Keydown();
void PW_About();

#define CHAR_MAX 1000
//代替gets输入函数
char *PW_stdin_get_str(char *str) {
	fgets(str, CHAR_MAX, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	return str;
}

int PW_CheckIn(char str[])				/*密码合法性检测模块：返回值1合法、返回值2不合法*/
{
	int z = 0, i;
	if (strlen(str) == 6)
	{
		for (i = 0; i<6; i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
				z += 1;

		}
		if (z == 6)
			z = 1;
		else
			z = 2;
		return z;
	}
	else
	{
		z = 2;
		return z;
	}
}

/*----------------------------------密码读取模块----------------------------*/
void PW_PassWordRead()
{
	if ((PW_fp = fopen("Text.anl", "r")) == NULL)
	{
		PW_FileCheck();
	}
	rewind(PW_fp);						//定位到oldpassword上
	fgets(PW_oldpassword, 7, PW_fp);
	fseek(PW_fp, 6L, 0);
	fgets(PW_check_p, 2, PW_fp);
	rewind(PW_fp);

	PW_i = 0;
	if (strcmp(PW_oldpassword, "") != 0)
	{
		while (PW_i<6)
		{
			PW_oldpassword[PW_i] = PW_oldpassword[PW_i] - 30;
			PW_i++;
		}
	}
	//puts(oldpassword);
	fclose(PW_fp);						//关闭文件
}

/*----------------------------------密码写入模块----------------------------*/
int PW_PassWordWrite(char cache[20])
{
	int che;

	PW_i = 0;
	while (PW_i<6)
	{
		cache[PW_i] = cache[PW_i] + 30;
		PW_i++;
	}
	if ((PW_fp = fopen("Text.anl", "w")) == NULL)
	{
		printf("\n文件无法打开，写入失败！");
		exit(1);
	}
	fputs(cache, PW_fp);
	fclose(PW_fp);
	PW_fp = fopen("Text.anl", "r");
	strcpy(PW_contect, "");
	fgets(PW_contect, 7, PW_fp);
	if (strcmp(PW_contect, cache) == 0)
	{
		che = 1;					//检测写入文件的正确性
	}
	fclose(PW_fp);						//关闭文件
	return che;

}

/*----------------------------------缺省文件检测模块-----------------------------*/
void PW_FileCheck() {
	if ((PW_fp = fopen("Text.anl", "r")) == NULL)
	{
		printf("\n\t\t\t!!!当前密码文件已经失效，请输入【管理码】重置本模块!!!\n");
		PW_stdin_get_str(PW_contect);
		if (strcmp(PW_contect, ADMINISTRATOR) == 0)
		{
			system("cls");
			printf("\n\t\t\t\t\t按任意键重置\n");
			getch();
		}
		else
		{
			printf("\n\t\t\t管理码错误!程序即将关闭!\n");
			_sleep(800);
			exit(1);
		}


		PW_fp = fopen("Text.anl", "w");
		if ((PW_fp = fopen("Text.anl", "r")) == NULL)
		{
			printf("\n\t\t\t      文件有无法预知的错误，已经禁止启动！\n");
			exit(1);
		}
	}
}

/*----------------------------------开始图形绘制函数----------------------------*/
void PW_Draw() {
	printf("\t\t┌─────────────────────────────┐\n");
	printf("\t\t│                       *An安全模块*                       │\n");
	printf("\t\t│                         *制作人*                         │\n");
	printf("\t\t│                         ────                         │\n");
	printf("\t\t│                          胡浩伟                          │\n");
	printf("\t\t│                                                          │\n");
	printf("\t\t│                          版 本                           │\n");
	printf("\t\t│                          *3.2*                           │\n");
	printf("\t\t│                      --控件启动中--                      │\n");
	printf("\t\t│                                                          │\n");
	printf("\t\t└─────────────────────────────┘\n");
	printf("\t\t ");
	for (PW_i = 0; PW_i < 60; PW_i++)
	{
		printf(">");
		_sleep(rand() % 50);
	}
}

/*----------------------------------菜单绘制模块----------------------------*/
void PW_Draw_wall() {
	char wall[13][100] = {
		"\t\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" ,
		"\t\t┃********************************************************┃" ,
		"\t\t┃*                                                      *┃" ,
		"\t\t┃*                    *【登入程序】*                    *┃",
		"\t\t┃*                     【创建密码】                     *┃",
		"\t\t┃*                     【修改密码】                     *┃" ,
		"\t\t┃*                     【重置密码】                     *┃" ,
		"\t\t┃*                     【无密登入】                     *┃" ,
		"\t\t┃*                     【关于模块】                     *┃" ,
		"\t\t┃*                     【退    出】                     *┃" ,
		"\t\t┃*                                                      *┃" ,
		"\t\t┃********************************************************┃" ,
		"\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" };
	int i, j, k = 0;			//i值用来循环行数,j值用来绘制菜单图形，k值用来检测回车键是否按下
	i = 3;
	j = 0;
	while (k != 1)
	{
		fflush(stdin);
		for (j = 0; j < 13; j++)
		{
			puts(wall[j]);
		}
		printf("\t\t ●  ↑、↓键选择,ENTER键确认\n");
		switch (PW_Keydown())
		{
		case 72:							//方向键上
		{
			wall[i][25] = ' ';
			wall[i][38] = ' ';
			wall[i -= 1][25] = '*';
			wall[i][38] = '*';
			if (i<3)
			{
				i = 3;
				wall[i][25] = '*';
				wall[i][38] = '*';
				wall[i -= 1][25] = ' ';
				wall[i][38] = ' ';
				i = 3;
			}
			break;
		}
		case 80:							//方向键下
		{
			wall[i][25] = ' ';
			wall[i][38] = ' ';
			wall[i += 1][25] = '*';
			wall[i][38] = '*';
			if (i>8)
			{
				i = 9;
				wall[i][25] = '*';
				wall[i][38] = '*';
				wall[i += 1][25] = ' ';
				wall[i][38] = ' ';
				i = 9;
			}
			break;
		}
		case 13:							//回车键
		{
			k = 1;
			break;
		}
		}
		system("cls");
	}
	PW_chioce1 = i;
	k = 0;
}

/*----------------------------------按键键值读取模块----------------------------*/
int PW_Keydown()
{
	char c;
	if ((c = getch())<0)c = getch();
	return c;
}

/*----------------------------------密码显示加密模块----------------------------*/
void Encryption(char strC[20]) {

	strcpy(PW_str, "");
	PW_i = 0;														//重置计数器i
	do
	{
		PW_str[PW_i] = getch();
		if (PW_str[PW_i] == '\r')
		{
			break;
		}
		if (PW_str[PW_i] == '\b')
		{
			if (PW_i == 0)
			{
				printf("\a");
				continue;
			}
			PW_i = PW_i - 1;
			printf("\b");
		}
		else
		{
			PW_i++;
			printf("*");
		}
	} while (PW_str[PW_i] != '\n'&&PW_i<20);
	PW_str[PW_i] = '\0';
	strcpy(strC, PW_str);
}

/*----------------------------------主程序----------------------------*/
void PassWord()
{
	system("mode con cols=80 lines=23");
	strcpy(PW_oldpassword, "");
	strcpy(PW_newpassword, "");
	strcpy(PW_contect, "");
	PW_PassWordRead();
	printf("\t\t\t\t\t控件启动中...\n");
	PW_Draw();
	if (strcmp(PW_check_p, "a") == 0)
	{
		PW_check = 4;
	}
	if (PW_check == 4)					//如果check返回值是4，则锁定程序
	{
		printf("\n\t\t\t\t   程序被锁定！请联系作者\n");
		getch();
		exit(1);
	}
	printf("\n\t\t\t\t\t控件启动完成！\n");
	_sleep(1000);
	system("cls");
	while (1)
	{
		if (PW_check == 4)					//如果check返回值是4，则锁定程序
		{
			printf("\n\t\t\t\t程序被锁定！请联系作者");
			getch();
			exit(1);
		}
		PW_Draw_wall();					//调用绘制菜单函数

		switch (PW_chioce1)
		{
		case 3:
		{
			fflush(stdin);
			PW_Login();
			break;
		}
		case 4:
		{
			fflush(stdin);
			PW_Newpassword();
			break;
		}
		case 5:
		{
			fflush(stdin);
			PW_Revise();
			break;
		}
		case 6:
		{
			fflush(stdin);
			PW_Resetting();
			break;
		}
		case 7:
		{
			fflush(stdin);
			PW_Login_N();
			break;
		}
		case 8:
		{
			fflush(stdin);
			PW_About();
			break;
		}
		case 9:
		{
			printf("\n\t\t\t\t按任意键退出\n");
			getch();
			exit(1);
		}
		default:
		{
			fflush(stdin);
			system("cls");
			printf("\n\t\t\t\t\t输入不合法！\n");
			printf("\n\t\t\t\t\t请重新键入关键字：\n");
			break;
		}
		}
		if (PW_check == 1)
		{
			PW_check = 0;
			break;
		}
		if (PW_check == 2)
		{
			PW_check = 0;
		}

	}
	/*以下内容插入其他函数模块*/

}

/*----------------------------------密码登入模块----------------------------*/
void PW_Login()
{
	/*密码输入和核对模块*/
	if (strcmp(PW_oldpassword, "") == 0)
	{
		system("cls");
		printf("\n\t\t\t\t\t当前无密码，请创建！\n\t\t\t\t请按任意键进入密码写入模块!");
		getch();
		PW_Newpassword();
	}
	printf("\n\t\t\t\t\t请输入密码：");
	fflush(stdin);
	Encryption(PW_contect);
	if (strcmp(PW_contect, PW_oldpassword) == 0)
	{
		PW_check = 1;
		printf("\n\t\t\t\t\t核对中...\n\t\t\t\t\t登入成功！\n\t\t\t\t\t进入主程序...\n");
		getch();
		system("cls");
	}
	else
	{
		for (PW_times = 3; PW_times >= 1; PW_times--)						//针对错误输入的超时
		{
			fflush(stdin);
			system("cls");
			printf("\n\t\t\t\t\t核对出错！\n\t\t\t\t\t请重新输入！");
			printf("\n\t\t\t\t\t你还有【%d】次机会！\n\t\t\t\t\t请在此输入：", PW_times);
			Encryption(PW_contect);
			if (strcmp(PW_contect, PW_oldpassword) == 0)
			{
				PW_check = 1;
				printf("\n\t\t\t\t\t核对中...\n\t\t\t\t\t登入成功！\n\t\t\t\t\t按任意键进入主程序...\n");
				getch();
				system("cls");
				break;
			}
		}
		if (PW_check == 1)											//如果check返回值不为1则锁定程序
		{
			system("cls");
			fflush(stdin);
		}
		else
		{
			if ((PW_fp = fopen("Text.anl", "a+")) == NULL)
			{
				printf("\n\t\t\t\t\t遇到未知错误！\n");
				exit(1);
			}
			fputs("a", PW_fp);
			printf("\n\t\t\t\t\t错误!\n");
			PW_check = 4;
		}
	}
}
/*----------------------------------密码创建模块---------------------------------------*/
void PW_Newpassword()
{
	system("cls");
	printf("\n\t\t\t\t\t写入模块启动中...");
	switch (PW_CheckIn(PW_oldpassword))
	{
	case 1: { printf("\n\t\t\t\t与当前密码冲突，尝试输入密码!\n"); printf("\n\t\t\t\t\t请键入关键字\n"); break; }
	case 2:
	{
		while (1)
		{
			printf("\n\t\t\t\t请键入6位纯数字的新密码：");
			Encryption(PW_newpassword);									//输入和检测密码的合法性
			if (PW_CheckIn(PW_newpassword) == 2)
			{
				system("cls");
				printf("\t\t\t\t\t输入密码格式不正确!\n\t\t\t\t\t请不要输入特殊字符和字母！\n");
				PW_check = 0;										//重置check
			}
			else
			{
				printf("\n\t\t\t\t\t请再次确认密码：");
				Encryption(PW_contect);
				if (strcmp(PW_contect, PW_newpassword) == 0)
				{
					if (PW_PassWordWrite(PW_newpassword) != 1)
					{
						system("cls");
						printf("\n\t\t\t\t\t密码创建失败！请检查文件是否丢失！\n");
						break;
					}
					printf("\n\t\t\t\t\t密码创建完成!\n");
					strcpy(PW_newpassword, PW_oldpassword);			//新建密码缓存转为正式密码
					strcpy(PW_contect, "");						//初始化contect
					PW_PassWordRead();

					break;
				}
				else
				{
					printf("\n\t\t\t\t\t核对失败，请重新创建！\n");
					strcpy(PW_newpassword, " ");					//因错误而初始化新密码缓存
				}
			}
		}
		break;
	}
	default:
		break;
	}
}

void PW_Revise()													//修改密码模块
{
	printf("\n\t\t\t\t\t密码修改程序启动！\n");
	switch (PW_CheckIn(PW_oldpassword))								/*检测是否存在密码*/
	{
	case 1:														//存在密码
	{
		printf("\n\t\t\t\t\t请输入旧密码：");
		fflush(stdin);
		Encryption(PW_contect);
		switch (strcmp(PW_contect, PW_oldpassword))					//核对密码正确性
		{
		case 0:
		{
			while (1)
			{
				printf("\n\t\t\t\t\t请键入6位纯数字的新密码：");
				fflush(stdin);
				Encryption(PW_newpassword);								//输入和检测密码的合法性
				if (PW_CheckIn(PW_newpassword) == 2)
				{
					system("cls");
					printf("\n\t\t\t\t\t输入密码格式不正确\n\t\t\t\t\t请不要输入特殊字符和字母！\n");
				}
				else
				{
					printf("\n\t\t\t\t\t请再次确认密码：");
					fflush(stdin);
					Encryption(PW_contect);
					if (strcmp(PW_contect, PW_newpassword) == 0)
					{
						if (PW_PassWordWrite(PW_newpassword) != 1)
						{
							system("cls");
							printf("\t\t\t\t\t文件写入失败！请检查文件是否丢失！\n");
							break;
						}
						printf("\n\t\t\t\t\t密码创建完成!\n");
						strcpy(PW_newpassword, PW_oldpassword);		//新建密码缓存转为正式密码
						strcpy(PW_contect, " ");					//初始化contect
						strcpy(PW_newpassword, " ");				//初始化newpassword
						PW_PassWordRead();
						break;
					}
					else
					{
						printf("\n\t\t\t\t\t核对失败，请重新创建！\n");
						strcpy(PW_newpassword, " ");				//因错误而初始化新密码缓存
					}
				}
			}
			break;
		}
		default:
		{
			system("cls");
			printf("\n\t\t\t\t\t密码核对出错，登入程序已重置！\n");
			break;
		}
		}
		break;
	}
	default:													//不存在密码
	{
		system("cls");
		printf("\n\t\t\t\t\t当前不存在密码，请创建密码!\n");
		break;
	}
	}
}
/*----------------------------------密码重置模块----------------------------*/
void PW_Resetting()
{
	system("cls");
	printf("\n\t\t\t\t\t重置模块启动...\n");
	switch (PW_CheckIn(PW_oldpassword))								//检测是否存在密码
	{
	case 1:														//存在密码
	{
		printf("\n\t\t\t\t\t请输入密码：");
		fflush(stdin);
		Encryption(PW_contect);
		switch (strcmp(PW_contect, PW_oldpassword))					//核对密码
		{
		case 0:
		{
			system("cls");
			printf("\n\t\t\t\t\t密码确认完成！\n");
			printf("\n\t\t\t\t\t密码重置完成！\n");
			strcpy(PW_oldpassword, "");
			PW_PassWordWrite(PW_oldpassword);
			PW_PassWordRead();
			break;
		}
		default:
		{
			system("cls");
			printf("\n\t\t\t\t\t密码核对出错，登入程序已重置！\n");
			break;
		}
		}
		break;
	}
	default:
	{
		system("cls");
		printf("\n\t\t\t\t\t密码核对出错，登入程序已重置！\n");
		break;
	}
	}
}

/*----------------------------------无密码登入模块----------------------------*/
void PW_Login_N()
{
	if (strcmp(PW_oldpassword, "") != 0)							//确认是否存在密码
	{
		system("cls");
		printf("\n\t\t\t\t\t当前存在密码，请尝试输入!\n");

	}
	else
	{
		system("cls");
		printf("\n\t\t\t\t\t无密码登入成功，按任意键进入主程序...\n");
		getch();
		system("cls");
		PW_check = 1;												//返回check值
	}
}

/*----------------------------------关于模块----------------------------*/
void PW_About() {
	system("cls");
	printf("\t\t┌─────────────────────────────┐\n");
	printf("\t\t│                       *An安全模块*                       │\n");
	printf("\t\t│    *制作人*                                关于          │\n");
	printf("\t\t│    ────                           本模块为嵌入式     │\n");
	printf("\t\t│     胡浩伟                            多用途模块，对     │\n");
	printf("\t\t│                                       大部分程序可以     │\n");
	printf("\t\t│ ---更新内容---                        兼容并且一定程     │\n");
	printf("\t\t│                                       程度上可以保证     │\n");
	printf("\t\t│  修复因函数命名                       大部分程序的安     │\n");
	printf("\t\t│  问题而无法嵌套                       全。限制陌生人     │\n");
	printf("\t\t│  在其他程序中。                       的访问。           │\n");
	printf("\t\t│                                                          │\n");
	printf("\t\t│                                                          │\n");
	printf("\t\t│                                            *版本：3.2    │\n");
	printf("\t\t│                                                          │\n");
	printf("\t\t└─────────────────────────────┘\n");
	printf("\t\t \n");
	getch();
	system("cls");
}