#pragma once
#pragma warning(disable:4996)
/*
 *		�˹�ģ��ר������ͷ�ļ�
 *
 *		@AirNess
 *
 *		��������
 *		SettingGUI()
 *		SettingChioce()
 *		ClolrSet()
 *		StyleSet()
 *		
 */
struct _colorSetting//��ɫ����
{
	char _nPreColorFlag;//ǰ��ɫ����
	char _nBackColorFlag;//����ɫ����
	char strColorFormat[256];//���������̨�Ĳ�����
	int _colorChioce;//��ɫѡ������-1��Ĭ��״̬����ѡ����ʶ���Ƿ�����ɫ����
}_cSetting;

void SettingGUI() {
	int n = 0;
	char temp[1000] = { "  ϵͳ����                                                                                                ��ɫ����                  ������ʽ                  �����ϼ�                                          " };
	CreatGUI(40, 20, 0, 0);//�������ò˵�����
	MsgBox("          *****  *****  *****  *****  ***  *****  *****                           *      *        *      *     *   *   *  *                               *****  *****    *      *     *   *   *  *  **                               *  *        *      *     *   *   *  *   *                           *****  *****    *      *    ***  *   *  *****                 ", 38, 0, 1);
	MsgBox(temp, 15, 0, 9);
	SetTmpOut();
	PrintWall(1);
	printf("\n\n\n");
}

int SettingChioce(char str[1000][1000],int m) {
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
		SetTmpOut();//�������е������������Ļ��
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
		case 13: {//------------------�س���
			if (i == 13)
			{
				break;
			}
			k = 1;
			break;
		}
		case 27: {//------------------ESC��
			return 2;
			break;
		}
		}
	}
	return i - 14;
}

int ColorSet() {
	int i = 11, j = 18, k = 0;//i������,j������
	char temp[1000] = {"          ��                                                            1)ǰ��ɫ  ��  ��  ɫ      ��  ɫ      ��  ɫ      ����ɫ      ��  ɫ              ��  ------                                                    2)����ɫ  ��  ��  ɫ      ��  ɫ      ��  ɫ      ��  ɫ      ����ɫ              ��                                                            C)ȷ  ��  ��  ����ɫ      ǳ��ɫ      ����ɫ      ����ɫ      ����ɫ              ��                                                              ��  ��  ��  ����ɫ                                                              ��                                                            "};
	char temp1[1000] = { "          *****  *****  *****  *****  ***  *****  *****                           *      *        *      *     *   *   *  *                               *****  *****    *      *     *   *   *  *  **                               *  *        *      *     *   *   *  *   *                           *****  *****    *      *    ***  *   *  *****                 " };

	_cSetting._colorChioce = -1;//��ɫѡ������-1��Ĭ��״̬����ѡ����ʶ���Ƿ�����ɫ����
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
		case 49: {//��ݼ���ǰ��ɫ
			while (k < 6)
			{
				window_1.text[11][6 + k] = '-';
				window_1.text[13][6 + k] = ' ';
				k++;
			}
			_cSetting._colorChioce = 0;//0��ǰ��ɫѡ��ģʽ
			MsgBox("��ɫ���� ǰ��ɫ ", 6, 31, 2);
			break;
		}
		case 50: {//��ݼ�������ɫ
			while (k < 6)
			{
				window_1.text[13][6 + k] = '-';
				window_1.text[11][6 + k] = ' ';
				k++;
			}
			_cSetting._colorChioce = 1;//1�Ǳ���ɫѡ��ģʽ
			MsgBox("��ɫ���� ����ɫ ", 6, 31, 2);
			break;
		}
		case 99: {//��ݼ�������
			if (_cSetting._colorChioce == 1 || _cSetting._colorChioce == 0)//����Ƿ���ѡ����ɫ����
			{
				if (_cSetting._nBackColorFlag > 0 || _cSetting._nPreColorFlag > 0)
				{
					sprintf(_cSetting.strColorFormat, "color  %c%c", _cSetting._nBackColorFlag, _cSetting._nPreColorFlag);
					system(_cSetting.strColorFormat);
					MsgBox(" ֪ͨ�� ���óɹ�", 6, 31, 2);
				}
				else
				{
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
				}
			}
			else
			{
				MsgBox(" ����  δѡ�� ", 6, 31, 2);
			}
			break;
		}
		case 72: {//��
			if (i - 2 < 11)
			{
				//�ڶ��˲���Ϊ
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
				MsgBox("��ɫ���� ǰ��ɫ ", 6, 31, 2);
			else if (_cSetting._colorChioce == 1)
				MsgBox("��ɫ���� ����ɫ ", 6, 31, 2);
			break;
		}
		case 80: {//��
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
				MsgBox("��ɫ���� ǰ��ɫ ", 6, 31, 2);
			else if (_cSetting._colorChioce == 1)
				MsgBox("��ɫ���� ����ɫ ", 6, 31, 2);
			break;
		}
		case 75: {//��
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
				MsgBox("��ɫ���� ǰ��ɫ ", 6, 31, 2);
			else if (_cSetting._colorChioce == 1)
				MsgBox("��ɫ���� ����ɫ ", 6, 31, 2);
			break;
		}
		case 77: {//��
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
				MsgBox("��ɫ���� ǰ��ɫ ", 6, 31, 2);
			else if (_cSetting._colorChioce == 1)
				MsgBox("��ɫ���� ����ɫ ", 6, 31, 2);
			break;
		}
		case 13: {//�س�
			if (i == 11 && j == 6)//ǰ��ɫ������
			{//ǰ��ɫѡ��
				_cSetting._colorChioce = 0;//0��ǰ��ɫѡ��ģʽ
				MsgBox("��ɫ���� ǰ��ɫ ", 6, 31, 2);
			}
			if (i == 13 && j == 6)//����ɫ������
			{
				_cSetting._colorChioce = 1;//1�Ǳ���ɫѡ��ģʽ
				MsgBox("��ɫ���� ����ɫ ", 6, 31, 2);
			}
			if (i == 15 && j == 6)//ȷ�ϼ�������
			{
				if (_cSetting._colorChioce == 1 || _cSetting._colorChioce == 0)//����Ƿ���ѡ����ɫ����
				{
					if (_cSetting._nBackColorFlag > 0 || _cSetting._nPreColorFlag > 0)
					{
						sprintf(_cSetting.strColorFormat, "color  %c%c", _cSetting._nBackColorFlag, _cSetting._nPreColorFlag);
						system(_cSetting.strColorFormat);
						MsgBox(" ֪ͨ�� ���óɹ�", 6, 31, 2);
					}
					else
					{
						MsgBox(" ����  δѡ�� ", 6, 31, 2);
					}
				}
				else
				{
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
				}
			}
			if (i == 17 && j == 6)//���ؼ�������
				k = -1;

			if (i == 11 && j == 18)//��ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = '0';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = '0';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 11 && j == 30)//��ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = '1';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = '1';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 11 && j == 42)//��ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = '2';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = '2';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 11 && j == 54)//����ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = '3';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = '3';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 11 && j == 66)//��ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = '4';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = '4';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 13 && j == 18)//��ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = '5';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = '5';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 13 && j == 30)//��ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = '6';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = '6';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 13 && j == 42)//��ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = '7';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = '7';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 13 && j == 54)//��ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = '8';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = '8';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 13 && j == 66)//����ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = '9';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = '9';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 15 && j == 18)//����ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = 'A';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = 'A';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 15 && j == 30)//ǳ��ɫ������
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = 'B';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = 'B';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 15 && j == 42)//����ɫ
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = 'C';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = 'C';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 15 && j == 54)//����ɫ
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = 'D';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = 'D';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 15 && j == 66)//����ɫ
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = 'E';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = 'E';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
					break;
				}
				}
			}
			if (i == 17 && j == 18)//����ɫ
			{
				switch (_cSetting._colorChioce)
				{
				case 0: {//ǰ��ɫѡ��ģʽ
					_cSetting._nPreColorFlag = 'F';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case 1: {//����ɫѡ��ģʽ
					_cSetting._nBackColorFlag = 'F';
					MsgBox("  ֪ͨ  ѡ�����", 6, 31, 2);
					break;
				}
				case -1: {//��������
					MsgBox(" ����  δѡ�� ", 6, 31, 2);
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
	char temp_1[1000] = { "  ������ʽ                                                                                                 �ޱ߿�                    �б߿�                    ���Ǳ�                                           " };
	char str[10][1000] = {
		"   �ޱ߿���ʽԤ��                          �ޱ߿���ʽԤ��                          �ޱ߿���ʽԤ��                          �ޱ߿���ʽԤ��                       ",
		"   ���߿���ʽԤ��                        ������������������  �����߿���ʽԤ����  ������������������  ������������������  �����߿���ʽԤ����  ������������������ ",
		"   ���Ǳ���ʽԤ��                        ������������������  �����Ǳ���ʽԤ����  ������������������  �񩤩�������������  �����Ǳ���ʽԤ����  ������������������ "
	};
	CreatGUI(40, 20, 0, 0);
	MsgBox(temp_0, 38, 0, 1);
	MsgBox(temp_1, 15, 0, 9);
	int i = 13, k = 0;;//��λ��
	while (k != 1)//kֵ����ȷ�ϻس����Ƿ񱻰���
	{
		fflush(stdin);
		SetTmpOut();//�������е������������Ļ��
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
		case 13: {//------------------�س���
			if (i == 13)
			{
				break;
			}
			k = 1;
			break;
		}
		case 27: {//------------------ESC��
			k = 1;
			break;
		}
		}
	}
	return i - 14;
}

/*�ļ���ȡ����ģ��*/
int FileSave(int style,int mode) {
	FILE *fp;		//�ļ�ָ��
	int tmpStyle;	//style����
	char tmpPreColorFlag;//ǰ��ɫ����
	char tmpBackColorFlag;//����ɫ����

	switch (mode)
	{
	case 0: {		//��ȡģʽ
		if ((fp = fopen("setting.anl", "r")) == NULL)
		{
			printf("\n�ļ���ȡʧ�ܣ��޷�Ӧ������\n");
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
	case 1: {			//д��ģʽ
		if ((fp = fopen("setting.anl", "w")) == NULL)
		{
			printf("\n�ļ��޷����������޷���������\n");
			_sleep(500);
			return 0;
		}
		fprintf(fp, "%d,%c%c\n���ļ������������ã��벻Ҫ����ɾ��\n", style, _cSetting._nPreColorFlag, _cSetting._nBackColorFlag);
		fclose(fp);
		break;
	}
	}
}