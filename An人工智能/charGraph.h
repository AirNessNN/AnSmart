/*
	@An�Զ��庯��ģ��

	--�ַ�������Ʋ���ͷ�ļ�--
	�������ݣ�
	1��������ģ��
	2��������ȡģ��
	3������Ӧ�߿�ģ��
	4������Ӧ����ģ��
	5���Զ���GUIģ��
*/
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct Draw_window//��Ļ�������ʾ�ṹ��
{
	int top, right, bottom, left, width, height;
	char text[1000][1000];
	char tempText[1000];
	char screen[1000][1000];
	int lineHeight;
	int style;
}window_0,window_1;



int CheckIn_6f(char str[])				/*����Ϸ��Լ��ģ�飺����ֵ1�Ϸ�������ֵ2���Ϸ�*/
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


int CheckIn_8f(char str[])				/*����Ϸ��Լ��ģ�飺����ֵ1�Ϸ�������ֵ2���Ϸ�*/
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



int CheckIn_6(char str[])				/*����Ϸ��Լ��ģ�飺����ֵ1�Ϸ�������ֵ2���Ϸ�*/
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



int CheckIn_8(char str[])				/*����Ϸ��Լ��ģ�飺����ֵ1�Ϸ�������ֵ2���Ϸ�*/
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




/*----------------------------------������ֵ��ȡģ��----------------------------*/
int Keydown()
{
	char c;
	if ((c = getch())<0)c = getch();
	return c;
}




/*----------------------------------����Ӧ����60�����ı���----------------------------*/
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


/*--------------------------------------����Ӧ�����ı���100�ֽ�---------------------------------*/

void Draw_100(char temp[MAX_100]) {
	char line[MAX_100] = { "                                                                                                    " };//Ԥ�����ֽ�
	char graph[7] = { -87,-90,'*',' ','*',-87,-90 };
	int i, j = 0, m = 0, margin;
	
	for (i = 0; i<3; i++)//���Ʊ߿�
	{
		line[i] = graph[i];
		line[(strlen(line) - 3) + i] = graph[j = 4 + i];
	}
	j = 0;
	line[strlen(line)] = '\0';					//ĩβ����
	m = strlen(temp);
	margin = (strlen(line) - m) / 2;
	for (i = margin; i<margin + (int)strlen(temp); i++)
	{
		line[i] = temp[j];
		j++;
	}
	printf("\n\t\t");
	for (i = 0; i<(int)strlen(line); i++)			//��ӡ���
		printf("%c", line[i]);
}


/*--------------------------------------����Ӧ�����ı���60�ֽ�---------------------------------*/

void Draw_60x(char temp[1000][1000],int tempH){
	char tempC[1000][1000] = { "" };
	int i, j=0,m;//		j=0�ǵ�һ�еĿ��

				/*����һ��*/
	for ( i = 0; i < tempH+1; i++)
	{
		strcpy(tempC[i+2],temp[i]);
	}

	for ( i = 0; i < 60;i=i+2 )//���Ƶ�һ���ı���
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
	while (tempC[j][i]!='\0')//�����һ��
	{
		printf("%c", tempC[j][i]);
		i++;
	}

	//					J��1��ʼ���Ĳ���
	j = 2;
	for (m = 0; m < tempH; m++)
	{
		Draw_60(tempC[j]);
		j++;
	}

	j = (tempH + 1);//��ӡβ���ı���
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


/*--------------------------------------����Ӧ�����ı���100�ֽ�---------------------------------*/
void Draw_100x(char temp[100][101], int tempH) {

	int i, j = 0, m;//		j=0�ǵ�һ�еĿ��
	char tempC[100][101] = { "" };

	/*����һ��*/
	for (i = 0; i < tempH + 1; i++)
	{
		strcpy(tempC[i + 2], temp[i]);
	}

	for (i = 0; i < 100; i = i + 2)//���Ƶ�һ���ı���
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
	while (tempC[j][i] != '\0')//�����һ��
	{
		printf("%c", tempC[j][i]);
		i++;
	}

	//					J��1��ʼ���Ĳ���
	j = 2;
	for (m = 0; m < tempH; m++)
	{
		Draw_100(tempC[j]);
		j++;
	}

	j = (tempH + 1);//��ӡβ���ı���
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



/*--------------------------------�Զ�����Ļ�ռ�----------------------------------------*/

void CreatWall(int x, int y,int style,int type        /*x���У�y���У�style�Ǳ߿���ʽ*/) {
	/*�Զ���߶ȺͿ�ȵ��ı��򣬿��Զ����ݽ��и��ǲ�����ʵ����Ļ��ʾ��Ч����*/

	char window[1000][1000] = { "" };//��Ļ�ռ�ר��
	int i, j;
	char styleG[2][20] = {"������������","������������"};
	/*if (x % 2 != 0)//Ԥ���㷨
	{
		x += 1;
	}*/
	window_0.width = x;//����ߺ���ʽд�뻺�������������
	window_0.height = y;
	window_0.style = style;
	x *= 2;//�����ַ���˫�ֽ�
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
			/*�������ݿ�*/
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
			/*�����±���*/
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
	/*�Կ�ܽ������*/

	/*


	Ԥ���ӿ�����ɾ���·���������ݣ��Ժ������棬���������ݴ��뺯����
	Ȼ���ں����ڲ��������ݣ��������ʵ����GUI��ʾЧ��
	
	
	*/
	switch (type)//ѡ������������������������Ļ
	{
	case 0: {
		for (i = 0; i < window_0.height; i++)//������Ļ��ʾ�����Ҵ�����Ļ����
		{
			strcpy(window_0.screen[i], window[i]);
		}
	}
	case 1: {
		for (i = 0; i < window_0.height; i++)//������Ļ����
		{
			strcpy(window_0.text[i], window[i]);
		}
		break;
	}
	}
}


/*-------------------------------------------GUI����д��ģ��-------------------------------------------*/
void CreatGUI(int x, int y, int style, int type        /*x���У�y���У�style�Ǳ߿���ʽ*/) {
	/*�Զ���߶ȺͿ�ȵ��ı��򣬿��Զ����ݽ��и��ǲ�����ʵ����Ļ��ʾ��Ч����*/

	char window[1000][1000] = { "" };//��Ļ�ռ�ר��
	int i, j;
	char styleG[2][20] = { "������������","������������" };
	window_1.width = x;//����ߺ���ʽд�뻺�������������
	window_1.height = y;
	window_1.style = style;
	x *= 2;//�����ַ���˫�ֽ�
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
			/*�������ݿ�*/
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
			/*�����±���*/
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
	/*�Կ�ܽ������*/

	/*


	Ԥ���ӿ�����ɾ���·���������ݣ��Ժ������棬���������ݴ��뺯����
	Ȼ���ں����ڲ��������ݣ��������ʵ����GUI��ʾЧ��


	*/
	switch (type)//ѡ������������������������Ļ
	{
	case 0: {
		for (i = 0; i < window_1.height; i++)//������Ļ��ʾ�����Ҵ�����Ļ����
		{
			strcpy(window_1.screen[i], window[i]);
		}
	}
	case 1: {
		for (i = 0; i < window_1.height; i++)//������Ļ����
		{
			strcpy(window_1.text[i], window[i]);
		}
		break;
	}
	}
}



void TextCover(int style/*������ֱ߿���ʽ��0Ϊ�ޱ߿�*/,int dir/*��λ0��1*/,char strTemp[1000] ,int widthT) {
	/*�� creatWall �����ı߿���������������
	style=0�ޱ߿�
	style=1����
	style=2�����Сβ����
	
	widthT:����Ŀ��
	*/
	int len, i, j = 0, k = 0, m = 0, n = 0;
	int lineWidth;
	char msgTemp[1000][1000] = { "" };
	int width = window_0.width * 2;
	int height = window_0.height;//�ӽṹ���ж�ȡ���

	
	switch (style)
	{
	case 0: {//============================================================================================================�ޱ߿�
		switch (dir)
		{
		case 0: {//�����
			len = strlen(strTemp);
			lineWidth = widthT * 2 - 4;//�������ĳ���
			for ( i = 0; i < len;)
			{
				if (n == lineWidth)//���ַ��������һ��֮��ʼ�µ�һ��
				{
					if (strTemp[i] < 0)//������Ϊ����ʱ�Ĵ���������ǰ�㷨��ȱ�ݣ������Ŀ���ʹ�ã���Ӣ�Ļ�ϻ���� 
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
					if (strTemp[i] < 0)//������Ϊ����ʱ�Ĵ���������ǰ�㷨��ȱ�ݣ������Ŀ���ʹ�ã���Ӣ�Ļ�ϻ����
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
						/*��ʼ���������(��������䷽��)*/
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
		case 1: {//�Ҷ���
			len = strlen(strTemp);
			lineWidth = widthT * 2 - 4;
			for (i = 0; i < len;)
			{
				if (n == lineWidth)//���ַ��������һ��֮��ʼ�µ�һ��
				{
					if (strTemp[i] < 0)//������Ϊ����ʱ�Ĵ���������ǰ�㷨��ȱ�ݣ������Ŀ���ʹ�ã���Ӣ�Ļ�ϻ����
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
					if (strTemp[i] < 0)//������Ϊ����ʱ�Ĵ���������ǰ�㷨��ȱ�ݣ������Ŀ���ʹ�ã���Ӣ�Ļ�ϻ����
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
			/*��ʼ���������(�Ҷ��������Ӧ��䷽��)*/
			if (m == 0)																		//������ֻ��һ�е������,���� ����Ӧģʽ
			{
				len = strlen(msgTemp[m]);
				for ( i = 0; i < len; i++)
				{
					window_0.text[height - 2][i+(width - len - 2)] = msgTemp[m][i];			//���е�����Ӧ
				}
				window_0.lineHeight = 0;
			}
			else
			{
				for (i = height - (m + 1); i < height; i++)
				{
					for (j = 0; j < lineWidth; j++)
					{
						window_0.text[i - 1][j + (width - widthT * 2) + 2] = msgTemp[k][j];//����û������Ӧ
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
	case 1: {//==================================================================================================������
		switch (dir)
		{
		case 0: {//�����
			len = strlen(strTemp);
			if (len % 2 != 0)
			{
				len = len + 1;
			}
			lineWidth = widthT * 2 - 4;
			if (len < lineWidth)
			{//���ַ�����Ȳ������ÿ��ʱ��������Ӧ
				for (i = 0; i < len + 4; i += 2)
				{//�����ϱ߿�
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
				m = 1;//��һ��Ϊ�߿�m=0�����ڶ��������ݣ�m=1��
				 //-------------------------------------------------------��������
				if (n == 0)
				{//������߿�
					msgTemp[m][n] = -87;
					msgTemp[m][n + 1] = -90;
					n += 2;
				}
				for (j = 0; strTemp[j] != '\0'; j++)
				{
					msgTemp[m][n] = strTemp[j];//��������
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
				{//�����±߿�
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
			else//---------------------------------------------------------------------------------------����Ӧ������Ӧ�ֽ���
			{
				for (i = 0; i < lineWidth + 4; i += 2)
				{//�����ϱ߿�
				 //printf("[i:%d][%d]\n",i,lineWidth);
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)//��һ���Ǳ�
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -80;
					}
					if (i == lineWidth + 2)//���һ���Ǳ�
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -76;
					}
				}
				m = 1;//��һ��Ϊ�߿�
				for (i = 0; i < len;)
				{//��������
					if (n == 0)
					{//������߿�
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						n += 2;
					}
					if (n == lineWidth + 2)
					{//�����ұ߿�
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						m++;
						n = 0;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];//��������
						n++;
						i++;
					}
				}
				if (strTemp[i] == '\0')
				{
					k = (lineWidth + 2) - n;//------------------------����k��ĩβ�еĲ�ֵ
					for (i = 0; i < k; i++)
					{
						msgTemp[m][n++] = ' ';
					}
					msgTemp[m][lineWidth + 2] = -87;
					msgTemp[m][lineWidth + 3] = -90;
					m++;
				}
				for (i = 0; i < lineWidth + 4; i += 2)
				{//�����±߿�
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
			/*------------------------------------------------------------------��ʼ���������(�����߿���䷽��)*/
			k = 0;//---------------------------------------------����k��msgTemp�ĵ���ֵ
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
		case 1: {//--------------------------------------------------------------------------------------------------------------------------------------------------�Ҷ���
			len = strlen(strTemp);
			if (len % 2 != 0)
			{
				len = len + 1;
			}
			lineWidth = widthT * 2 - 4;
			if (len < lineWidth)
			{//���ַ�����Ȳ������ÿ��ʱ��������Ӧ
				lineWidth = len;//�������ڵ����е�ֵӦ���ǲ����ַ����ĳ���
				for (i = 0; i < len + 4; i += 2)
				{//�����ϱ߿�
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
				m = 1;//��һ��Ϊ�߿�
					  //-------------------------------------------------------��������
				if (n == 0)
				{//������߿�
					msgTemp[m][n] = -87;
					msgTemp[m][n + 1] = -90;
					n += 2;
				}
				for (j = 0; strTemp[j] != '\0'; j++)
				{
					msgTemp[m][n] = strTemp[j];//��������
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
				{//�����±߿�
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
			else//---------------------------------------------------------------------------------------����Ӧ������Ӧ�ֽ���
			{
				for (i = 0; i < lineWidth + 4; i += 2)
				{//�����ϱ߿�
				 //printf("[i:%d][%d]\n",i,lineWidth);
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)//��һ���Ǳ�
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -80;
					}
					if (i == lineWidth + 2)//���һ���Ǳ�
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -76;
					}
				}
				m = 1;//��һ��Ϊ�߿�
				for (i = 0; i < len;)
				{//��������
					if (n == 0)
					{//������߿�
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						n += 2;
					}
					if (n == lineWidth + 2)
					{//�����ұ߿�
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						m++;
						n = 0;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];//��������
						n++;
						i++;
					}
				}
				if (strTemp[i] == '\0')
				{
					k = (lineWidth + 2) - n;//------------------------����k������ĩβ�еĲ�ֵ
					for (i = 0; i < k; i++)
					{
						msgTemp[m][n++] = ' ';
					}
					msgTemp[m][lineWidth + 2] = -87;
					msgTemp[m][lineWidth + 3] = -90;
					m++;
				}
				for (i = 0; i < lineWidth + 4; i += 2)
				{//�����±߿�
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
			/*-------------------------------------------------------------------------------------------------��ʼ���������(�Ҷ���߿���䷽��)*/
			k = 0;//---------------------------------------------����k��msgTemp�ĵ���ֵ
			for (i = height - (m + 1); i < height; i++)
			{
				for (j = 0; j < lineWidth + 4; j++)
				{
					window_0.text[i - 1][j + (width - lineWidth - 6)] = msgTemp[k][j];//ͬʱ�Ե��кͶ�����Ӧ����lineWidth���ڵ��кͶ��е�ֵ�ֱ�Ϊ��len+4���͡� widthT * 2 - 4;����
				}
				k++;
			}
			window_0.lineHeight = k;
			break;
		}
		}
		break;
	}
	case 2: {//-------------------------------------------------------------------==========================================================��Сβ��
		switch (dir)
		{
		case 0: {//�����
			len = strlen(strTemp);
			if (len % 2 != 0)
			{
				len = len + 1;
			}
			lineWidth = widthT * 2 - 4;
			if (len < lineWidth)
			{//���ַ�����Ȳ������ÿ��ʱ��������Ӧ
				m = 0;
				lineWidth = len;//�������ڵ����е�ֵӦ���ǲ����ַ����ĳ���
				for (i = 0; i < len + 4; i += 2)
				{//�����ϱ߿�
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
				m = 1;//��һ��Ϊ�߿�
	//-------------------------------------------------------��������
				if (n == 0)
				{//������߿�
					msgTemp[m][n] = -87;
					msgTemp[m][n + 1] = -90;
					n += 2;
				}
				for (j = 0; strTemp[j] != '\0'; j++)
				{
					msgTemp[m][n] = strTemp[j];//��������
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
				{//�����±߿�
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
			else//---------------------------------------------------------------------------------------����Ӧ������Ӧ�ֽ���
			{
				for (i = 0; i < lineWidth + 4; i += 2)
				{//�����ϱ߿�
				 //printf("[i:%d][%d]\n",i,lineWidth);
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)//��һ���Ǳ�
					{
						msgTemp[0][i] = -95;
						msgTemp[0][i + 1] = -15;
					}
					if (i == lineWidth + 2)//���һ���Ǳ�
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -76;
					}
				}
				m = 1;//��һ��Ϊ�߿�
				for (i = 0; i < len;)
				{//��������
					if (n == 0)
					{//������߿�
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						n += 2;
					}
					if (n == lineWidth + 2)
					{//�����ұ߿�
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						m++;
						n = 0;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];//��������
						n++;
						i++;
					}
				}
				if (strTemp[i] == '\0')
				{
					k = (lineWidth + 2) - n;//------------------------����k��ĩβ�еĲ�ֵ
					for (i = 0; i < k; i++)
					{
						msgTemp[m][n++] = ' ';
					}
					msgTemp[m][lineWidth + 2] = -87;
					msgTemp[m][lineWidth + 3] = -90;
					m++;
				}
				for (i = 0; i < lineWidth + 4; i += 2)
				{//�����±߿�
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
			/*-------------------------------------------------------------------------------------------------��ʼ���������(�����߿���䷽��)*/
			k = 0;//---------------------------------------------����k��msgTemp�ĵ���ֵ
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
		case 1: {//--------------------------------------------------------------------------------------------------------------------------------------------------�Ҷ���
			len = strlen(strTemp);
			if (len % 2 != 0)
			{
				len = len + 1;
			}
			lineWidth = widthT * 2 - 4;
			if (len < lineWidth)
			{//���ַ�����Ȳ������ÿ��ʱ��������Ӧ
				lineWidth = len;//�������ڵ����е�ֵӦ���ǲ����ַ����ĳ���
				for (i = 0; i < len + 4; i += 2)
				{//�����ϱ߿�
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
				m = 1;//��һ��Ϊ�߿�
					  //-------------------------------------------------------��������
				if (n == 0)
				{//������߿�
					msgTemp[m][n] = -87;
					msgTemp[m][n + 1] = -90;
					n += 2;
				}
				for (j = 0; strTemp[j] != '\0'; j++)
				{
					msgTemp[m][n] = strTemp[j];//��������
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
				{//�����±߿�
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
			else//---------------------------------------------------------------------------------------����Ӧ������Ӧ�ֽ���
			{
				for (i = 0; i < lineWidth + 4; i += 2)
				{//�����ϱ߿�
				 //printf("[i:%d][%d]\n",i,lineWidth);
					msgTemp[0][i] = -87;
					msgTemp[0][i + 1] = -92;
					if (i == 0)//��һ���Ǳ�
					{
						msgTemp[0][i] = -87;
						msgTemp[0][i + 1] = -80;
					}
					if (i == lineWidth + 2)//���һ���Ǳ�
					{
						msgTemp[0][i] = -95;
						msgTemp[0][i + 1] = -15;
					}
				}
				m = 1;//��һ��Ϊ�߿�
				for (i = 0; i < len;)
				{//��������
					if (n == 0)
					{//������߿�
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						n += 2;
					}
					if (n == lineWidth + 2)
					{//�����ұ߿�
						msgTemp[m][n] = -87;
						msgTemp[m][n + 1] = -90;
						m++;
						n = 0;
					}
					else
					{
						msgTemp[m][n] = strTemp[i];//��������
						n++;
						i++;
					}
				}
				if (strTemp[i] == '\0')
				{
					k = (lineWidth + 2) - n;//------------------------����k������ĩβ�еĲ�ֵ
					for (i = 0; i < k; i++)
					{
						msgTemp[m][n++] = ' ';
					}
					msgTemp[m][lineWidth + 2] = -87;
					msgTemp[m][lineWidth + 3] = -90;
					m++;
				}
				for (i = 0; i < lineWidth + 4; i += 2)
				{//�����±߿�
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
			/*-------------------------------------------------------------------------------------------------��ʼ���������(�Ҷ���߿���䷽��)*/
			k = 0;//---------------------------------------------����k��msgTemp�ĵ���ֵ
			for (i = height - (m + 1); i < height; i++)
			{
				for (j = 0; j < lineWidth + 4; j++)
				{
					window_0.text[i - 1][j + (width -lineWidth-6)] = msgTemp[k][j];//ͬʱ�Ե��кͶ�����Ӧ����lineWidth���ڵ��кͶ��е�ֵ�ֱ�Ϊ��len+4���͡� widthT * 2 - 4;����
				}
				k++;
			}
			window_0.lineHeight = k;//--------------��k����������ֵ����lineHeight��ֵ��ע�����k����ʵ��ֵӦ��+1��
			break;
		}
		}
		break;
	}
	}
	
}


void PrintWall(int type) {//------------------------------------------------------------------------��Ļ��ӡ��
	int i, j;
	switch (type)
	{
	case 0: {//����������
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
	case 1: {//���GUI�˵�����
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
	/*-----------------------------------------------------------------------------------------������
	
	��TextCover����window_0��text�����ȡ����Ȼ�������ƶ���ʵ���������촰�ڵ�Ч��*/
	int height;//���δ�����и�
	int heightTemp = 0;//�ϴλ�����и�
	int i = 0, j = 0, m;

	height = window_0.lineHeight + 1;//��ȡ����д���ı����иߣ�+1����Ϊ�±�Ϊ0��
	j = window_0.height - height;
	for (m = window_0.height - height - 1; m < window_0.height - 1; m++)
	{
		system("cls");//��Ļˢ��
		/*  printf("[i=%d][j=%d][m=%d][widow_0.height=%d]\n", i, j, m, window_0.height);//���ڲ��Ե���Ҫ������ʾ  */
		for (i = 1; i < window_0.height - 2; i++)//���������
		{
			strcpy(window_0.screen[i], window_0.screen[i + 1]);//��Ļ��������
		}
		strcpy(window_0.screen[window_0.height - 2], "");
		strcpy(window_0.screen[window_0.height - 2], window_0.text[m]);//��text�����е��ı����뵽��Ļ������
		PrintWall(0);//ÿ�����ƶ�һ�δ�ӡһ����Ļ
	}
	CreatWall(window_0.width, window_0.height, window_0.style, 1);
}

void Welcome() {
	/**************************��ӭ����****************************************/
	char graph[100][1000] = {"��                                                                            ��"
		,"����                                                                          ��"
		,"������                                                                        ��"
		,"��������                                                                      ��"
		,"����������                                                                    ��"
		,"��  ��������                                                                  ��"
		,"��    ��������                                                                ��"
		,"��      ��������                                                              ��"
		,"��        ��������                                                            ��"
		,"��          ��������                                                          ��"
		,"��            ��������                                                        ��"
		,"��              ��������                                                      ��"
		,"��                ��������                                                    ��"
		,"��                  ��������                                                  ��"
		,"��                    ��������                                                ��"
		,"��                      ��������                                              ��"
		,"��                        ��������                                            ��"
		,"��                          ��������                                          ��"
		,"��                            ��������                                        ��"
		,"��                              ��������                                      ��"
		,"��                                ��������                                    ��"
		,"��                                  ��������                                  ��"
		,"��                                    ��������                                ��"
		,"��                                      ��������                              ��"
		,"��                                        ��������                            ��"
		,"��                                          ��������                          ��"
		,"��                                            ��������                        ��"
		,"��                                              ��������                      ��"
		,"��                                                ��������                    ��"
		,"��                                                  ��������                  ��"
		,"��                                                    ��������                ��"
		,"��                                                      ��������              ��"
		,"��                                                        ��������            ��"
		,"��                                                          ��������          ��"
		,"��                                                            ��������        ��"
		,"��                                                              ��������      ��"
		,"��                                                                ��������    ��"
		,"��                                                                  ��������  ��"
		,"��                                                                    ����������"
		,"��                                                                      ��������"
		,"��                                                                        ������"
		,"��                                                                          ����"
		,"��                                                                            ��" };
	int i = 0 , j = 0;
	while (i < 2)
	{
		if (j > 41)
		{
			j = 0;
			i++;
		}
		system("cls");
		printf("��������������������������������������������������������������������������������\n");
		printf("��   ����������    ��      ��                          �汾��1.0�����̰棩    ��\n");
		printf("��   ��      ��    ����    ��                          Copyright @AirNess     ��\n");
		printf("��   ��      ��    ����    ��                                                 ��\n");
		printf("��   ��      ��    ��  ��  ��                                                 ��\n");
		printf("��   ����������    ��  ��  ��                                                 ��\n");
		printf("��   ��      ��    ��    ����                                                 ��\n");
		printf("��   ��      ��    ��    ����                                                 ��\n");
		printf("��   ��      ��    ��      ��                                                 ��\n");
		printf("��   ��      ��    ��      ��                                                 ��\n");
		printf("��                                                                            ��\n");
		puts(graph[j]);
		printf("��                                                                            ��\n");
		printf("��             ����      ����   ����      ����    ������    ��������          ��\n");
		printf("��           ��    ��   ��  �� ��  ��   ��    ��  ��    ��    ��              ��\n");
		printf("��             ��      ��    ��     ��  ��    ��  ������      ��              ��\n");
		printf("��               ��    ��    ��     ��  ��������  ����        ��              ��\n");
		printf("��           ��    ��  ��    ��     ��  ��    ��  ��  ��      ��              ��\n");
		printf("��             ����    ��    ��     ��  ��    ��  ��    ��    ��              ��\n");
		printf("��������������������������������������������������������������������������������\n");
		j++;
	}
	_sleep(500);
}

/*--------------------------��Ϣ�򴴽�����-----------------------------*/
void MsgBox(char strTemp[1000],int widthT,int x,int y) {
	int len, i, j = 0, k = 0, m = 0, n = 0;
	int lineWidth;
	char msgTemp[1000][1000] = { "" };
	int width = window_1.width * 2;
	int height = window_1.height;//�ӽṹ���ж�ȡ���

	len = strlen(strTemp);
	if (len % 2 != 0)
	{
		len = len + 1;
	}
	lineWidth = widthT * 2 - 4;
	if (len < lineWidth)
	{//���ַ�����Ȳ������ÿ��ʱ��������Ӧ
		for (i = 0; i < len + 4; i += 2)
		{//�����ϱ߿�
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
		m = 1;//��һ��Ϊ�߿�m=0�����ڶ��������ݣ�m=1��
			  //-------------------------------------------------------��������
		if (n == 0)
		{//������߿�
			msgTemp[m][n] = -87;
			msgTemp[m][n + 1] = -90;
			n += 2;
		}
		for (j = 0; strTemp[j] != '\0'; j++)
		{
			msgTemp[m][n] = strTemp[j];//��������
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
		{//�����±߿�
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
	else//---------------------------------------------------------------------------------------����Ӧ������Ӧ�ֽ���
	{
		for (i = 0; i < lineWidth + 4; i += 2)
		{//�����ϱ߿�
			msgTemp[0][i] = -87;
			msgTemp[0][i + 1] = -92;
			if (i == 0)//��һ���Ǳ�
			{
				msgTemp[0][i] = -87;
				msgTemp[0][i + 1] = -80;
			}
			if (i == lineWidth + 2)//���һ���Ǳ�
			{
				msgTemp[0][i] = -87;
				msgTemp[0][i + 1] = -76;
			}
		}
		m = 1;//��һ��Ϊ�߿�
		for (i = 0; i < len;)
		{//��������
			if (n == 0)
			{//������߿�
				msgTemp[m][n] = -87;
				msgTemp[m][n + 1] = -90;
				n += 2;
			}
			if (n == lineWidth + 2)
			{//�����ұ߿�
				msgTemp[m][n] = -87;
				msgTemp[m][n + 1] = -90;
				m++;
				n = 0;
			}
			else
			{
				msgTemp[m][n] = strTemp[i];//��������
				n++;
				i++;
			}
		}
		if (strTemp[i] == '\0')
		{
			k = (lineWidth + 2) - n;//------------------------����k��ĩβ�еĲ�ֵ
			for (i = 0; i < k; i++)
			{
				msgTemp[m][n++] = ' ';
			}
			msgTemp[m][lineWidth + 2] = -87;
			msgTemp[m][lineWidth + 3] = -90;
			m++;
		}
		for (i = 0; i < lineWidth + 4; i += 2)
		{//�����±߿�
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
	/*------------------------------------------------------------------��ʼ���������(�����߿���䷽��)*/
	k = 0;//---------------------------------------------����k��msgTemp�ĵ���ֵ
	x = x * 2;
	if (x < 2)//XY�ֱ�Ϊ��λ��XΪ�о࣬YΪ�о�
	{
		x = 2;
	}
	if (y < 1)
	{
		y = 1;
	}
	for (i = y; i < y + m + 1; i++)//��msgTemp��X��Y��С�ƶ�λ��
	{
		for (j = 0; j < lineWidth + 4; j++)
		{
			window_1.text[i][x + j] = msgTemp[k][j];
		}
		k++;
	}
}

/*-------------------------------�����ʼ�˵����浽��Ļ--------------------------------*/
void SetTmpOut() {
	int i, j;
	for ( i = 1; i < 19; i++)
	{
		for ( j = 2; j < 78; j++)
		{
			window_1.screen[i][j] = window_1.text[i][j];
			/*��GUI�е�ͼ�λ����ȡ����Ļ*/
		}
	}
}



/*----------------------------------��ʼ�˵�ѡ����-------------------------------------*/
int StartMenu(char str[1000][1000],int m) {
	int i, k = 0;;//��λ��
	if (m < 0)//��m��ס�ϴν���ѡ��ʱ����λ��
	{
		i = 13;//��mС��0ʱ�������ù������棬����ػ����
	}
	else
	{
		i = m + 14;//��m����0�����������û�����ù������滹�ڣ���˼�ס����ѡ��ʱ����λ��
	}
	while (k != 1)//kֵ����ȷ�ϻس����Ƿ񱻰���
	{
		fflush(stdin);
		SetTmpOut();//�������е������������Ļ�У�
		system("cls");
		PrintWall(1);
		switch (Keydown())
		{
		case 72: {//------------------�����ϼ�
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
		case 80: {//------------------�����¼�
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
		case 13: {//------------------�س���
			if (i == 13)
			{
				break;
			}
			k = 1;
			break;
		}
		case 27: {//------------------ESC��
			i = 17;
			k = 1;
			break;
		}
		}
	}
	return i - 14;
}

#define CHAR_MAX 1000
//����gets���뺯��
char *stdin_get_str(char *str) {
	fgets(str, CHAR_MAX, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	return str;
}