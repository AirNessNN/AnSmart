#pragma once
#pragma warning(disable:4996)
/*
 *		人工模块专用设置头文件
 *
 *		@AirNess
 *
 *		函数名称
 *		SettingGUI()
 *		SettingChioce()
 *		ClolrSet()
 *		StyleSet()
 *		
 */
struct _colorSetting//颜色设置
{
	char _nPreColorFlag;//前景色参数
	char _nBackColorFlag;//背景色参数
	char strColorFormat[256];//输出到控制台的参数串
	int _colorChioce;//颜色选择器，-1是默认状态，供选择器识别是否按下颜色类型
}_cSetting;

void SettingGUI() {
	int n = 0;
	char temp[1000] = { "  系统设置                                                                                                颜色设置                  聊天样式                  返回上级                                          " };
	CreatGUI(40, 20, 0, 0);//创建设置菜单界面
	MsgBox("          *****  *****  *****  *****  ***  *****  *****                           *      *        *      *     *   *   *  *                               *****  *****    *      *     *   *   *  *  **                               *  *        *      *     *   *   *  *   *                           *****  *****    *      *    ***  *   *  *****                 ", 38, 0, 1);
	MsgBox(temp, 15, 0, 9);
	SetTmpOut();
	PrintWall(1);
	printf("\n\n\n");
}

int SettingChioce(char str[1000][1000],int m) {
	int i, k = 0;;//定位器
	if (m < 0)//用m记住上次进入选项时光标的位置
	{
		i = 13;//当m小于0时候则重置过主界面，因此重画光标
	}
	else
	{
		i = m + 14;//当m大于0则代表主界面没有重置过，缓存还在，因此记住进入选项时光标的位置
	}
	while (k != 1)//k值用来确认回车键是否被按下
	{
		fflush(stdin);
		SetTmpOut();//将缓存中的内容输出到屏幕中
		system("cls");
		PrintWall(1);
		switch (Keydown())
		{
		case 72: {//------------------方向上键
			if (i == 13)
			{
				i = 14;
			}
			window_1.text[i][14] = ' ';
			window_1.text[i][15] = ' ';
			window_1.text[i - 1][14] = -95;
			window_1.text[i - 1][15] = -15;
			i -= 1;
			if (i < 14)
			{
				i = 14;
				window_1.text[i][14] = -95;
				window_1.text[i][15] = -15;
				window_1.text[i - 1][14] = ' ';
				window_1.text[i - 1][15] = ' ';
			}
			MsgBox(str[i - 14], 12, 27, 9);
			break;
		}
		case 80: {//------------------方向下键
			window_1.text[i][14] = ' ';
			window_1.text[i][15] = ' ';
			window_1.text[i + 1][14] = -95;
			window_1.text[i + 1][15] = -15;
			i += 1;
			if (i > 16)
			{
				i = 16;
				window_1.text[i][14] = -95;
				window_1.text[i][15] = -15;
				window_1.text[i + 1][14] = ' ';
				window_1.text[i + 1][15] = ' ';
			}
			MsgBox(str[i - 14], 12, 27, 9);
			break;
		}
		case 13: {//------------------回车键
			if (i == 13)
			{
				break;
			}
			k = 1;
			break;
		}
		case 27: {//------------------ESC键
			return 2;
			break;
		}
		}
	}
	return i - 14;
}

int ColorSet() {
	int i = 11, j = 18, k = 0;//i是行数,j是列数
	char temp[1000] = {"          │                                                            1)前景色  │  黑  色      蓝  色      绿  色      湖蓝色      红  色              │  ------                                                    2)背景色  │  紫  色      黄  色      白  色      灰  色      淡蓝色              │                                                            C)确  认  │  淡绿色      浅绿色      淡红色      淡紫色      淡黄色              │                                                              返  回  │  亮白色                                                              │                                                            "};
	char temp1[1000] = { "          *****  *****  *****  *****  ***  *****  *****                           *      *        *      *     *   *   *  *                               *****  *****    *      *     *   *   *  *  **                               *  *        *      *     *   *   *  *   *                           *****  *****    *      *    ***  *   *  *****                 " };

	_cSetting._colorChioce = -1;//颜色选择器，-1是默认状态，供选择器识别是否按下颜色类型
	CreatGUI(40,20,0,0);
	MsgBox(temp1, 38, 0, 1);
	MsgBox(temp, 38, 0, 8);
	while (k != -1)
	{
		fflush(stdin);
		SetTmpOut();
		system("cls");
		PrintWall(1);
		k = 0;
		switch (Keydown())
		{
		case 49: {//快捷键：前景色
			while (k < 6)
			{
				window_1.text[11][6 + k] = '-';
				window_1.text[13][6 + k] = ' ';
				k++;
			}
			_cSetting._colorChioce = 0;//0是前景色选择模式
			MsgBox("颜色类型 前景色 ", 6, 31, 2);
			break;
		}
		case 50: {//快捷键：背景色
			while (k < 6)
			{
				window_1.text[13][6 + k] = '-';
				window_1.text[11][6 + k] = ' ';
				k++;
			}
			_cSetting._colorChioce = 1;//1是背景色选择模式
			MsgBox("颜色类型 背景色 ", 6, 31, 2);
			break;
		}
		case 99: {//快捷键：保存
			if (_cSetting._colorChioce == 1 || _cSetting._colorChioce == 0)//检测是否有选择颜色类型
			{
				if (_cSetting._nBackColorFlag > 0 || _cSetting._nPreColorFlag > 0)
				{
					sprintf(_cSetting.strColorFormat, "color  %c%c", _cSetting._nBackColorFlag, _cSetting._nPreColorFlag);
					system(_cSetting.strColorFormat);
					MsgBox(" 通知！ 设置成功", 6, 31, 2);
				}
				else
				{
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
				}
			}
			else
			{
				MsgBox(" 错误！  未选择 ", 6, 31, 2);
			}
			break;
		}
		case 72: {//上
			if (i - 2 < 11)
			{
				//在顶端不作为
			}
			else
			{
				k = 0;
				while (k < 6)
				{
					window_1.text[i - 2][j + k] = '-';
					window_1.text[i][j + k] = ' ';
					k++;
				}
				i -= 2;
			}
			MsgBox(temp1, 38, 0, 1);
			if (_cSetting._colorChioce == 0)
				MsgBox("颜色类型 前景色 ", 6, 31, 2);
			else if (_cSetting._colorChioce == 1)
				MsgBox("颜色类型 背景色 ", 6, 31, 2);
			break;
		}
		case 80: {//下
			if (i + 2 > 15)
			{
				if ((j == 18 || j == 6) && i + 2 <= 17)
				{
					k = 0;
					while (k < 6)
					{
						window_1.text[i + 2][j + k] = '-';
						window_1.text[i][j + k] = ' ';
						k++;
					}
					i += 2;
				}
			}
			else
			{
				
				k = 0;
				while (k < 6)
				{
					window_1.text[i + 2][j + k] = '-';
					window_1.text[i][j + k] = ' ';
					k++;
				}
				i += 2;
			}
			MsgBox(temp1, 38, 0, 1);
			if (_cSetting._colorChioce == 0)
				MsgBox("颜色类型 前景色 ", 6, 31, 2);
			else if (_cSetting._colorChioce == 1)
				MsgBox("颜色类型 背景色 ", 6, 31, 2);
			break;
		}
		case 75: {//左
			if (j - 12 < 6)
			{
				//void
			}
			else
			{
				if (i > 15)
				{
					if (j - 12 >= 6)
					{
						k = 0;
						while (k < 6)
						{
							window_1.text[i][j + k - 12] = '-';
							window_1.text[i][j + k] = ' ';
							k++;
						}
						j -= 12;
					}
				}
				else
				{
					k = 0;
					while (k < 6)
					{
						window_1.text[i][j + k - 12] = '-';
						window_1.text[i][j + k] = ' ';
						k++;
					}
					j -= 12;
				}
			}
			MsgBox(temp1, 38, 0, 1);
			if (_cSetting._colorChioce == 0)
				MsgBox("颜色类型 前景色 ", 6, 31, 2);
			else if (_cSetting._colorChioce == 1)
				MsgBox("颜色类型 背景色 ", 6, 31, 2);
			break;
		}
		case 77: {//右
			if (j + 12 > 66)
			{
				//void
			}
			else
			{
				if (i > 15)
				{
					if (j + 12 <= 18)
					{
						k = 0;
						while (k < 6)
						{
							window_1.text[i][j + k + 12] = '-';
							window_1.text[i][j + k] = ' ';
							k++;
						}
						j += 12;
					}
				}
				else
				{
					k = 0;
					while (k < 6)
					{
						window_1.text[i][j + k + 12] = '-';
						window_1.text[i][j + k] = ' ';
						k++;
					}
					j += 12;
				}
			}
			MsgBox(temp1, 38, 0, 1);
			if (_cSetting._colorChioce == 0)
				MsgBox("颜色类型 前景色 ", 6, 31, 2);
			else if (_cSetting._colorChioce == 1)
				MsgBox("颜色类型 背景色 ", 6, 31, 2);
			break;
		}
		case 13: {//回车
			if (i == 11 && j == 6)//前景色被按下
			{//前景色选择
				_cSetting._colorChioce = 0;//0是前景色选择模式
				MsgBox("颜色类型 前景色 ", 6, 31, 2);
			}
			if (i == 13 && j == 6)//背景色被按下
			{
				_cSetting._colorChioce = 1;//1是背景色选择模式
				MsgBox("颜色类型 背景色 ", 6, 31, 2);
			}
			if (i == 15 && j == 6)//确认键被按下
			{
				if (_cSetting._colorChioce == 1 || _cSetting._colorChioce == 0)//检测是否有选择颜色类型
				{
					if (_cSetting._nBackColorFlag > 0 || _cSetting._nPreColorFlag > 0)
					{
						sprintf(_cSetting.strColorFormat, "color  %c%c", _cSetting._nBackColorFlag, _cSetting._nPreColorFlag);
						system(_cSetting.strColorFormat);
						MsgBox(" 通知！ 设置成功", 6, 31, 2);
					}
					else
					{
						MsgBox(" 错误！  未选择 ", 6, 31, 2);
					}
				}
				else
				{
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
				}
			}
			if (i == 17 && j == 6)//返回键被按下
				k = -1;

			if (i == 11 && j == 18)//黑色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = '0';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = '0';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 11 && j == 30)//蓝色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = '1';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = '1';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 11 && j == 42)//绿色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = '2';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = '2';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 11 && j == 54)//湖蓝色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = '3';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = '3';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 11 && j == 66)//红色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = '4';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = '4';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 13 && j == 18)//紫色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = '5';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = '5';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 13 && j == 30)//黄色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = '6';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = '6';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 13 && j == 42)//白色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = '7';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = '7';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 13 && j == 54)//灰色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = '8';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = '8';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 13 && j == 66)//淡蓝色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = '9';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = '9';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 15 && j == 18)//淡绿色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = 'A';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = 'A';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 15 && j == 30)//浅绿色被按下
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = 'B';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = 'B';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 15 && j == 42)//淡红色
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = 'C';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = 'C';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 15 && j == 54)//淡紫色
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = 'D';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = 'D';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 15 && j == 66)//淡黄色
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = 'E';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = 'E';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 17 && j == 18)//亮白色
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//前景色选择模式
					_cSetting._nPreColorFlag = 'F';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case 1: {//背景色选择模式
					_cSetting._nBackColorFlag = 'F';
					MsgBox("  通知  选择完成", 6, 31, 2);
					break;
				}
				case -1: {//发生错误
					MsgBox(" 错误！  未选择 ", 6, 31, 2);
					break;
				}
				}
			}
			break;
		}
		case 27: {//ESC
			k = -1;
			break;
		}
		}
	}
	SettingGUI();
	return 0;
}

int StyleSet() {
	char temp_0[1000] = { "          *****  *****  *****  *****  ***  *****  *****                           *      *        *      *     *   *   *  *                               *****  *****    *      *     *   *   *  *  **                               *  *        *      *     *   *   *  *   *                           *****  *****    *      *    ***  *   *  *****                 " };
	char temp_1[1000] = { "  聊天样式                                                                                                 无边框                    有边框                    带角标                                           " };
	char str[10][1000] = {
		"   无边框样式预览                          无边框样式预览                          无边框样式预览                          无边框样式预览                       ",
		"   带边框样式预览                        ┌───────┐  │带边框样式预览│  └───────┘  ┌───────┐  │带边框样式预览│  └───────┘ ",
		"   带角标样式预览                        ┌───────●  │带角标样式预览│  └───────┘  ●───────┐  │带角标样式预览│  └───────┘ "
	};
	CreatGUI(40, 20, 0, 0);
	MsgBox(temp_0, 38, 0, 1);
	MsgBox(temp_1, 15, 0, 9);
	int i = 13, k = 0;;//定位器
	while (k != 1)//k值用来确认回车键是否被按下
	{
		fflush(stdin);
		SetTmpOut();//将缓存中的内容输出到屏幕中
		system("cls");
		PrintWall(1);
		switch (Keydown())
		{
		case 72: {//------------------方向上键
			if (i == 13)
			{
				i = 14;
			}
			window_1.text[i][14] = ' ';
			window_1.text[i][15] = ' ';
			window_1.text[i - 1][14] = -95;
			window_1.text[i - 1][15] = -15;
			i -= 1;
			if (i < 14)
			{
				i = 14;
				window_1.text[i][14] = -95;
				window_1.text[i][15] = -15;
				window_1.text[i - 1][14] = ' ';
				window_1.text[i - 1][15] = ' ';
			}
			MsgBox(str[i - 14], 12, 27, 9);
			break;
		}
		case 80: {//------------------方向下键
			window_1.text[i][14] = ' ';
			window_1.text[i][15] = ' ';
			window_1.text[i + 1][14] = -95;
			window_1.text[i + 1][15] = -15;
			i += 1;
			if (i > 16)
			{
				i = 16;
				window_1.text[i][14] = -95;
				window_1.text[i][15] = -15;
				window_1.text[i + 1][14] = ' ';
				window_1.text[i + 1][15] = ' ';
			}
			MsgBox(str[i - 14], 12, 27, 9);
			break;
		}
		case 13: {//------------------回车键
			if (i == 13)
			{
				break;
			}
			k = 1;
			break;
		}
		case 27: {//------------------ESC键
			k = 1;
			break;
		}
		}
	}
	return i - 14;
}

/*文件读取保存模块*/
int FileSave(int style,int mode) {
	FILE *fp;		//文件指针
	int tmpStyle;	//style缓存
	char tmpPreColorFlag;//前景色缓存
	char tmpBackColorFlag;//背景色缓存

	switch (mode)
	{
	case 0: {		//读取模式
		if ((fp = fopen("setting.anl", "r")) == NULL)
		{
			printf("\n文件读取失败！无法应用设置\n");
			_sleep(500);
			return 0;
		}
		fscanf(fp, "%d,%c%c", &tmpStyle, &tmpPreColorFlag, &tmpBackColorFlag);
		_cSetting._nPreColorFlag = tmpPreColorFlag;
		_cSetting._nBackColorFlag = tmpBackColorFlag;
		fclose(fp);
		sprintf(_cSetting.strColorFormat, "color  %c%c", _cSetting._nBackColorFlag, _cSetting._nPreColorFlag);
		system(_cSetting.strColorFormat);
		return tmpStyle;
		break;
	}
	case 1: {			//写入模式
		if ((fp = fopen("setting.anl", "w")) == NULL)
		{
			printf("\n文件无法创建，将无法保存设置\n");
			_sleep(500);
			return 0;
		}
		fprintf(fp, "%d,%c%c\n本文件保存程序的设置，请不要随意删除\n", style, _cSetting._nPreColorFlag, _cSetting._nBackColorFlag);
		fclose(fp);
		break;
	}
	}
}