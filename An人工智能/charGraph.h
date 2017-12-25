/*
	@An自定义函数模块

	--字符数组绘制操作头文件--
	包含内容：
	1、密码检测模块
	2、按键读取模块
	3、自适应边框模块
	4、自适应窗口模块
	5、自定义GUI模块
*/
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct Draw_window//屏幕缓冲和显示结构体
{
	int top, right, bottom, left, width, height;
	char text[1000][1000];
	char tempText[1000];
	char screen[1000][1000];
	int lineHeight;
	int style;
}window_0,window_1;



int CheckIn_6f(char str[])				/*密码合法性检测模块：返回值1合法、返回值2不合法*/
{
	int z = 0, i;
	if (strlen(str)==6)
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


int CheckIn_8f(char str[])				/*密码合法性检测模块：返回值1合法、返回值2不合法*/
{
	int z = 0, i;
	if (strlen(str)==8)
	{
		for (i = 0; i<8; i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
				z += 1;

		}
		if (z == 8)
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



int CheckIn_6(char str[])				/*密码合法性检测模块：返回值1合法、返回值2不合法*/
{
	int z = 0, i;
	if (strlen(str)==6)
	{
		for (i = 0; i<6; i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
				z += 1;
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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



int CheckIn_8(char str[])				/*密码合法性检测模块：返回值1合法、返回值2不合法*/
{
	int z = 0, i;
	if (strlen(str)==8)
	{
		for (i = 0; i<8; i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
				z += 1;
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
				z += 1;

		}
		if (z == 8)
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




/*----------------------------------按键键值读取模块----------------------------*/
int Keydown()
{
	char c;
	if ((c = getch())<0)c = getch();
	return c;
}




/*----------------------------------自适应居中60长度文本行----------------------------*/
#define MAX 61
#define MAX_100 101

void Draw_60(char temp[MAX]) {
	char line[MAX] = { "                                                            " };
	char graph[7] = { -87,-90,'*',' ','*',-87,-90 };
	int i, j = 0, m = 0, margin;
	
	for (i = 0; i<3; i++)
	{
		line[i] = graph[i];
		//sline[i + 1] = graph[i + 1];
		//line[(strlen(line) - 3) + i] = graph[i + 2 - (i * 2)];
		line[(strlen(line) - 3) + i] = graph[j=4+i];
	}
	/*line[0] = graph[0];
	line[1] = graph[1];
	line[2] = graph[2];
	line[56] = graph[2];
	line[57] = graph[0];
	line[58] = graph[1];*/
	j = 0;
	line[strlen(line)] = '\0';
	m = strlen(temp);
	margin = (strlen(line) - m) / 2;
	for (i = margin; i<margin + (int)strlen(temp); i++)
	{
		line[i] = temp[j];
		j++;
	}
	printf("\n\t\t");
	for (i = 0; i<(int)strlen(line); i++)
		printf("%c", line[i]);
}


/*--------------------------------------自适应居中文本行100字节---------------------------------*/

void Draw_100(char temp[MAX_100]) {
	char line[MAX_100] = { "                                                                                                    " };//预留的字节
	char graph[7] = { -87,-90,'*',' ','*',-87,-90 };
	int i, j = 0, m = 0, margin;
	
	for (i = 0; i<3; i++)//绘制边框
	{
		line[i] = graph[i];
		line[(strlen(line) - 3) + i] = graph[j = 4 + i];
	}
	j = 0;
	line[strlen(line)] = '\0';					//末尾结束
	m = strlen(temp);
	margin = (strlen(line) - m) / 2;
	for (i = margin; i<margin + (int)strlen(temp); i++)
	{
		line[i] = temp[j];
		j++;
	}
	printf("\n\t\t");
	for (i = 0; i<(int)strlen(line); i++)			//打印输出
		printf("%c", line[i]);
}


/*--------------------------------------自适应居中文本框60字节---------------------------------*/

void Draw_60x(char temp[1000][1000],int tempH){
	char tempC[1000][1000] = { "" };
	int i, j=0,m;//		j=0是第一行的框架

				/*下推一行*/
	for ( i = 0; i < tempH+1; i++)
	{
		strcpy(tempC[i+2],temp[i]);
	}

	for ( i = 0; i < 60;i=i+2 )//绘制第一行文本框
	{	
		
		tempC[j][i] = -87;
		tempC[j][i + 1] = -92;
		if (i == 0)
		{
			tempC[j][i] = -87;
			tempC[j][i + 1] = -80;
		}
		if (i==58)
		{
			tempC[j][i] = -87;
			tempC[j][i + 1] = -76;
		}
	}
	tempC[j][i + 1] = '\0';
	printf("\t\t");
	i = 0;
	while (tempC[j][i]!='\0')//输出第一行
	{
		printf("%c", tempC[j][i]);
		i++;
	}

	//					J从1开始正文部分
	j = 2;
	for (m = 0; m < tempH; m++)
	{
		Draw_60(tempC[j]);
		j++;
	}

	j = (tempH + 1);//打印尾部文本框
	for (i = 0; i < 60;)
	{
		tempC[j][i] = -87;
		tempC[j][i + 1] = -92;
		if (i == 0)
		{
			tempC[j][0] = -87;
			tempC[j][1] = -72;
		}
		if (i == 58)
		{
			tempC[j][i] = -87;
			tempC[j][i + 1] = -68;
		}
		i = i + 2;
	}
	tempC[j][i + 1] = '\0';
	printf("\n\t\t");
	puts(tempC[tempH + 1]);
}


/*--------------------------------------自适应居中文本框100字节---------------------------------*/
void Draw_100x(char temp[100][101], int tempH) {

	int i, j = 0, m;//		j=0是第一行的框架
	char tempC[100][101] = { "" };

	/*下推一行*/
	for (i = 0; i < tempH + 1; i++)
	{
		strcpy(tempC[i + 2], temp[i]);
	}

	for (i = 0; i < 100; i = i + 2)//绘制第一行文本框
	{

		tempC[j][i] = -87;
		tempC[j][i + 1] = -92;
		if (i == 0)
		{
			tempC[j][i] = -87;
			tempC[j][i + 1] = -80;
		}
		if (i == 98)
		{
			tempC[j][i] = -87;
			tempC[j][i + 1] = -76;
		}
	}
	tempC[j][i + 1] = '\0';
	printf("\t\t");
	i = 0;
	while (tempC[j][i] != '\0')//输出第一行
	{
		printf("%c", tempC[j][i]);
		i++;
	}

	//					J从1开始正文部分
	j = 2;
	for (m = 0; m < tempH; m++)
	{
		Draw_100(tempC[j]);
		j++;
	}

	j = (tempH + 1);//打印尾部文本框
	for (i = 0; i < 100;)
	{
		tempC[j][i] = -87;
		tempC[j][i + 1] = -92;
		if (i == 0)
		{
			tempC[j][0] = -87;
			tempC[j][1] = -72;
		}
		if (i == 98)
		{
			tempC[j][i] = -87;
			tempC[j][i + 1] = -68;
		}
		i = i + 2;
	}
	tempC[j][i + 1] = '\0';
	printf("\n\t\t");
	puts(tempC[tempH + 1]);
}



/*--------------------------------自定义屏幕空间----------------------------------------*/

void CreatWall(int x, int y,int style,int type        /*x是列，y是行，style是边框样式*/) {
	/*自定义高度和宽度的文本框，可以对内容进行覆盖操作，实现屏幕显示的效果。*/

	char window[1000][1000] = { "" };//屏幕空间专用
	int i, j;
	char styleG[2][20] = {"┏┓┗┛━┃","┌┐└┘─│"};
	/*if (x % 2 != 0)//预备算法
	{
		x += 1;
	}*/
	window_0.width = x;//将宽高和样式写入缓冲区，方便读出
	window_0.height = y;
	window_0.style = style;
	x *= 2;//中文字符是双字节
	for ( i = 0; i < y; i++)
	{
		for (j = 0; j < x; j++)
		{
			if (i == 0)
			{
				if (j == 0)
				{
					window[i][j] = styleG[style][0];
					window[i][j + 1] = styleG[style][1];
					j += 1;
				}
				if (window[i][j] < 0 && j > 0)
				{
					j = j + 1;
					window[i][j] = styleG[style][8];
					window[i][j + 1] = styleG[style][9];
				}
				if (j == x - 2)
				{
					window[i][j] = styleG[style][2];
					window[i][j + 1] = styleG[style][3];
					window[i][j + 2] = '\n';
				}
			}
			/*绘制内容框*/
			if (i > 0 && i < y - 1)
			{
				window[i][j] = ' ';
				if (j == 0)
				{
					window[i][j] = styleG[style][10];
					window[i][j + 1] = styleG[style][11];
					j += 1;
				}
				if (j == x - 2)
				{
					window[i][j] = styleG[style][10];
					window[i][j + 1] = styleG[style][11];
					window[i][j + 2] = '\n';
					j += 1;
				}
			}
			/*绘制下边线*/
			if (i == y - 1)
			{
				if (j == 0)
				{
					window[i][j] = styleG[style][4];
					window[i][j + 1] = styleG[style][5];
					j += 1;
				}
				if (window[i][j] < 0 && j > 0)
				{
					j = j + 1;
					window[i][j] = styleG[style][8];
					window[i][j + 1] = styleG[style][9];
				}
				if (j == x - 2)
				{
					window[i][j] = styleG[style][6];
					window[i][j + 1] = styleG[style][7];
				}
			}
		}
	}
	/*对框架进行输出*/

	/*


	预留接口区域：删除下方的输出内容，以函数代替，将数组内容传入函数，
	然后在函数内部覆盖内容，再输出，实现类GUI显示效果
	
	
	*/
	switch (type)//选择输出到缓冲区还是输出到屏幕
	{
	case 0: {
		for (i = 0; i < window_0.height; i++)//创建屏幕显示区域并且创建屏幕缓存
		{
			strcpy(window_0.screen[i], window[i]);
		}
	}
	case 1: {
		for (i = 0; i < window_0.height; i++)//创建屏幕缓存
		{
			strcpy(window_0.text[i], window[i]);
		}
		break;
	}
	}
}


/*-------------------------------------------GUI界面写入模块-------------------------------------------*/
void CreatGUI(int x, int y, int style, int type        /*x是列，y是行，style是边框样式*/) {
	/*自定义高度和宽度的文本框，可以对内容进行覆盖操作，实现屏幕显示的效果。*/

	char window[1000][1000] = { "" };//屏幕空间专用
	int i, j;
	char styleG[2][20] = { "┏┓┗┛━┃","┌┐└┘─│" };
	window_1.width = x;//将宽高和样式写入缓冲区，方便读出
	window_1.height = y;
	window_1.style = style;
	x *= 2;//中文字符是双字节
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < x; j++)
		{
			if (i == 0)
			{
				if (j == 0)
				{
					window[i][j] = styleG[style][0];
					window[i][j + 1] = styleG[style][1];
					j += 1;
				}
				if (window[i][j] < 0 && j > 0)
				{
					j = j + 1;
					window[i][j] = styleG[style][8];
					window[i][j + 1] = styleG[style][9];
				}
				if (j == x - 2)
				{
					window[i][j] = styleG[style][2];
					window[i][j + 1] = styleG[style][3];
					window[i][j + 2] = '\n';
				}
			}
			/*绘制内容框*/
			if (i > 0 && i < y - 1)
			{
				window[i][j] = ' ';
				if (j == 0)
				{
					window[i][j] = styleG[style][10];
					window[i][j + 1] = styleG[style][11];
					j += 1;
				}
				if (j == x - 2)
				{
					window[i][j] = styleG[style][10];
					window[i][j + 1] = styleG[style][11];
					window[i][j + 2] = '\n';
					j += 1;
				}
			}
			/*绘制下边线*/
			if (i == y - 1)
			{
				if (j == 0)
				{
					window[i][j] = styleG[style][4];
					window[i][j + 1] = styleG[style][5];
					j += 1;
				}
				if (window[i][j] < 0 && j > 0)
				{
					j = j + 1;
					window[i][j] = styleG[style][8];
					window[i][j + 1] = styleG[style][9];
				}
				if (j == x - 2)
				{
					window[i][j] = styleG[style][6];
					window[i][j + 1] = styleG[style][7];
				}
			}
		}
	}
	/*对框架进行输出*/

	/*


	预留接口区域：删除下方的输出内容，以函数代替，将数组内容传入函数，
	然后在函数内部覆盖内容，再输出，实现类GUI显示效果


	*/
	switch (type)//选择输出到缓冲区还是输出到屏幕
	{
	case 0: {
		for (i = 0; i < window_1.height; i++)//创建屏幕显示区域并且创建屏幕缓存
		{
			strcpy(window_1.screen[i], window[i]);
		}
	}
	case 1: {
		for (i = 0; i < window_1.height; i++)//创建屏幕缓存
		{
			strcpy(window_1.text[i], window[i]);
		}
		break;
	}
	}
}



void TextCover(int style/*输出文字边框样式，0为无边框*/,int dir/*方位0、1*/,char strTemp[1000] ,int widthT) {
	/*对 creatWall 创建的边框进行文字填充和输出
	style=0无边框
	style=1方框
	style=2方框加小尾巴左
	
	widthT:输入的宽度
	*/
	int len, i, j = 0, k = 0, m = 0, n = 0;
	int lineWidth;
	char msgTemp[1000][1000] = { "" };
	int width = window_0.width * 2;
	int height = window_0.height;//从结构体中读取宽高

	
	switch (style)
	{
	case 0: {//============================================================================================================无边框
		switch (dir)
		{
		case 0: {//左对齐
			len = strlen(strTemp);
			lineWidth = widthT * 2 - 4;//文字填充的长度
			for ( i = 0; i < len;)
			{
				if (n == lineWidth)//当字符串填充完一行之后开始新的一行
				{
					if (strTemp[i] < 0)//当文字为中文时的处理方法（当前算法有缺陷，纯中文可以使用，中英文混合会出错） 
					{
						m += 1;
						n = 0;
						msgTemp[m][n] = strTemp[i];
						msgTemp[m][n + 1] = strTemp[i + 1];
						n += 2;
						i += 2;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];
						i++;
						n++;
						m++;
					}
				}
				else
				{
					if (strTemp[i] < 0)//当文字为中文时的处理方法（当前算法有缺陷，纯中文可以使用，中英文混合会出错）
					{
						msgTemp[m][n] = strTemp[i];
						msgTemp[m][n + 1] = strTemp[i + 1];
						i += 2;
						n += 2;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];
						i++;
						n++;
					}
				}
			}
						/*开始对内容填充(左对齐的填充方法)*/
			for ( i =height-(m+1); i < height; i++)
			{
				for ( j = 2; j < lineWidth+2; j++)
				{
					window_0.text[i-1][j] = msgTemp[k][j - 2];
				}
				k++;
			}
			window_0.lineHeight = k;
			break;
		}
		case 1: {//右对齐
			len = strlen(strTemp);
			lineWidth = widthT * 2 - 4;
			for (i = 0; i < len;)
			{
				if (n == lineWidth)//当字符串填充完一行之后开始新的一行
				{
					if (strTemp[i] < 0)//当文字为中文时的处理方法（当前算法有缺陷，纯中文可以使用，中英文混合会出错）
					{
						m += 1;
						n = 0;
						msgTemp[m][n] = strTemp[i];
						msgTemp[m][n + 1] = strTemp[i + 1];
						n += 2;
						i += 2;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];
						i++;
						n++;
						m++;
					}
				}
				else
				{
					if (strTemp[i] < 0)//当文字为中文时的处理方法（当前算法有缺陷，纯中文可以使用，中英文混合会出错）
					{
						msgTemp[m][n] = strTemp[i];
						msgTemp[m][n + 1] = strTemp[i + 1];
						i += 2;
						n += 2;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];
						i++;
						n++;
					}
				}
			}
			/*开始对内容填充(右对齐加自适应填充方法)*/
			if (m == 0)																		//当数组只有一行的情况下,开启 自适应模式
			{
				len = strlen(msgTemp[m]);
				for ( i = 0; i < len; i++)
				{
					window_0.text[height - 2][i+(width - len - 2)] = msgTemp[m][i];			//单行的自适应
				}
				window_0.lineHeight = 0;
			}
			else
			{
				for (i = height - (m + 1); i < height; i++)
				{
					for (j = 0; j < lineWidth; j++)
					{
						window_0.text[i - 1][j + (width - widthT * 2) + 2] = msgTemp[k][j];//多行没有自适应
					}
					k++;
				}
				window_0.lineHeight = k;
			}
			break;
		}
		}
		break;
	}
	case 1: {//==================================================================================================带方框
		switch (dir)
		{
		case 0: {//左对齐
			len = strlen(strTemp);
			if (len % 2 != 0)
			{
				len = len + 1;
			}
			lineWidth = widthT * 2 - 4;
			if (len < lineWidth)
			{//当字符串宽度不足设置宽度时采用自适应
				for (i = 0; i < len + 4; i += 2)
				{//创建上边框
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -80;
					}
					if (i == len + 2)
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -76;
					}
				}
				m = 1;//第一行为边框（m=0），第二行是内容（m=1）
				 //-------------------------------------------------------创建内容
				if (n == 0)
				{//创建左边框
					msgTemp[m][n] = -87;
					msgTemp[m][n + 1] = -90;
					n += 2;
				}
				for (j = 0; strTemp[j] != '\0'; j++)
				{
					msgTemp[m][n] = strTemp[j];//插入内容
					n++;
				}
				if (n % 2 == 0)
				{
					if (n == len + 2)
					{
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
					}
				}
				else
				{
					if (n == len + 1)
					{
						msgTemp[m][n] = ' ';
						msgTemp[m][n + 1] = -87;
						msgTemp[m][n + 2] = -90;
					}
				}
				m = 2;
				for (i = 0; i < len + 4; i += 2)
				{//插入下边框
					msgTemp[m][i] = -87;
					msgTemp[m][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -72;
					}
					if (i == len + 2)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -68;
					}
				}
			}
			else//---------------------------------------------------------------------------------------自适应非自适应分界线
			{
				for (i = 0; i < lineWidth + 4; i += 2)
				{//创建上边框
				 //printf("[i:%d][%d]\n",i,lineWidth);
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)//第一个角标
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -80;
					}
					if (i == lineWidth + 2)//最后一个角标
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -76;
					}
				}
				m = 1;//第一行为边框
				for (i = 0; i < len;)
				{//创建内容
					if (n == 0)
					{//创建左边框
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						n += 2;
					}
					if (n == lineWidth + 2)
					{//创建右边框
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						m++;
						n = 0;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];//插入内容
						n++;
						i++;
					}
				}
				if (strTemp[i] == '\0')
				{
					k = (lineWidth + 2) - n;//------------------------这里k作末尾行的补值
					for (i = 0; i < k; i++)
					{
						msgTemp[m][n++] = ' ';
					}
					msgTemp[m][lineWidth + 2] = -87;
					msgTemp[m][lineWidth + 3] = -90;
					m++;
				}
				for (i = 0; i < lineWidth + 4; i += 2)
				{//创建下边框
					msgTemp[m][i] = -87;
					msgTemp[m][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -72;
					}
					if (i == (lineWidth + 4) - 2)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -68;
					}
				}
			}
			/*------------------------------------------------------------------开始对内容填充(左对齐边框填充方法)*/
			k = 0;//---------------------------------------------这里k作msgTemp的迭代值
			for (i = height - (m + 1); i < height; i++)
			{
				for (j = 0; j < lineWidth + 4; j++)
				{
					window_0.text[i - 1][j + 2] = msgTemp[k][j];
				}
				k++;
			}
			window_0.lineHeight = k;
			break;
		}
		case 1: {//--------------------------------------------------------------------------------------------------------------------------------------------------右对齐
			len = strlen(strTemp);
			if (len % 2 != 0)
			{
				len = len + 1;
			}
			lineWidth = widthT * 2 - 4;
			if (len < lineWidth)
			{//当字符串宽度不足设置宽度时采用自适应
				lineWidth = len;//！！！在单行中的值应该是参数字符串的长度
				for (i = 0; i < len + 4; i += 2)
				{//创建上边框
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -80;
					}
					if (i == len + 2)
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -76;
					}
				}
				m = 1;//第一行为边框
					  //-------------------------------------------------------创建内容
				if (n == 0)
				{//创建左边框
					msgTemp[m][n] = -87;
					msgTemp[m][n + 1] = -90;
					n += 2;
				}
				for (j = 0; strTemp[j] != '\0'; j++)
				{
					msgTemp[m][n] = strTemp[j];//插入内容
					n++;
				}
				if (n % 2 == 0)
				{
					if (n == len + 2)
					{
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
					}
				}
				else
				{
					if (n == len + 1)
					{
						msgTemp[m][n] = ' ';
						msgTemp[m][n + 1] = -87;
						msgTemp[m][n + 2] = -90;
					}
				}
				m = 2;
				for (i = 0; i < len + 4; i += 2)
				{//插入下边框
					msgTemp[m][i] = -87;
					msgTemp[m][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -72;
					}
					if (i == len + 2)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -68;
					}
				}
			}
			else//---------------------------------------------------------------------------------------自适应非自适应分界线
			{
				for (i = 0; i < lineWidth + 4; i += 2)
				{//创建上边框
				 //printf("[i:%d][%d]\n",i,lineWidth);
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)//第一个角标
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -80;
					}
					if (i == lineWidth + 2)//最后一个角标
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -76;
					}
				}
				m = 1;//第一行为边框
				for (i = 0; i < len;)
				{//创建内容
					if (n == 0)
					{//创建左边框
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						n += 2;
					}
					if (n == lineWidth + 2)
					{//创建右边框
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						m++;
						n = 0;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];//插入内容
						n++;
						i++;
					}
				}
				if (strTemp[i] == '\0')
				{
					k = (lineWidth + 2) - n;//------------------------这里k作内容末尾行的补值
					for (i = 0; i < k; i++)
					{
						msgTemp[m][n++] = ' ';
					}
					msgTemp[m][lineWidth + 2] = -87;
					msgTemp[m][lineWidth + 3] = -90;
					m++;
				}
				for (i = 0; i < lineWidth + 4; i += 2)
				{//创建下边框
					msgTemp[m][i] = -87;
					msgTemp[m][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -72;
					}
					if (i == (lineWidth + 4) - 2)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -68;
					}
				}
			}
			/*-------------------------------------------------------------------------------------------------开始对内容填充(右对齐边框填充方法)*/
			k = 0;//---------------------------------------------这里k作msgTemp的迭代值
			for (i = height - (m + 1); i < height; i++)
			{
				for (j = 0; j < lineWidth + 4; j++)
				{
					window_0.text[i - 1][j + (width - lineWidth - 6)] = msgTemp[k][j];//同时对单行和多行适应（【lineWidth】在单行和多行的值分别为【len+4】和【 widthT * 2 - 4;】）
				}
				k++;
			}
			window_0.lineHeight = k;
			break;
		}
		}
		break;
	}
	case 2: {//-------------------------------------------------------------------==========================================================带小尾巴
		switch (dir)
		{
		case 0: {//左对齐
			len = strlen(strTemp);
			if (len % 2 != 0)
			{
				len = len + 1;
			}
			lineWidth = widthT * 2 - 4;
			if (len < lineWidth)
			{//当字符串宽度不足设置宽度时采用自适应
				m = 0;
				lineWidth = len;//！！！在单行中的值应该是参数字符串的长度
				for (i = 0; i < len + 4; i += 2)
				{//创建上边框
					msgTemp[m][i] = -87;
					msgTemp[m][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[m][i] = -95;
						msgTemp[m][i + 1] = -15;
					}
					if (i == len + 2)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -76;
					}
				}
				m = 1;//第一行为边框
	//-------------------------------------------------------创建内容
				if (n == 0)
				{//创建左边框
					msgTemp[m][n] = -87;
					msgTemp[m][n + 1] = -90;
					n += 2;
				}
				for (j = 0; strTemp[j] != '\0'; j++)
				{
					msgTemp[m][n] = strTemp[j];//插入内容
					n++;
				}
				if (n % 2 == 0)
				{
					if (n == len + 2)
					{
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
					}
				}
				else
				{
					if (n == len + 1)
					{
						msgTemp[m][n] = ' ';
						msgTemp[m][n + 1] = -87;
						msgTemp[m][n + 2] = -90;
					}
				}

				m = 2;
				for (i = 0; i < len + 4; i += 2)
				{//插入下边框
					msgTemp[m][i] = -87;
					msgTemp[m][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -72;
					}
					if (i == len + 2)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -68;
					}
				}
			}
			else//---------------------------------------------------------------------------------------自适应非自适应分界线
			{
				for (i = 0; i < lineWidth + 4; i += 2)
				{//创建上边框
				 //printf("[i:%d][%d]\n",i,lineWidth);
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)//第一个角标
					{
						msgTemp[0][i] = -95;
						msgTemp[0][i + 1] = -15;
					}
					if (i == lineWidth + 2)//最后一个角标
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -76;
					}
				}
				m = 1;//第一行为边框
				for (i = 0; i < len;)
				{//创建内容
					if (n == 0)
					{//创建左边框
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						n += 2;
					}
					if (n == lineWidth + 2)
					{//创建右边框
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						m++;
						n = 0;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];//插入内容
						n++;
						i++;
					}
				}
				if (strTemp[i] == '\0')
				{
					k = (lineWidth + 2) - n;//------------------------这里k作末尾行的补值
					for (i = 0; i < k; i++)
					{
						msgTemp[m][n++] = ' ';
					}
					msgTemp[m][lineWidth + 2] = -87;
					msgTemp[m][lineWidth + 3] = -90;
					m++;
				}
				for (i = 0; i < lineWidth + 4; i += 2)
				{//创建下边框
					msgTemp[m][i] = -87;
					msgTemp[m][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -72;
					}
					if (i == (lineWidth + 4) - 2)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -68;
					}
				}
			}
			/*-------------------------------------------------------------------------------------------------开始对内容填充(左对齐边框填充方法)*/
			k = 0;//---------------------------------------------这里k作msgTemp的迭代值
			for (i = height - (m + 1); i < height; i++)
			{
				for (j = 0; j < lineWidth + 4; j++)
				{
					window_0.text[i - 1][j + 2] = msgTemp[k][j];
				}
				k++;
			}
			window_0.lineHeight = k;
			break;
		}
		case 1: {//--------------------------------------------------------------------------------------------------------------------------------------------------右对齐
			len = strlen(strTemp);
			if (len % 2 != 0)
			{
				len = len + 1;
			}
			lineWidth = widthT * 2 - 4;
			if (len < lineWidth)
			{//当字符串宽度不足设置宽度时采用自适应
				lineWidth = len;//！！！在单行中的值应该是参数字符串的长度
				for (i = 0; i < len + 4; i += 2)
				{//创建上边框
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -80;
					}
					if (i == len + 2)
					{
						msgTemp[0][i] = -95;
						msgTemp[0][i + 1] = -15;
					}
				}
				m = 1;//第一行为边框
					  //-------------------------------------------------------创建内容
				if (n == 0)
				{//创建左边框
					msgTemp[m][n] = -87;
					msgTemp[m][n + 1] = -90;
					n += 2;
				}
				for (j = 0; strTemp[j] != '\0'; j++)
				{
					msgTemp[m][n] = strTemp[j];//插入内容
					n++;
				}
				if (n % 2 == 0)
				{
					if (n == len + 2)
					{
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
					}
				}
				else
				{
					if (n == len + 1)
					{
						msgTemp[m][n] = ' ';
						msgTemp[m][n + 1] = -87;
						msgTemp[m][n + 2] = -90;
					}
				}
				m = 2;
				for (i = 0; i < len + 4; i += 2)
				{//插入下边框
					msgTemp[m][i] = -87;
					msgTemp[m][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -72;
					}
					if (i == len + 2)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -68;
					}
				}
			}
			else//---------------------------------------------------------------------------------------自适应非自适应分界线
			{
				for (i = 0; i < lineWidth + 4; i += 2)
				{//创建上边框
				 //printf("[i:%d][%d]\n",i,lineWidth);
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)//第一个角标
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -80;
					}
					if (i == lineWidth + 2)//最后一个角标
					{
						msgTemp[0][i] = -95;
						msgTemp[0][i + 1] = -15;
					}
				}
				m = 1;//第一行为边框
				for (i = 0; i < len;)
				{//创建内容
					if (n == 0)
					{//创建左边框
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						n += 2;
					}
					if (n == lineWidth + 2)
					{//创建右边框
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						m++;
						n = 0;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];//插入内容
						n++;
						i++;
					}
				}
				if (strTemp[i] == '\0')
				{
					k = (lineWidth + 2) - n;//------------------------这里k作内容末尾行的补值
					for (i = 0; i < k; i++)
					{
						msgTemp[m][n++] = ' ';
					}
					msgTemp[m][lineWidth + 2] = -87;
					msgTemp[m][lineWidth + 3] = -90;
					m++;
				}
				for (i = 0; i < lineWidth + 4; i += 2)
				{//创建下边框
					msgTemp[m][i] = -87;
					msgTemp[m][i + 1] = -92;
					if (i == 0)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -72;
					}
					if (i == (lineWidth + 4) - 2)
					{
						msgTemp[m][i] = -87;
						msgTemp[m][i + 1] = -68;
					}
				}
			}
			/*-------------------------------------------------------------------------------------------------开始对内容填充(右对齐边框填充方法)*/
			k = 0;//---------------------------------------------这里k作msgTemp的迭代值
			for (i = height - (m + 1); i < height; i++)
			{
				for (j = 0; j < lineWidth + 4; j++)
				{
					window_0.text[i - 1][j + (width -lineWidth-6)] = msgTemp[k][j];//同时对单行和多行适应（【lineWidth】在单行和多行的值分别为【len+4】和【 widthT * 2 - 4;】）
				}
				k++;
			}
			window_0.lineHeight = k;//--------------把k迭代结束的值传给lineHeight（值得注意的是k的真实行值应该+1）
			break;
		}
		}
		break;
	}
	}
	
}


void PrintWall(int type) {//------------------------------------------------------------------------屏幕打印器
	int i, j;
	switch (type)
	{
	case 0: {//输出聊天界面
		for (i = 0; i < window_0.height; i++)
		{
			for (j = 0; j < window_0.width * 2; j++)
			{
				printf("%c", window_0.screen[i][j]);
			}
			printf("\n");
		}
		break;
	}
	case 1: {//输出GUI菜单界面
		for (i = 0; i < window_1.height; i++)
		{
			for (j = 0; j < window_1.width * 2; j++)
			{
				printf("%c", window_1.screen[i][j]);
			}
			printf("\n");
		}
		break;
	}
	}
	
}


void TextComposition() {
	/*-----------------------------------------------------------------------------------------缓存器
	
	把TextCover传入window_0的text数组读取出，然后向上移动，实现类似聊天窗口的效果*/
	int height;//本次传入的行高
	int heightTemp = 0;//上次缓存的行高
	int i = 0, j = 0, m;

	height = window_0.lineHeight + 1;//读取本次写入文本的行高（+1是因为下标为0）
	j = window_0.height - height;
	for (m = window_0.height - height - 1; m < window_0.height - 1; m++)
	{
		system("cls");//屏幕刷新
		/*  printf("[i=%d][j=%d][m=%d][widow_0.height=%d]\n", i, j, m, window_0.height);//用于测试的重要参数显示  */
		for (i = 1; i < window_0.height - 2; i++)//排序迭代器
		{
			strcpy(window_0.screen[i], window_0.screen[i + 1]);//屏幕向上排序
		}
		strcpy(window_0.screen[window_0.height - 2], "");
		strcpy(window_0.screen[window_0.height - 2], window_0.text[m]);//把text缓冲中的文本输入到屏幕数组中
		PrintWall(0);//每向上移动一次打印一次屏幕
	}
	CreatWall(window_0.width, window_0.height, window_0.style, 1);
}

void Welcome() {
	/**************************欢迎界面****************************************/
	char graph[100][1000] = {"┃                                                                            ┃"
		,"┃■                                                                          ┃"
		,"┃□■                                                                        ┃"
		,"┃□□■                                                                      ┃"
		,"┃□□□■                                                                    ┃"
		,"┃  □□□■                                                                  ┃"
		,"┃    □□□■                                                                ┃"
		,"┃      □□□■                                                              ┃"
		,"┃        □□□■                                                            ┃"
		,"┃          □□□■                                                          ┃"
		,"┃            □□□■                                                        ┃"
		,"┃              □□□■                                                      ┃"
		,"┃                □□□■                                                    ┃"
		,"┃                  □□□■                                                  ┃"
		,"┃                    □□□■                                                ┃"
		,"┃                      □□□■                                              ┃"
		,"┃                        □□□■                                            ┃"
		,"┃                          □□□■                                          ┃"
		,"┃                            □□□■                                        ┃"
		,"┃                              □□□■                                      ┃"
		,"┃                                □□□■                                    ┃"
		,"┃                                  □□□■                                  ┃"
		,"┃                                    □□□■                                ┃"
		,"┃                                      □□□■                              ┃"
		,"┃                                        □□□■                            ┃"
		,"┃                                          □□□■                          ┃"
		,"┃                                            □□□■                        ┃"
		,"┃                                              □□□■                      ┃"
		,"┃                                                □□□■                    ┃"
		,"┃                                                  □□□■                  ┃"
		,"┃                                                    □□□■                ┃"
		,"┃                                                      □□□■              ┃"
		,"┃                                                        □□□■            ┃"
		,"┃                                                          □□□■          ┃"
		,"┃                                                            □□□■        ┃"
		,"┃                                                              □□□■      ┃"
		,"┃                                                                □□□■    ┃"
		,"┃                                                                  □□□■  ┃"
		,"┃                                                                    □□□■┃"
		,"┃                                                                      □□□┃"
		,"┃                                                                        □□┃"
		,"┃                                                                          □┃"
		,"┃                                                                            ┃" };
	int i = 0 , j = 0;
	while (i < 2)
	{
		if (j > 41)
		{
			j = 0;
			i++;
		}
		system("cls");
		printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
		printf("┃   ■■■■■    ■      ■                          版本：1.0（工程版）    ┃\n");
		printf("┃   ■      ■    ■■    ■                          Copyright @AirNess     ┃\n");
		printf("┃   ■      ■    ■■    ■                                                 ┃\n");
		printf("┃   ■      ■    ■  ■  ■                                                 ┃\n");
		printf("┃   ■■■■■    ■  ■  ■                                                 ┃\n");
		printf("┃   ■      ■    ■    ■■                                                 ┃\n");
		printf("┃   ■      ■    ■    ■■                                                 ┃\n");
		printf("┃   ■      ■    ■      ■                                                 ┃\n");
		printf("┃   ■      ■    ■      ■                                                 ┃\n");
		printf("┃                                                                            ┃\n");
		puts(graph[j]);
		printf("┃                                                                            ┃\n");
		printf("┃             ■■      ■■   ■■      ■■    ■■■    ■■■■          ┃\n");
		printf("┃           ■    ■   ■  ■ ■  ■   ■    ■  ■    ■    ■              ┃\n");
		printf("┃             ■      ■    ■     ■  ■    ■  ■■■      ■              ┃\n");
		printf("┃               ■    ■    ■     ■  ■■■■  ■■        ■              ┃\n");
		printf("┃           ■    ■  ■    ■     ■  ■    ■  ■  ■      ■              ┃\n");
		printf("┃             ■■    ■    ■     ■  ■    ■  ■    ■    ■              ┃\n");
		printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		j++;
	}
	_sleep(500);
}

/*--------------------------消息框创建函数-----------------------------*/
void MsgBox(char strTemp[1000],int widthT,int x,int y) {
	int len, i, j = 0, k = 0, m = 0, n = 0;
	int lineWidth;
	char msgTemp[1000][1000] = { "" };
	int width = window_1.width * 2;
	int height = window_1.height;//从结构体中读取宽高

	len = strlen(strTemp);
	if (len % 2 != 0)
	{
		len = len + 1;
	}
	lineWidth = widthT * 2 - 4;
	if (len < lineWidth)
	{//当字符串宽度不足设置宽度时采用自适应
		for (i = 0; i < len + 4; i += 2)
		{//创建上边框
			msgTemp[0][i] = -87;
			msgTemp[0][i + 1] = -92;
			if (i == 0)
			{
				msgTemp[0][i] = -87;
				msgTemp[0][i + 1] = -80;
			}
			if (i == len + 2)
			{
				msgTemp[0][i] = -87;
				msgTemp[0][i + 1] = -76;
			}
		}
		m = 1;//第一行为边框（m=0），第二行是内容（m=1）
			  //-------------------------------------------------------创建内容
		if (n == 0)
		{//创建左边框
			msgTemp[m][n] = -87;
			msgTemp[m][n + 1] = -90;
			n += 2;
		}
		for (j = 0; strTemp[j] != '\0'; j++)
		{
			msgTemp[m][n] = strTemp[j];//插入内容
			n++;
		}
		if (n % 2 == 0)
		{
			if (n == len + 2)
			{
				msgTemp[m][n] = -87;
				msgTemp[m][n + 1] = -90;
			}
		}
		else
		{
			if (n == len + 1)
			{
				msgTemp[m][n] = ' ';
				msgTemp[m][n + 1] = -87;
				msgTemp[m][n + 2] = -90;
			}
		}
		m = 2;
		for (i = 0; i < len + 4; i += 2)
		{//插入下边框
			msgTemp[m][i] = -87;
			msgTemp[m][i + 1] = -92;
			if (i == 0)
			{
				msgTemp[m][i] = -87;
				msgTemp[m][i + 1] = -72;
			}
			if (i == len + 2)
			{
				msgTemp[m][i] = -87;
				msgTemp[m][i + 1] = -68;
			}
		}
	}
	else//---------------------------------------------------------------------------------------自适应非自适应分界线
	{
		for (i = 0; i < lineWidth + 4; i += 2)
		{//创建上边框
			msgTemp[0][i] = -87;
			msgTemp[0][i + 1] = -92;
			if (i == 0)//第一个角标
			{
				msgTemp[0][i] = -87;
				msgTemp[0][i + 1] = -80;
			}
			if (i == lineWidth + 2)//最后一个角标
			{
				msgTemp[0][i] = -87;
				msgTemp[0][i + 1] = -76;
			}
		}
		m = 1;//第一行为边框
		for (i = 0; i < len;)
		{//创建内容
			if (n == 0)
			{//创建左边框
				msgTemp[m][n] = -87;
				msgTemp[m][n + 1] = -90;
				n += 2;
			}
			if (n == lineWidth + 2)
			{//创建右边框
				msgTemp[m][n] = -87;
				msgTemp[m][n + 1] = -90;
				m++;
				n = 0;
			}
			else
			{
				msgTemp[m][n] = strTemp[i];//插入内容
				n++;
				i++;
			}
		}
		if (strTemp[i] == '\0')
		{
			k = (lineWidth + 2) - n;//------------------------这里k作末尾行的补值
			for (i = 0; i < k; i++)
			{
				msgTemp[m][n++] = ' ';
			}
			msgTemp[m][lineWidth + 2] = -87;
			msgTemp[m][lineWidth + 3] = -90;
			m++;
		}
		for (i = 0; i < lineWidth + 4; i += 2)
		{//创建下边框
			msgTemp[m][i] = -87;
			msgTemp[m][i + 1] = -92;
			if (i == 0)
			{
				msgTemp[m][i] = -87;
				msgTemp[m][i + 1] = -72;
			}
			if (i == (lineWidth + 4) - 2)
			{
				msgTemp[m][i] = -87;
				msgTemp[m][i + 1] = -68;
			}
		}
	}
	/*------------------------------------------------------------------开始对内容填充(左对齐边框填充方法)*/
	k = 0;//---------------------------------------------这里k作msgTemp的迭代值
	x = x * 2;
	if (x < 2)//XY分别为定位，X为列距，Y为行距
	{
		x = 2;
	}
	if (y < 1)
	{
		y = 1;
	}
	for (i = y; i < y + m + 1; i++)//让msgTemp随X、Y大小移动位置
	{
		for (j = 0; j < lineWidth + 4; j++)
		{
			window_1.text[i][x + j] = msgTemp[k][j];
		}
		k++;
	}
}

/*-------------------------------输出开始菜单缓存到屏幕--------------------------------*/
void SetTmpOut() {
	int i, j;
	for ( i = 1; i < 19; i++)
	{
		for ( j = 2; j < 78; j++)
		{
			window_1.screen[i][j] = window_1.text[i][j];
			/*将GUI中的图形缓存读取到屏幕*/
		}
	}
}



/*----------------------------------开始菜单选择器-------------------------------------*/
int StartMenu(char str[1000][1000],int m) {
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
		SetTmpOut();//将缓存中的内容输出到屏幕中，
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
			if (i > 17)
			{
				i = 17;
				window_1.text[i][14] = -95;
				window_1.text[i][15] = -15;
				window_1.text[i + 1][14] = -87;
				window_1.text[i + 1][15] = -92;
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
			i = 17;
			k = 1;
			break;
		}
		}
	}
	return i - 14;
}

#define CHAR_MAX 1000
//代替gets输入函数
char *stdin_get_str(char *str) {
	fgets(str, CHAR_MAX, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	return str;
}