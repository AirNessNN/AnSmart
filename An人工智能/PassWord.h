#pragma once
/*
 *		��Ƕ��ʽģ����Ҫ����ͷ�ļ��ſ��Ա���ɹ���������
 *
 *		@AirNess ��ȫģ��
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

char PW_newpassword[20];				//�½����뻺��
char PW_oldpassword[20];				//��ʽ����
char PW_contect[20];					//�������
char PW_check_p[20];					//�����Ƿ��������ļ�����
int PW_chioce1, PW_chioce2;				//switch�ı���
int PW_times;							//���볬ʱ�Ĵ���
int PW_check = 0;						//������
int c4, PW_i;
FILE *PW_fp;							//�ļ�ָ��
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
//����gets���뺯��
char *PW_stdin_get_str(char *str) {
	fgets(str, CHAR_MAX, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	return str;
}

int PW_CheckIn(char str[])				/*����Ϸ��Լ��ģ�飺����ֵ1�Ϸ�������ֵ2���Ϸ�*/
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

/*----------------------------------�����ȡģ��----------------------------*/
void PW_PassWordRead()
{
	if ((PW_fp = fopen("Text.anl", "r")) == NULL)
	{
		PW_FileCheck();
	}
	rewind(PW_fp);						//��λ��oldpassword��
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
	fclose(PW_fp);						//�ر��ļ�
}

/*----------------------------------����д��ģ��----------------------------*/
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
		printf("\n�ļ��޷��򿪣�д��ʧ�ܣ�");
		exit(1);
	}
	fputs(cache, PW_fp);
	fclose(PW_fp);
	PW_fp = fopen("Text.anl", "r");
	strcpy(PW_contect, "");
	fgets(PW_contect, 7, PW_fp);
	if (strcmp(PW_contect, cache) == 0)
	{
		che = 1;					//���д���ļ�����ȷ��
	}
	fclose(PW_fp);						//�ر��ļ�
	return che;

}

/*----------------------------------ȱʡ�ļ����ģ��-----------------------------*/
void PW_FileCheck() {
	if ((PW_fp = fopen("Text.anl", "r")) == NULL)
	{
		printf("\n\t\t\t!!!��ǰ�����ļ��Ѿ�ʧЧ�������롾�����롿���ñ�ģ��!!!\n");
		PW_stdin_get_str(PW_contect);
		if (strcmp(PW_contect, ADMINISTRATOR) == 0)
		{
			system("cls");
			printf("\n\t\t\t\t\t�����������\n");
			getch();
		}
		else
		{
			printf("\n\t\t\t���������!���򼴽��ر�!\n");
			_sleep(800);
			exit(1);
		}


		PW_fp = fopen("Text.anl", "w");
		if ((PW_fp = fopen("Text.anl", "r")) == NULL)
		{
			printf("\n\t\t\t      �ļ����޷�Ԥ֪�Ĵ����Ѿ���ֹ������\n");
			exit(1);
		}
	}
}

/*----------------------------------��ʼͼ�λ��ƺ���----------------------------*/
void PW_Draw() {
	printf("\t\t��������������������������������������������������������������\n");
	printf("\t\t��                       *An��ȫģ��*                       ��\n");
	printf("\t\t��                         *������*                         ��\n");
	printf("\t\t��                         ��������                         ��\n");
	printf("\t\t��                          ����ΰ                          ��\n");
	printf("\t\t��                                                          ��\n");
	printf("\t\t��                          �� ��                           ��\n");
	printf("\t\t��                          *3.2*                           ��\n");
	printf("\t\t��                      --�ؼ�������--                      ��\n");
	printf("\t\t��                                                          ��\n");
	printf("\t\t��������������������������������������������������������������\n");
	printf("\t\t ");
	for (PW_i = 0; PW_i < 60; PW_i++)
	{
		printf(">");
		_sleep(rand() % 50);
	}
}

/*----------------------------------�˵�����ģ��----------------------------*/
void PW_Draw_wall() {
	char wall[13][100] = {
		"\t\t������������������������������������������������������������" ,
		"\t\t��********************************************************��" ,
		"\t\t��*                                                      *��" ,
		"\t\t��*                    *���������*                    *��",
		"\t\t��*                     ���������롿                     *��",
		"\t\t��*                     ���޸����롿                     *��" ,
		"\t\t��*                     ���������롿                     *��" ,
		"\t\t��*                     �����ܵ��롿                     *��" ,
		"\t\t��*                     ������ģ�顿                     *��" ,
		"\t\t��*                     ����    ����                     *��" ,
		"\t\t��*                                                      *��" ,
		"\t\t��********************************************************��" ,
		"\t\t������������������������������������������������������������" };
	int i, j, k = 0;			//iֵ����ѭ������,jֵ�������Ʋ˵�ͼ�Σ�kֵ�������س����Ƿ���
	i = 3;
	j = 0;
	while (k != 1)
	{
		fflush(stdin);
		for (j = 0; j < 13; j++)
		{
			puts(wall[j]);
		}
		printf("\t\t ��  ��������ѡ��,ENTER��ȷ��\n");
		switch (PW_Keydown())
		{
		case 72:							//�������
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
		case 80:							//�������
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
		case 13:							//�س���
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

/*----------------------------------������ֵ��ȡģ��----------------------------*/
int PW_Keydown()
{
	char c;
	if ((c = getch())<0)c = getch();
	return c;
}

/*----------------------------------������ʾ����ģ��----------------------------*/
void Encryption(char strC[20]) {

	strcpy(PW_str, "");
	PW_i = 0;														//���ü�����i
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

/*----------------------------------������----------------------------*/
void PassWord()
{
	system("mode con cols=80 lines=23");
	strcpy(PW_oldpassword, "");
	strcpy(PW_newpassword, "");
	strcpy(PW_contect, "");
	PW_PassWordRead();
	printf("\t\t\t\t\t�ؼ�������...\n");
	PW_Draw();
	if (strcmp(PW_check_p, "a") == 0)
	{
		PW_check = 4;
	}
	if (PW_check == 4)					//���check����ֵ��4������������
	{
		printf("\n\t\t\t\t   ��������������ϵ����\n");
		getch();
		exit(1);
	}
	printf("\n\t\t\t\t\t�ؼ�������ɣ�\n");
	_sleep(1000);
	system("cls");
	while (1)
	{
		if (PW_check == 4)					//���check����ֵ��4������������
		{
			printf("\n\t\t\t\t��������������ϵ����");
			getch();
			exit(1);
		}
		PW_Draw_wall();					//���û��Ʋ˵�����

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
			printf("\n\t\t\t\t��������˳�\n");
			getch();
			exit(1);
		}
		default:
		{
			fflush(stdin);
			system("cls");
			printf("\n\t\t\t\t\t���벻�Ϸ���\n");
			printf("\n\t\t\t\t\t�����¼���ؼ��֣�\n");
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
	/*�������ݲ�����������ģ��*/

}

/*----------------------------------�������ģ��----------------------------*/
void PW_Login()
{
	/*��������ͺ˶�ģ��*/
	if (strcmp(PW_oldpassword, "") == 0)
	{
		system("cls");
		printf("\n\t\t\t\t\t��ǰ�����룬�봴����\n\t\t\t\t�밴�������������д��ģ��!");
		getch();
		PW_Newpassword();
	}
	printf("\n\t\t\t\t\t���������룺");
	fflush(stdin);
	Encryption(PW_contect);
	if (strcmp(PW_contect, PW_oldpassword) == 0)
	{
		PW_check = 1;
		printf("\n\t\t\t\t\t�˶���...\n\t\t\t\t\t����ɹ���\n\t\t\t\t\t����������...\n");
		getch();
		system("cls");
	}
	else
	{
		for (PW_times = 3; PW_times >= 1; PW_times--)						//��Դ�������ĳ�ʱ
		{
			fflush(stdin);
			system("cls");
			printf("\n\t\t\t\t\t�˶Գ���\n\t\t\t\t\t���������룡");
			printf("\n\t\t\t\t\t�㻹�С�%d���λ��ᣡ\n\t\t\t\t\t���ڴ����룺", PW_times);
			Encryption(PW_contect);
			if (strcmp(PW_contect, PW_oldpassword) == 0)
			{
				PW_check = 1;
				printf("\n\t\t\t\t\t�˶���...\n\t\t\t\t\t����ɹ���\n\t\t\t\t\t�����������������...\n");
				getch();
				system("cls");
				break;
			}
		}
		if (PW_check == 1)											//���check����ֵ��Ϊ1����������
		{
			system("cls");
			fflush(stdin);
		}
		else
		{
			if ((PW_fp = fopen("Text.anl", "a+")) == NULL)
			{
				printf("\n\t\t\t\t\t����δ֪����\n");
				exit(1);
			}
			fputs("a", PW_fp);
			printf("\n\t\t\t\t\t����!\n");
			PW_check = 4;
		}
	}
}
/*----------------------------------���봴��ģ��---------------------------------------*/
void PW_Newpassword()
{
	system("cls");
	printf("\n\t\t\t\t\tд��ģ��������...");
	switch (PW_CheckIn(PW_oldpassword))
	{
	case 1: { printf("\n\t\t\t\t�뵱ǰ�����ͻ��������������!\n"); printf("\n\t\t\t\t\t�����ؼ���\n"); break; }
	case 2:
	{
		while (1)
		{
			printf("\n\t\t\t\t�����6λ�����ֵ������룺");
			Encryption(PW_newpassword);									//����ͼ������ĺϷ���
			if (PW_CheckIn(PW_newpassword) == 2)
			{
				system("cls");
				printf("\t\t\t\t\t���������ʽ����ȷ!\n\t\t\t\t\t�벻Ҫ���������ַ�����ĸ��\n");
				PW_check = 0;										//����check
			}
			else
			{
				printf("\n\t\t\t\t\t���ٴ�ȷ�����룺");
				Encryption(PW_contect);
				if (strcmp(PW_contect, PW_newpassword) == 0)
				{
					if (PW_PassWordWrite(PW_newpassword) != 1)
					{
						system("cls");
						printf("\n\t\t\t\t\t���봴��ʧ�ܣ������ļ��Ƿ�ʧ��\n");
						break;
					}
					printf("\n\t\t\t\t\t���봴�����!\n");
					strcpy(PW_newpassword, PW_oldpassword);			//�½����뻺��תΪ��ʽ����
					strcpy(PW_contect, "");						//��ʼ��contect
					PW_PassWordRead();

					break;
				}
				else
				{
					printf("\n\t\t\t\t\t�˶�ʧ�ܣ������´�����\n");
					strcpy(PW_newpassword, " ");					//��������ʼ�������뻺��
				}
			}
		}
		break;
	}
	default:
		break;
	}
}

void PW_Revise()													//�޸�����ģ��
{
	printf("\n\t\t\t\t\t�����޸ĳ���������\n");
	switch (PW_CheckIn(PW_oldpassword))								/*����Ƿ��������*/
	{
	case 1:														//��������
	{
		printf("\n\t\t\t\t\t����������룺");
		fflush(stdin);
		Encryption(PW_contect);
		switch (strcmp(PW_contect, PW_oldpassword))					//�˶�������ȷ��
		{
		case 0:
		{
			while (1)
			{
				printf("\n\t\t\t\t\t�����6λ�����ֵ������룺");
				fflush(stdin);
				Encryption(PW_newpassword);								//����ͼ������ĺϷ���
				if (PW_CheckIn(PW_newpassword) == 2)
				{
					system("cls");
					printf("\n\t\t\t\t\t���������ʽ����ȷ\n\t\t\t\t\t�벻Ҫ���������ַ�����ĸ��\n");
				}
				else
				{
					printf("\n\t\t\t\t\t���ٴ�ȷ�����룺");
					fflush(stdin);
					Encryption(PW_contect);
					if (strcmp(PW_contect, PW_newpassword) == 0)
					{
						if (PW_PassWordWrite(PW_newpassword) != 1)
						{
							system("cls");
							printf("\t\t\t\t\t�ļ�д��ʧ�ܣ������ļ��Ƿ�ʧ��\n");
							break;
						}
						printf("\n\t\t\t\t\t���봴�����!\n");
						strcpy(PW_newpassword, PW_oldpassword);		//�½����뻺��תΪ��ʽ����
						strcpy(PW_contect, " ");					//��ʼ��contect
						strcpy(PW_newpassword, " ");				//��ʼ��newpassword
						PW_PassWordRead();
						break;
					}
					else
					{
						printf("\n\t\t\t\t\t�˶�ʧ�ܣ������´�����\n");
						strcpy(PW_newpassword, " ");				//��������ʼ�������뻺��
					}
				}
			}
			break;
		}
		default:
		{
			system("cls");
			printf("\n\t\t\t\t\t����˶Գ���������������ã�\n");
			break;
		}
		}
		break;
	}
	default:													//����������
	{
		system("cls");
		printf("\n\t\t\t\t\t��ǰ���������룬�봴������!\n");
		break;
	}
	}
}
/*----------------------------------��������ģ��----------------------------*/
void PW_Resetting()
{
	system("cls");
	printf("\n\t\t\t\t\t����ģ������...\n");
	switch (PW_CheckIn(PW_oldpassword))								//����Ƿ��������
	{
	case 1:														//��������
	{
		printf("\n\t\t\t\t\t���������룺");
		fflush(stdin);
		Encryption(PW_contect);
		switch (strcmp(PW_contect, PW_oldpassword))					//�˶�����
		{
		case 0:
		{
			system("cls");
			printf("\n\t\t\t\t\t����ȷ����ɣ�\n");
			printf("\n\t\t\t\t\t����������ɣ�\n");
			strcpy(PW_oldpassword, "");
			PW_PassWordWrite(PW_oldpassword);
			PW_PassWordRead();
			break;
		}
		default:
		{
			system("cls");
			printf("\n\t\t\t\t\t����˶Գ���������������ã�\n");
			break;
		}
		}
		break;
	}
	default:
	{
		system("cls");
		printf("\n\t\t\t\t\t����˶Գ���������������ã�\n");
		break;
	}
	}
}

/*----------------------------------���������ģ��----------------------------*/
void PW_Login_N()
{
	if (strcmp(PW_oldpassword, "") != 0)							//ȷ���Ƿ��������
	{
		system("cls");
		printf("\n\t\t\t\t\t��ǰ�������룬�볢������!\n");

	}
	else
	{
		system("cls");
		printf("\n\t\t\t\t\t���������ɹ��������������������...\n");
		getch();
		system("cls");
		PW_check = 1;												//����checkֵ
	}
}

/*----------------------------------����ģ��----------------------------*/
void PW_About() {
	system("cls");
	printf("\t\t��������������������������������������������������������������\n");
	printf("\t\t��                       *An��ȫģ��*                       ��\n");
	printf("\t\t��    *������*                                ����          ��\n");
	printf("\t\t��    ��������                           ��ģ��ΪǶ��ʽ     ��\n");
	printf("\t\t��     ����ΰ                            ����;ģ�飬��     ��\n");
	printf("\t\t��                                       �󲿷ֳ������     ��\n");
	printf("\t\t�� ---��������---                        ���ݲ���һ����     ��\n");
	printf("\t\t��                                       �̶��Ͽ��Ա�֤     ��\n");
	printf("\t\t��  �޸���������                       �󲿷ֳ���İ�     ��\n");
	printf("\t\t��  ������޷�Ƕ��                       ȫ������İ����     ��\n");
	printf("\t\t��  �����������С�                       �ķ��ʡ�           ��\n");
	printf("\t\t��                                                          ��\n");
	printf("\t\t��                                                          ��\n");
	printf("\t\t��                                            *�汾��3.2    ��\n");
	printf("\t\t��                                                          ��\n");
	printf("\t\t��������������������������������������������������������������\n");
	printf("\t\t \n");
	getch();
	system("cls");
}