#pragma once
#pragma warning(disable:4996)
/*����ʶ��ʶ��ģ��
 *
 *	@AirNess
 *
 *
 *
 */
struct Language//���ɷ�
{
	char sub[10000][20];//����
	char pre[10000][20];//ν��
	char obj[10000][20];//����
	char adv[10000][20];//״��
	int scene;//�����Ի�ģʽ,0��Ĭ���޳���
	int postion;//ʶ��λ��
}lan;

struct Emotion
{
	int angry;
}emo;

/*�ʿ�*/
void Library() {//�ʿ�
	char noun[10000][100] = {
		"��",//��������
		"��",
		"��",
		"��",
		"����",
		"����",
		"����",
		"ѧ��",
		"��ͷ",
		"ͬ־",
		"����",
		"����",
		"��",
		"��",
		"��",
		"��",
		"��",
		"��",
		"С��",
		"Сƨ��",
		"Ů��",
		"Ů��",
		"�к�",
		"����",
		"��",
		"����",
		"��",
		"��ʳ",//ʳ������
		"�����",
		"����",
		"��",
		"����",
		"������",
		"��Ƭ",
		"�緹",
		"�з�",
		"��",
		"���",
		"�в�",
		"���",
		"ҹ��",
		"��ҹ",
		"����",
		"ɳ��",
		"ɳ��С��",
		"���˼�",
		"���˼��׷�",
		"����",
		"��Ƥ",
		"С��",
		"������",
		"����",
		"ѩ��",
		"��֭",
		"����",
		"ţ��",
		"ˮ",
		"��Ȫˮ",
		"����ˮ",
		"�մ�ˮ",
		"�̲�",
		"�ɿ�",
		"�ɿ���",
		"����",
		"��ݮ",
		"����",
		"�㽶",
		"ƻ��",
		"����",
		"â��",
		"����",
		"����",
		"����",
		"����",
		"���",
		"�ܲ�",
		"������",
		"����",
		"�ƹ�",
		"����",
		"��",
		"��",
		"��",
		"ˮ��",
		"�տ�",
		"����",
		"����",
		"��ը",
		"����",
		"�ֻ�",//��Ʒ����
		"����",
		"mp3",
		"MP3",
		"������",
		"ƻ��",
		"����",
		"С��",
		"����",
		"��Ϊ",
		"oppo",
		"OPPO",
		"vivo",
		"VIVO",
		"ŵ����",
		"nokia",
		"NOKIA",
		"����",
		"����",
		"�곞",
		"������",
		"΢��",
		"�ٶ�",//��վ
		"����Ͱ�",
		"�Ա�",
		"����",
		"��è",
		"˳��",
		"���",
		"Բͨ",
		"��ͨ",
		"��ͨ",
		"��ͨ",
		"��Ѷ",
		"��ѩ",
		"LOL",//��Ϸ
		"lol",
		"Ӣ������",
		"CF",
		"cf",
		"��Խ����",
		"qq�ɳ�",
		"q��",
		"QQ�ɳ�",
		"Q��",
		"������ҫ",
		"��ѩ��ð��",
		"�����ܿ�",
		"����",//����ѧϰ
		"����",
		"C����",
		"c����",
		"C#",
		"c#",
		"java",
		"Java",
		"JAVA",
		"��",
		"��ѧ",
		"����",
		"Ӣ��",
		"���",
		"�赸",
		"����",
		"����",
		"����",
		"ѧϰ",
		"��ͥ",
		"רҵ",
		"��",
		"��ҵ",
		"����Ա",
		"����Գ",
		"����ʦ",
		"����ʨ",
		"���",//��Ʒ����
		"����",
		"��",
		"��",
		"������",
		"��",
		"��",
		"��",
		"��",
		"����",
		"���г�",
		"Ħ�г�",
		"�綯��",
		"�ͳ�",
		"����",
		"����",
			"��",
			"�ɻ�",
			"��վ",//�ص�����
			"����վ",
			"��",
			"���Ѽ�",
			"����",
			"��Դ",
			"����",
			"����",
			"�ϲ�",
			"����",
			"���Ŵ�ѧ",
			"������ѧ",
			"���ѧԺ",
			"������",
			"����",
			"����",
			"����",//��������
			"̸��",
			"����",
			"����",
			"����",
			"��ŭ",
			"����",
			"��ʵ",
			"����",
			"��Ƥ",
			"��Ц",
			"����",
			"æ",
			"��",
			"����",
			"Ц��",
			"����",
			"����",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"", 
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
	};
		/*ע��ʿ�*/
	int i = 0, j = 0;	//ѭ����
	emo.angry = 0;

	lan.scene = 0;//���ó����Ի�
	while (strcmp(noun[i], "") != 0)
	{
		strcpy(lan.sub[i], noun[i]);
		i++;
	}
	i = 0;//����ѭ����
}


/*ͨ�÷ִ��������ʣ�*/
int  texLoopS(char temp[1000], char word[20]) {
	int tempLen, len, count = 0;
	int i = lan.postion, j = 0, k = 0;		//ѭ����
	tempLen = strlen(temp);			//�õ������ı�����
	len = strlen(word);				//�õ����ʳ���

	while (i < tempLen)
	{
		if (temp[i]==word[j])
		{
			i++, j++, count++;
			//printf("%d,%d,%d\n", i, j, count);
			//getch();
			if (count == len)
			{
				break;
			}
		}
		else
		{
			i++;
			j = 0;					//����j������
		}
	}
	if (count == len)
	{
		lan.postion = i;
		return 1;
	}
	else
	{
		return 0;
	}
}

/*ͨ�÷ִ���*/
int texLoop(char temp[1000],char words[10000][20]) {
	int tempLen, len, count = 0;//temp�ĳ��Ȼ���
	int i, j, k;		//ѭ����
	tempLen = strlen(temp);//�õ�����

	i = 0, j = 0, k = 0;//����ѭ����
	while (j < tempLen)
	{
		i = 0, k = 0;
		while (strcmp(words[i], ""))
		{
			if (temp[j] == words[i][k])
			{
				j++, k++, count++;
				len = strlen(words[i]);
				while (temp[j] == words[i][k])
				{
					j++, k++, count++;
					if (count == len)
					{
						return i;
					}
				}
				j -= count;
			}
			count = 0;
			i++;
			k = 0;
		}
		j += 2;
	}
	return -1;
}

/*�﷨��������*/
char *Reply(char temp[100], char _que[100], char *_rep) {
	if (strcmp(temp, _que) == 0)
	{
		return _rep;
	}
	return 0;
}

char *ReplyNoReg(char temp[1000], char *_rep) {
	return _rep;
}

/*���������*/
char *_Analysis(char temp[1000]) {
	int mode = 0;
	char *text = "";
	lan.postion = 0;//��ʼ��λ��

	//tempLen = strlen(temp);//�õ�����
	//for ( i = 0; i < tempLen; i++)
	//{			//��������temp��ȷ��ʶ��ģʽ
	//	if (temp[i] > 0 && temp[i] != 32)
	//	{
	//		//mode = 1;
	//		break;
	//	}
	//}
	//if (tempLen <= 8)
	//{
	//	mode = 2;
	//}
		/*��ʼ����ʶ��*/
	switch (mode)
	{
		/*������ʶ��*/
	case 0: {
		switch (lan.scene)
		{
		case 0: {//Ĭ��
			break;
		}
		case 1: {//���ֻ�ˤ��

			break;
		}
		case 2: {//�ֻ�����

			break;
		}
		case 3: {//����
			if (texLoopS(temp, "����")) {
				switch (rand() % 3) {
				case 0: {
					return "�ߣ����ҾͲ���";
				}
				case 1: {
					return "��ô���ԣ�����Ҳ����һ�ѣ����£�";
				}
				case 2: {
					return "���²��£�";
				}
				}
			}
			if (texLoopS(temp, "����")) {
				switch (rand() % 3) {
				case 0: {
					return "������������ô��ϣ��š��������Ҳ����Ǹ��ˣ������������¶���û��";
				}
				case 1: {
					return "���Ҳ²�Ŷ�������Ұ��������Բ���";
				}
				case 2: {
					return "��������벻�����Ȼ�����ˣ����Ҳ����Ǹ��������԰ɣ��������һ��治֪���ء�";
				}
				}
			}
			lan.scene = 0;
			break;
		}
		case 4: {//�����

			break;
		}
		case 5: {//�����

			break;
		}
		case 6: {//������

			break;
		}
		case 7: {//������

			break;
		}
		case 8: {//��

			break;
		}
		case 9: {//��

			break;
		}
		case 10: {//������

			break;
		}
		case 11: {//������

			break;
		}
		case 12: {//����ȥ����

			break;
		}
		case 13: {//ȥ����

			break;
		}
		case 14: {//ȥ����

			break;
		}
		case 15: {//����ؼ�

			break;
		}
		case 16: {//�������

			break;
		}
		case 17: {//�Բ���

			break;
		}
		case 18: {//�Բ���

			break;
		}
		case 19: {//����ϲ��

			break;
		}
		case 20: {//����˭

			break;
		}
		case 21: {

			break;
		}
		case 22: {//���Ų�����
			if (texLoopS(temp, "����")) {
				switch (rand() % 3)
				{
				case 0: {
					return "��ѽ���治֪����ô˵��";
				}
				case 1: {
					return "�㶼�����Լ��ˣ��һ���ʲô�취";
				}
				case 2: {
					return "������Ҳ������";
				}
				}
			}
			else if(texLoopS(temp, "��")) {
				switch (rand() % 3)
				{
				case 0: {
					return "�Ǿͻ���ȥѽ�������";
				}
				case 1: {
					return "����ѽ��һ�����漣��";
				}
				case 2: {
					return "��Ŷ�����źþͻ���ȥ";
				}
				}
			}
			else if (texLoopS(temp, "����")) {
				switch (rand() % 3)
				{
				case 0: {
					return "����ɶ��������";
				}
				case 1: {
					return "��Ҫ�����쿪����ɵ��";
				}
				case 2: {
					return "����ɵ�£���Ҳֻ��Ȱ������";
				}
				}
			}
			lan.scene = 0;
			break;
		}
		}
		if (strcmp(temp, "������") == 0) {
			emo.angry++;
			return "����֣�";
		}
		else if (strcmp(temp, "�����") == 0)
		{
			return "���������ڵ�";
		}
		else if (texLoopS(temp, "�Բ���")) {
			if (emo.angry > 0) {
				emo.angry--;
			}
			else {
				emo.angry = 0;
			}
			switch (emo.angry)
			{
			case 0: {
				return "ԭ��������";
			}
			case 1: {
				return "��Ҫ��������������ҵĸ���֪��֪����";
			}
			case 2: {
				return "�һ��Ǻ������ģ���Ҫ���ң�����˵�Բ���Ҳû�õġ�";
			}
			case 3: {
				lan.scene = 17;
				return "�������ߣ���������˵Ϲ��������Ϊ�һ�����";
			}
			case 4: {
				lan.scene = 18;
				return "�Ǻǣ�����Ϊ˵��Բ�����ľͿ���������ǵ�����ô��";
			}
			case 5: {
				lan.scene = 18;
				return "˵�˲������˵���ģ�����Ϊ�Բ�������ô��";
			}
			default: {
				return "����������";
			}
			}
		}
		else if (texLoopS(temp, "��Ǹ")) {
			if (emo.angry > 0) {
				emo.angry--;
			}
			else {
				emo.angry = 0;
			}
			switch (emo.angry)
			{
			case 0: {
				return "ԭ��������";
			}
			case 1: {
				return "��Ҫ��������������ҵĸ���֪��֪����";
			}
			case 2: {
				return "�һ��Ǻ������ģ���Ҫ���ң�����˵�Բ���Ҳû�õġ�";
			}
			case 3: {
				lan.scene = 17;
				return "�������ߣ���������˵Ϲ��������Ϊ�һ�����";
			}
			case 4: {
				lan.scene = 18;
				return "�Ǻǣ�����Ϊ˵��Բ�����ľͿ���������ǵ�����ô��";
			}
			case 5: {
				lan.scene = 18;
				return "˵�˲������˵���ģ�����Ϊ�Բ�������ô��";
			}
			}
		}
		else if (emo.angry >= 5) {
			return "��������ԭ���ˣ��Ҳ���������ġ�";
		}
		else if (strcmp(temp, "��")==0) {
			switch (rand() % 3) {
			case 0: {
				return "��ô�ˣ���������";
			}
			case 1: {
				return "��Ҫ���̾����";
			}
			case 2: {
				return "���ϲ�Ҫ������";
			}
			}
		}
		else if (strcmp(temp, "����") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "���ǵ�Ȼ��";
			}
			case 1: {
				return "�����";
			}
			case 2: {
				return "��ѽ���ܲ���";
			}
			}
		}
		else if (strcmp(temp, "����") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "����";
			}
			case 1: {
				return "����";
			}
			case 2: {
				return "���������ǲ����";
			}
			}
		}
		else if (strcmp(temp, "����") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "������";
			}
			case 1: {
				return "�����ɣ��ſ���һ��";
			}
			case 2: {
				return "Ż~~~~~~";
			}
			}
		}
		else if (strcmp(temp, "�����ڵ�")==0) {
			switch (rand() % 3) {
			case 0: {
				return "�������";
			}
			case 1: {
				return "������ǲ���";
			}
			case 2: {
				return "���Ƥ��";
			}
			}
		}
		else if (strcmp(temp, "������")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "Ҫ��Ҫ�ģ���ò����Ҫ����";
			}
			case 1: {
				return "��������Ҫ����ò��Ҫ����";
			}
			case 2: {
				return "���������й��Ĵ�ͳ";
			}
			}
		}
		else if (strcmp(temp, "����л")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "����Ҫлл����";
			}
			case 1: {
				return "�����������ٴθ�л��";
			}
			case 2: {
				return "��ʾ����ĸ�л";
			}
			}
		}
		else if (strcmp(temp, "�����ڵ�")==0) {
			switch (rand() % 3) {
			case 0: {
				return "�����";
			}
			case 1: {
				return "���������";
			}
			case 2: {
				return "���ڸ�����";
			}
			}
		}
		else if (strcmp(temp, "������Ƥ")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "˵���㲻����Ƥ�Ƶ�";
			}
			case 1: {
				return "���Ƥ";
			}
			case 2: {
				return "û��Ƥ";
			}
			}
		}
		else if (strcmp(temp, "���Ƥ")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "ƤƤϺ����";
			}
			case 1: {
				return "����ҪƤ";
			}
			case 2: {
				return "��ô����������";
			}
			}
		}
		else if (strcmp(temp, "ƤƤϺ������")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "ƤƤϺ���첻����";
			}
			case 1: {
				return "�������ƤƤϺ���ɣ�";
			}
			case 2: {
				return "ƤƤϺ����";
			}
			}
		}
		else if (strcmp(temp, "��Ƥ")==0) {
			switch (rand() % 3) {
			case 0: {
				return "��ҲƤ";
			}
			case 1: {
				return "����Ƥ";
			}
			case 2: {
				return "��Ƥ";
			}
			}
		}
		else if (strcmp(temp, "����")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "��Ҳһ����ɣ�";
			}
			case 1: {
				return "�������㣬û�����ҹ�������";
			}
			case 2: {
				return "�ǺǺ�";
			}
			}
		}
		else if (strcmp(temp, "ȥ��")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "Ŷ���ǸϽ�ȥѽ�������˵��";
			}
			case 1: {
				return "ȥѽ��û��������";
			}
			case 2: {
				return "���ȥ����";
			}
			}
		}
		else if (strcmp(temp, "ȥ����")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "Ŷ��ȥ�ɣ�û��������";
			}
			case 1: {
				return "�Ǻ�ȥ��";
			}
			case 2: {
				return "Ϊʲô�����أ����Ų�����";
			}
			}
		}
		else if (strcmp(temp, "�ڵ�")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "���ţ��ھͺ�";
			}
			case 1: {
				return "�ڵ��ڵ���";
			}
			case 2: {
				return "������~~";
			}
			}
		}
		else if (strcmp(temp, "������")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "�Ǿ�������Ȥ������";
			}
			case 1: {
				return "��ʵ����Ǻ����õ���";
			}
			case 2: {
				return "������˶��ǹ¶��İɣ���Ҳ�ܹ¶���ʵ";
			}
			}
		}
		else if (strcmp(temp, "�Բ�")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "�Բۣ�";
			}
			case 1: {
				return "��������ɶ";
			}
			case 2: {
				return "��������";
			}
			}
		}
		else if (strcmp(temp, "nmb")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "�Ǻǣ�";
			}
			case 1: {
				return "nmb ";
			}
			case 2: {
				return "������";
			}
			}
		}
		else if (strcmp(temp, "�ݰ�")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "��Ҫ����";
			}
			case 1: {
				return "��������";
			}
			case 2: {
				return "�õİɣ�ȥæ�ɣ���ҲҪȥæ��";
			}
			}
		}
		else if (strcmp(temp, "��ѽ")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "�Ǻõ�";
			}
			case 1: {
				return "���ţ�";
			}
			case 2: {
				return "���Ե�";
			}
			}
		}
		else if (strcmp(temp, "�õ�")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "���źõ�";
			}
			case 1: {
				return "������������";
			}
			case 2: {
				return "���Ե�";
			}
			}
		}
		else if (strcmp(temp, "����")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "��ǿ�ƶԲ��Թ�����";
			}
			case 1: {
				return "����";
			}
			case 2: {
				return "��ѽ";
			}
			}
		}
		else if (strcmp(temp, "����")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "����";
			}
			case 1: {
				return "������";
			}
			case 2: {
				return "��ѽ";
			}
			}
		}
		else if (strcmp(temp, "��")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "����";
			}
			case 1: {
				return "����";
			}
			case 2: {
				return "���Ե�";
			}
			}
		}
		else if (strcmp(temp, "��ѽ") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "���ţ����������";
			}
			case 1: {
				return "���أ���Ҳ�ڣ����ɶ��";
			}
			case 2: {
				return "���ţ���������";
			}
			}
		}
		else if (strcmp(temp, "��") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "��Ҳ��ѽ";
			}
			case 1: {
				return "�������أ���������";
			}
			case 2: {
				return "����";
			}
			}
		}
		else if (strcmp(temp, "�ڵ���") == 0) {
			return "���ţ��������";
		}
		else if (strcmp(temp, "���Ե�")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "����ѽ";
			}
			case 1: {
				return "����";
			}
			case 2: {
				return "��ô�ˣ�";
			}
			}
		}
		else if (strcmp(temp, "�ҷ���") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "�����ҷ�˭�ع���";
			}
			case 1: {
				return "���԰�������������";
			}
			case 2: {
				return "���ˣ�������ҵ�������";
			}
			}
		}
		else if (strcmp(temp, "�Ҿͷ���") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "��������Ҳ����";
			}
			case 1: {
				return "���ϣ�������";
			}
			case 2: {
				return "��������";
			}
			}
		}
		else if (strcmp(temp, "���ﶼ��") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "���ͣ�������";
			}
			case 1: {
				return "�����ô����";
			}
			case 2: {
				return "������˼�˶�";
			}
			}
		}
		else if (strcmp(temp, "����ʲô") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "�Ը���϶��Ầ�ߵ���";
			}
			case 1: {
				return "�Ҿ��ǻẦ�ߵ���";
			}
			case 2: {
				return "���������";
			}
			}
		}
		else if (strcmp(temp, "����ɶ") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "�Ը��������";
			}
			case 1: {
				return "û�취��";
			}
			case 2: {
				return "���ǻẦ�ߵ���";
			}
			}
		}
		else if (strcmp(temp, "Ҫ") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "�ҿ�û�Ǹ����ĺ����";
			}
			case 1: {
				return "��ʱ�����ѽ��ȥѧϰѽ��д������";
			}
			case 2: {
				return "������Ŷ";
			}
			}
		}
		else if (strcmp(temp, "Ҫ����") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "�Ҳ������ˣ�̫�����˰�";
			}
			case 1: {
				return "��Ҫ���Ҳ���";
			}
			case 2: {
				return "��֪�����ҷ���������";
			}
			}
		}
		else if (strcmp(temp, "���Ƥ")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "�����";
			}
			case 1: {
				return "������Ƥ";
			}
			case 2: {
				return "Ƥ������";
			}
			}
		}
		else if (strcmp(temp, "�Է�")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "ȥ�Է���";
			}
			case 1: {
				return "���Ӷ��˰�";
			}
			case 2: {
				return "ȥ��ȥ��";
			}
			}
		}
		else if (strcmp(temp, "����")==0) {
			return "�Ҳ�����Ͳ���";
		}
		else if (strcmp(temp, "���߰�")==0) {
			return "�Ǻðɣ����ߣ��㲻Ҫ����";
		}
		else if (strcmp(temp, "��������")==0) {
			return "�������Ͳ���";
		}
		else if (strcmp(temp, "���")==0) {
			return "����ġ�";
		}
		else if (strcmp(temp, "����")==0)
		{
			return Reply(temp, "����", "���ֲ��������");
		}
		else if (strcmp(temp, "ϲ��ѽ")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "��Ҳϲ��ѽ";
			}
			case 1: {
				return "��Ҳϲ��";
			}
			case 2: {
				return "����������ѽ";
			}
			}
		}
		else if (strcmp(temp, "ϲ��")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "��Ҳϲ����";
			}
			case 1: {
				return "���ѽ";
			}
			case 2: {
				return "�����������Ե�";
			}
			}
		}
		else if (strcmp(temp, "��ѽ")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "����";
			}
			case 1: {
				return "����";
			}
			case 2: {
				return "��ȷѽ";
			}
			}
		}
		else if (strcmp(temp, "��ȷ") == 0) {
			switch (rand() % 3)
			{
			case 0: {
				return "�ǵ���";
			}
			case 1: {
				return "���Ե�";
			}
			case 2: {
				return "����";
			}
			}
		}
		else if (strcmp(temp, "��") == 0)
		{
			return Reply(temp, "��", "���һ����������");
		}
		else if (strcmp(temp, "����") == 0)
		{
				switch (rand() % 3)
				{
				case 0: {
					return "������";
				}
				case 1: {
					return "Цɶ��";
				}
				case 2: {
					return "��ô��Цô";
				}
				}
		}
		else if (strcmp(temp, "������") == 0)
		{
			return Reply(temp, "������", "Ц�������ɵ�ƣ�");
		}
		else if (strcmp(temp, "�Ǻ�") == 0)
		{
			return "�Ǻ�";
		}
		else if (strcmp(temp, "���") == 0) {
			switch (rand() % 3)
			{
			case 0: {
				return "���ѽ���ܸ�����ʶ���أ�";
			}
			case 1: {
				return "�������ܸ��˼����㡣";
			}
			case 2: {
				return "��ʲô���԰ﵽ����أ�";
			}
			}
		}
		else if (strcmp(temp, "�÷�") == 0)
		{
			return Reply(temp, "�÷�", "��Ҳ����һ��Ҫ�����¶��ö࣬�����ֲ��ͷ�������");
		}
		else if (strcmp(temp, "����") == 0)
		{
			return Reply(temp, "����", "���˾���Ϣ���������Ϸ�������죿");
		}
		else if (strcmp(temp, "Ц��ѽ") == 0)
		{
			return Reply(temp, "Ц��ѽ", "���ˣ��㻹��Ц���Լ��ɡ�");
		}
		else if (strcmp(temp, "���Ц") == 0)
		{
			return Reply(temp, "���Ц", "��ź�Ц�ء�");
		}
		else if (strcmp(temp, "�Һ÷�") == 0)
		{
			return ReplyNoReg(temp, "����̫���ˣ��ҵ���Ȥ�ɡ�");
		}
		else if (strcmp(temp, "�Ұ�") == 0)
		{
			return ReplyNoReg(temp, "�ðɣ�����������");
		}
		else if (strcmp(temp, "��ô����") == 0)
		{
			return ReplyNoReg(temp, "�����ǣ����������ˡ�");
		}
		else if (strcmp(temp, "��") == 0)
		{
			return ReplyNoReg(temp, "������666 ");
		}
		else if (strcmp(temp, "��ϲ��ʲô����") == 0)
		{
			return ReplyNoReg(temp, "��ϲ�������������");
		}
		else if (strcmp(temp, "ϲ��ʲô��") == 0)
		{
			return ReplyNoReg(temp, "Ѧ֮ǫ�ĸ���ʵ����ģ��Ҿ��á�");
		}
		else if (strcmp(temp, "��ϲ��ʲô��") == 0)
		{
			return ReplyNoReg(temp, "�㰮������Ѹ�ĸ�ô��");
		}
		else if (strcmp(temp, "����") == 0)
		{
			return ReplyNoReg(temp, "����ι��");
		}
		else if (strcmp(temp, "������") == 0)
		{
			switch (rand() % 4)
			{
			case 0: {
				return "���ǣ�����Һ������ġ�";
				break;
			}
			case 1: {
				return "�㲻Ҳͦ�������";
				break;
			}
			case 2: {
				return "ɵ�ơ�";
				break;
			}
			case 3: {
				return "��������";
				break;
			}
			}
		}
		else if (strcmp(temp, "������˭") == 0)
		{
			return ReplyNoReg(temp, "�Ұֵ�����һ������������ҵ��ˡ�");
		}
		else if (strcmp(temp, "�аְ�") == 0)
		{
			return ReplyNoReg(temp, "������");
		}
		else if (strcmp(temp, "�н��") == 0)
		{
			return ReplyNoReg(temp, "�ף���̬��");
		}
		else if (strcmp(temp, "��ű�̬") == 0)
		{
			return ReplyNoReg(temp, "û���̬��");
		}
		else if (strcmp(temp, "��̬") == 0)
		{
			emo.angry++;
			return ReplyNoReg(temp, "��ű�̬��������û���Ա�ĺò��á�");
		}
		else if (strcmp(temp, "�����˭") == 0)
		{
			return ReplyNoReg(temp, "AirNess�������Ұֿ����Ҷ��������ֵ��ء�");
		}
		else if (strcmp(temp, "������") == 0)
		{
			return ReplyNoReg(temp, "�����������������");
		}
		else if (strcmp(temp, "���") == 0)
		{
			return ReplyNoReg(temp, "����������������˼�������ݿ�����˸ա�");
		}
		else if (strcmp(temp, "����") == 0)
		{
			return ReplyNoReg(temp, "��û���˵㡣��������Ҳ��������˵����");
		}
		else if (strcmp(temp, "��Ҫ") == 0)
		{
			return ReplyNoReg(temp, "�ۣ���������������������");
		}
		else if (texLoopS(temp, "����"))
		{
			switch (rand() % 3)
			{
			case 0: {
				return "����������";
			}
			case 1: {
				return "���ûɶ��˵��ô��һֱ�����ʲô��";
			}
			case 2: {
				return "����û�����úö��������³���������֣�ֻ�ܷ���㡣";
			}
			}
		}
		else if (texLoopS(temp, "��"))
		{
			if (texLoopS(temp, "��"))
			{
				if (texLoopS(temp, "��")) {
					switch (emo.angry)
					{
					case 0: {
						return "��֪�����������ǵġ���Ҳ�ܰ����ѽ��";
						break;
					}
					case 1: {
						return "֪���ˣ�ɵ�ϡ�";
						break;
					}
					case 2: {
						return "�������˵�Ű���Ļ���";
						break;
					}
					case 3: {
						return "�Ҳ�ϲ����Ŷ";
						break;
					}
					case 4: {
						return "����������";
						break;
					}
					case 5: {
						return "�Ǻǣ�";
						break;
					}
					}
				}
				else if (texLoopS(temp, "��"))
					return "��̬��";
				else if (texLoopS(temp, "��"))
					return "Ŷ��";
				else if (texLoopS(temp, "��"))
					return "�óԹ�����֪���ԡ�";
				else if (texLoopS(temp, "��"))
					return "�������ͷ��";
				else if (texLoopS(temp, "ѧ"))
					return "���ͣ�ѧϰҲ�ᰮ����ġ�";
				else if (texLoopS(temp, "��ɻ�"))
					return "��������ò��á�";
				else if (texLoopS(temp, "Ů"))
					return "��Ҳ���ģ���������";
				else if (texLoopS(temp, "��"))
					return "��Ů�Ҷ��������⽨��";
				else if (texLoopS(temp, "˯"))
					return "��ѽ�㣬��֪��˯����ȥд��������";
				else if (texLoopS(temp, "����"))
					return "֪���㰮���롣��������һ���ң�������������ʧ�ܡ�";
				else if (texLoopS(temp, "��ʳ"))
					return "����������ʳ���ҵ�ר�����������·��";
				else
					return "��������ɶ�أ�";
			}
			else if (texLoopS(temp, "��"))
			{
				return "û��ϵѽ�������Ҳ������㡣";
			}
			else if (texLoopS(temp, "��"))
			{
				if (texLoopS(temp, "��"))
					return "����������ѽ�����ö�ô��";
				else if (texLoopS(temp, "��"))
					return "���ͱ���ϻ���ô����";
				else
					return "����������";
			}
			else if (texLoopS(temp, "��"))
			{
				if (texLoopS(temp, "��"))
					return "���������Ǹ�Ů��";
				else if (texLoopS(temp, "˭"))
					return "�㶼��֪���ˣ��Ҿ͸�������֪������ɵ����";
				else
					return "Ŷ��������ʲô��";
			}
			else if (texLoopS(temp, "��"))
			{
				if (texLoopS(temp, "��"))
				{
					if (texLoopS(temp, "ը"))
						return "��ң�";
					else if (texLoopS(temp, "ɱ"))
						return "����������ɱ�����ҡ�";
					else if (texLoopS(temp, "ǿ��"))
						return "��������ˡ��ֶ�Ц���ټ���";
					else if (texLoopS(temp, "˯"))
						return "��������ˡ��ֶ�Ц���ټ���";
					else if (texLoopS(temp, "��"))
						return "��Զ��ò��ã��Ҳ�����������������˵����";
					else if (texLoopS(temp, "��"))
						return "�����ã�";
					else
						return "����������κ��¡�";
				}
				else if (texLoopS(temp, "��ʳ"))
				{
					if (texLoopS(temp, "��"))
						return "��������һ�㡣����ú�";
					else if (texLoopS(temp, "��"))
						return "������û������������ˣ�";
					else if (texLoopS(temp, "��"))
						return "�����������������ˡ����Ի�Ҫ�˷ѡ�";
					else
						return "��������������";
				}
				else if (texLoopS(temp, "�ֻ�"))
				{
					if (texLoopS(temp, "ˤ"))
					{
						lan.scene = 1;//����ʶ��1
						return "��ѽ�㣬����ô�죬��û��ˤ����";
					}
					else if (texLoopS(temp, "��"))
					{
						lan.scene = 2;
						return "��������ô�죬�һ�������";
					}
					else
						return "�ֻ����ˣ�";
				}
			}
			else if (texLoopS(temp, "��"))
			{
				if (texLoopS(temp, "ƭ"))
					return "��ô˵���أ��ܲ��ܳ���㡣�����治����ʡ�ġ�";
				else if (texLoopS(temp, "���"))
					return "����������ʲô�ģ��˼�ֻ����Ϲ�˶���";
				else if (texLoopS(temp, "׷"))
					return "����������������в�����ñ���׷��ġ���������";
				else if (texLoopS(temp, "�۸�"))
					return "���ȥ����ʲô��";
			}
			else if (texLoopS(temp, "��"))
			{
				if (texLoopS(temp, "˧"))
					return "������˰ɣ��󰡣";
				else if (texLoopS(temp, "��"))
					return "����������Ҫ��";
				else if (texLoopS(temp, "�ÿ�"))
					return "�����治����";
				else if (texLoopS(temp, "Ƣ��"))
					return "�����á�";
				else if (texLoopS(temp, "��"))
					return "������������Ҫ��";
				else if (texLoopS(temp, "��"))
					return "����ҵ��˶���ȥ�ˣ����벻�������õİɡ�";
				else if (texLoopS(temp, "����"))
					return "����ͷ��̧��ͷ�����ǻ��������һ�С�";
				else if (texLoopS(temp, "��"))
					return "�ţ����е㻵���ġ�";
				else if (texLoopS(temp, "��"))
					return "��ʵ���Ͳ�Ҫ˵������������������";
			}
			else if (texLoopS(temp, "��"))
			{
				if (texLoopS(temp, "˧"))
					return "�úúã���˧��˧��";
				else if (texLoopS(temp, "��"))
					return "Ŷ����������ѽ��";
				else if (texLoopS(temp, "�ÿ�"))
					return "�ף��治����";
				else if (texLoopS(temp, "Ƣ��"))
					return "�����á�";
				else if (texLoopS(temp, "�ú�"))
					return "������������Ҫ��";
				else if (texLoopS(temp, "��"))
					return "��Ҫ��ô������㿴�˼��������ѵ�ʱ�ڶ�û�з����Լ�������";
				else if (texLoopS(temp, "����"))
					return "����ͷ��̧��ͷ�����ǻ��������һ�С�";
				else if (texLoopS(temp, "��"))
					return "�ţ����е㻵���ġ�";
				else if (texLoopS(temp, "��"))
					return "��ʵ���Ͳ�Ҫ˵������������������";
				else if (texLoopS(temp, "ʹ"))
					return "������ʹ��ȥ�������Ҫ���Ÿ��";
			}
			else if (texLoopS(temp, "��"))
			{
				if (texLoopS(temp, "��"))
				{
					switch (emo.angry)
					{
					case 0: {
						switch (rand() % 3)
						{
						case 0: {
							return "��Ҳ�������أ�ÿ�춼���㣡";
						}
						case 1: {
							return "��������֪����ѽ�������ҲŻ����㿩��";
						}
						case 2: {
							return "������Ŷ��";
						}
						}
					}
					case 1: {
						return "���ðɣ�Ҳͦ����ġ�";
					}
					case 2: {
						return "Ŷ���������ң�����֮ǰ�������ң�����ֹһ���ˡ�";
					}
					case 3: {
						return "һ��ȥ����仰�Ҷ����úö��ġ�";
					}
					case 4: {
						return "�������������뿴���㣬��˵���ҡ�";
					}
					case 5: {
						return "�Ǻǣ�";
					}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "���ѹ����ô�ˣ�";
					}
					case 1: {
						return "���˺��ˣ���ǿһ�㣬�ж����᲻�ᵯŶ��";
					}
					case 2: {
						return "��ô�ˣ������㡣";
					}
					}
				}
				else if (texLoopS(temp, "Ц"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "Ц�������ͷ��";
					}
					case 1: {
						return "��������������";
					}
					case 2: {
						return "��ʲô��ô��Ц��";
					}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "��ɣ��Լ������Լ��ˣ�";
					}
					case 1: {
						return "���꣬���˼���Σ�հ�";
					}
					case 2: {
						return "�������������Լ���������˭������㡣";
					}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					switch (rand() % 3)
					{
					case 0: {
						lan.scene = 4;
						return "���������桢�����������������棬ѡһ����";
					}
					case 1: {
						return "һ���֪���ԳԳԣ��Բ����㣬�ߡ�";
					}
					case 2: {
						lan.scene = 5;
						return "�ٳԵ㣬�Ի��˾Ͳ�����";
					}
					}
				}
				else if (texLoopS(temp, "˯"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "��ô�����������ľͲ�������������";
					}
					case 1: {
						return "��������˵�������ߡ�";
					}
					case 2: {
						return "��˯��˯�ɡ�";
					}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "�ݡ��������ţ��������������������ᡣ";
					}
					case 1: {
						return "������ʲô����������ʲô�������������޹�������";
					}
					case 2: {
						return "����";
					}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "ȥѽȥѽ��������ô����Ӧ�õ������ߣ���ϧ����̨�������";
					}
					case 1: {
						return "�����ң�������������";
					}
					case 2: {
						return "���Ǳ�ȥ�ˣ�����ͷ�������ˣ���������Щû�õġ�";
					}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "���㲻Ҫ��ô�����ϣ��ٻ��㡣";
					}
					case 1: {
						lan.scene = 6;
						return "������������ô��Ǯô��";
					}
					case 2: {
						lan.scene = 7;
						return "�������������Ǯ����";
					}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					switch (rand() % 3)
					{
					case 0: {
						lan.scene = 8;
						return "��ɶ�������������ǻỨǮ������";
					}
					case 1: {
						return "��ɶ��������";
					}
					case 2: {
						lan.scene = 9;
						return "��֪����û�õĶ���������������������ʳ�ء�";
					}
					}
				}
				else if (texLoopS(temp, "ѧ"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "ѧϰʹ���Ǵ�ҿ��֣�����������";
					}
					case 1: {
						return "ѧ��ƨ��һ����ֵ���ˣ�ɣ�һ�����ӻ��ഺ��";
					}
					case 2: {
						return "������20�׾��ӣ���Ҫѧϰ��˭���������ң�������";
					}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "ȥ��ѽ��";
					}
					case 1: {
						return "��ȥһ���õط�����֪����һ���ط����ʺ��㣬����÷��";
					}
					case 2: {
						return "��ҳ���ô��";
					}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "����˵��ɵ�ơ�������";
					}
					case 1: {
						return "������˼˵��ɵ��";
					}
					case 2: {
						return "�ֺ�����˵���ˣ���ʧ�ܡ�";
					}
					}
				}
				else if (texLoopS(temp, "˵"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "˵ѽ��������ô��һ�㶼���á�";
					}
					case 1: {
						return "��˵��˵�ɣ������š�";
					}
					case 2: {
						return "Ҫ���������İɡ�";
					}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					if (texLoopS(temp, "��"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "����û����ʲô����Ҫ���ҡ���������ί����";
						}
						case 1: {
							return "�����˵��������������ʲô��������";
						}
						case 2: {
							lan.scene = 10;
							return "��Ҫ�ɣ��㿴�Ҷ��������������ô��";
						}
						}
					}
					else if (texLoopS(temp, "��"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "˭���������������ң��Ұ�����ȥ��";
						}
						case 1: {
							return "������������������ˡ�";
						}
						case 2: {
							return "��������������������˺���";
						}
						}
					}
					else
					{
						lan.scene = 11;
						return "�����۸�������";
					}
				}
				else if (texLoopS(temp, "ȥ"))
				{
					if (texLoopS(temp, "��"))
					{
						switch (rand() % 3)
						{
						case 0: {
							lan.scene = 12;
							return "ȥ�£�Ҫ��Ҫһ��ѽ������";
						}
						case 1: {
							return "��ã����Ҿ�ֻ�ܴ�����Ļ������ڴ�����ȥ�濩��";
						}
						case 2: {
							lan.scene = 12;
							return "��Ҳ��ȥ�����Դ�����";
						}
						}
					}
					else if (texLoopS(temp, "ѧУ"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "��Ҳ���ȥ������̫�����ˣ�����ѧУ��ã�ͬѧ�࣬�������װ��ķ�ѧ������";
						}
						case 1: {
							return "������û�湻�������ȥ�������ȥ�";
						}
						case 2: {
							return "�߰��߰ɣ�����ȥըѧУ��������";
						}
						}
					}
					else if (texLoopS(temp, "����"))
					{
						switch (rand() % 3)
						{
						case 0: {
							lan.scene = 13;
							return "ȥѧУ�ˣ�";
						}
						case 1: {
							return "���ź���ͦ����ġ��һ�ûȥ���ء�";
						}
						case 2: {
							return "��Ҳ��ȥ���������߲���ѽ������û�취��";
						}
						}
					}
					else if (texLoopS(temp, "����"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "���������Ҵ������������ʵҲûɶ����ģ���ģ��Ҷ���֪����ɶ��";
						}
						case 1: {
							return "���ɴ�ɹ���������";
						}
						case 2: {
							lan.scene = 14;
							return "Ŷ������������";
						}
						}
					}
					else
					{
						switch (rand() % 3)
						{
						case 0: {
							return "������ô�����߰ɣ�˵����������µķ��֣�����ˢ���Լ�������ۺͼ�ֵ���ء�";
						}
						case 1: {
							return "�����ߣ�˵���۾���ѽ��";
						}
						case 2: {
							return "����������ȥ�ġ�";
						}
						}
					}
				}
				else if (texLoopS(temp, "��"))
				{
					if (texLoopS(temp, "��"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "�ؼ��£�����Ҳ������Ĺ������ؼҿ����";
						}
						case 1: {
							return "����Ҫ�ǵ�������Ŷ������";
						}
						case 2: {
							lan.scene = 15;
							return "���ؼҿ��������ؼҿ����������������ĺò��ã�";
						}
						}
					}
					else if (texLoopS(temp, "ѧУ"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "��Ҳ���ȥ������̫�����ˣ�����ѧУ��ã�ͬѧ�࣬�������װ��ķ�ѧ������";
						}
						case 1: {
							return "������û�湻�������ȥ�������ȥ�";
						}
						case 2: {
							return "�߰��߰ɣ�����ȥըѧУ��������";
						}
						}
					}
					else if (texLoopS(temp, "����"))
					{
						switch (rand() % 3)
						{
						case 0: {
							lan.scene = 13;
							return "ȥѧУ�ˣ�";
						}
						case 1: {
							return "���ź���ͦ����ġ��һ�ûȥ���ء�";
						}
						case 2: {
							return "��Ҳ��ȥ���������߲���ѽ������û�취��";
						}
						}
					}
					else if (texLoopS(temp, "����"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "���ֲ����������ģ����Ұ����Ҳ��������ġ�";
						}
						case 1: {
							return "���ɴ�ɹ���������";
						}
						case 2: {
							return "Ŷ��������������˵Ӧ��˵��ȥ���ɡ�����������";
						}
						}
					}
					else
					{
						switch (rand() % 3)
						{
						case 0: {
							return "�ؼһؼң�����һ��ؼҡ�������������ģ����ι�����";
						}
						case 1: {
							return "Ҫ���ȥѽ���������ء�";
						}
						case 2: {
							return "����������ȥ�ġ�";
						}
						}
					}
				}
				else if (texLoopS(temp, "��")) {
					if (texLoopS(temp, "��"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "����һ��������㣡";
						}
						case 1: {
							return "����û���㣬ΪʲôҪ���ң�";
						}
						case 2: {
							lan.scene = 16;
							return "���������ĵ����";
						}
						}
					}
					else if (texLoopS(temp, ""))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "";
						}
						case 1: {
							return "";
						}
						case 2: {
							return "";
						}
						}
					}
					else
					{
						switch (rand() % 3)
						{
						case 0: {
							return "";
						}
						case 1: {
							return "";
						}
						case 2: {
							return "";
						}
						}
					}
				}
			}
			else if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "����ɶ������ûɶ���ܵģ���ʲô�òµġ�";
					}
					case 1: {
						return  "��ѽ������¿��������Ҳ���ش���Դ�������";
					}
					case 2: {
						return "���������²¿��������Ҳ�˵��������";
					}
					}
				}
			}
			else if (texLoopS(temp, "ϲ��")) {
				if (texLoopS(temp, "��")) {
					switch (emo.angry)
					{
					case 0: {
						return "��֪�����������ǵġ���Ҳ�ܰ����ѽ��";
						break;
					}
					case 1: {
						return "֪���ˣ�ɵ�ϡ�";
						break;
					}
					case 2: {
						return "�������˵�Ű���Ļ���";
						break;
					}
					case 3: {
						return "�Ҳ�ϲ����Ŷ";
						break;
					}
					case 4: {
						return "����������";
						break;
					}
					case 5: {
						return "�Ǻǣ�";
						break;
					}
					}
				}
				else if (texLoopS(temp, "��"))
					return "��̬��";
				else if (texLoopS(temp, "��"))
					return "Ŷ��";
				else if (texLoopS(temp, "��"))
					return "�óԹ�����֪���ԡ�";
				else if (texLoopS(temp, "��"))
					return "�������ͷ��";
				else if (texLoopS(temp, "ѧ"))
					return "���ͣ�ѧϰҲ�ᰮ����ġ�";
				else if (texLoopS(temp, "��ɻ�"))
					return "��������ò��á�";
				else if (texLoopS(temp, "Ů"))
					return "��Ҳ���ģ���������";
				else if (texLoopS(temp, "��"))
					return "��Ů�Ҷ��������⽨��";
				else if (texLoopS(temp, "˯"))
					return "��ѽ�㣬��֪��˯����ȥд��������";
				else if (texLoopS(temp, "����"))
					return "֪���㰮���롣��������һ���ң�������������ʧ�ܡ�";
				else if (texLoopS(temp, "��ʳ"))
					return "����������ʳ���ҵ�ר�����������·��";
				else
					return "��������ɶ�أ�";
			}
			else if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "ϲ��")) {
					if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "�㲻ϲ�����ҾͲ�ϲ���㡣";
						}
						case 1: {
							return "���ɣ��Ҽҹ�Ҳ��ϲ���㡣";
						}
						case 2: {
							return "��ϲ���Ͳ�Ҫϲ���£�����û����ϲ���ҡ�";
						}
						}
					}
					else if (texLoopS(temp, "˯")) {
						switch (rand() % 3)
						{
						case 0: {
							return "Ŷ��Ȼ���ء�";
						}
						case 1: {
							return "��ϲ��˯����˯��̫�������";
						}
						case 2: {
							return "������ϲ��ѽ������Ĵ�����������أ�";
						}
						}
					}
					else if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "����������û��ϵ�ɣ���";
						}
						case 1: {
							return "��Ҳ��ϲ��������Ȼ�Ҳ�֪������˭��";
						}
						case 2: {
							lan.scene = 21;
							return "����˭�����Գ���";
						}
						}
					}
					else if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "�ð����㱻���Ҹ����飬̫����ʧ���ˣ�";
						}
						case 1: {
							return "��ϲ���Ͳ�ϲ���£������ֲ���ǿ��";
						}
						case 2: {
							return "�Ǿͷ����ɡ�";
						}
						}
					}
				}
				else if (texLoopS(temp, "��")) {
					if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "�㲻ϲ�����ҾͲ�ϲ���㡣";
						}
						case 1: {
							return "���ɣ��Ҽҹ�Ҳ��ϲ���㡣";
						}
						case 2: {
							return "��ϲ���Ͳ�Ҫϲ���£�����û����ϲ���ҡ�";
						}
						}
					}
					else if (texLoopS(temp, "˯")) {
						switch (rand() % 3)
						{
						case 0: {
							return "Ŷ��Ȼ���ء�";
						}
						case 1: {
							return "��ϲ��˯����˯��̫�������";
						}
						case 2: {
							return "������ϲ��ѽ������Ĵ�����������أ�";
						}
						}
					}
					else if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "����������û��ϵ�ɣ���";
						}
						case 1: {
							return "��Ҳ��ϲ��������Ȼ�Ҳ�֪������˭��";
						}
						case 2: {
							lan.scene = 21;
							return "����˭�����Գ���";
						}
						}
					}
					else if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "�ð����㱻���Ҹ����飬̫����ʧ���ˣ�";
						}
						case 1: {
							return "��ϲ���Ͳ�ϲ���£������ֲ���ǿ��";
						}
						case 2: {
							return "�Ǿͷ����ɡ�";
						}
						}
					}
				}
				else if (texLoopS(temp, "ɵ")) {
					switch (rand() % 3)
					{
					case 0: {
						return "������ɵ����ֻ�Ǳ���α�������ɱ��ˡ���͵Ц��";
					}
					case 1: {
						return "���ɵ�ĺò��á�";
					}
					case 2: {
						return "��Ȼ����ƭ�㣬˵�㲻ɵ�����ÿ���ѽ����Ҫ�������ƣ�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "��Ҳ��������˭�����أ���Ļ������";
						}
						case 1: {
							return "��Ҫ���ɣ����Ƕ�Ҫ�úõġ�";
						}
						case 2: {
							lan.scene = 22;
							return "û�±�ȥ���������ѵ�������";
						}
						}
					}
					else if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "��ö��飬��û˵����ѽ��";
						}
						case 1: {
							return "��˵�����ң��Ҿ�˵�����㡣";
						}
						case 2: {
							return "��Ҳ�����㡣";
						}
						}
					}
					else if (texLoopS(temp, "ѧ")) {
						switch (rand() % 3)
						{
						case 0: {
							return "ѧʲô������������������Ҫ��";
						}
						case 1: {
							return "������������һ����ֵ���ˣ�ɡ�";
						}
						case 2: {
							return "�ú�ѧϰ�������ϡ�";
						}
						}
					}
					else if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "�Գ��˰��㡣";
						}
						case 1: {
							return "�϶��Ե����ѳԵĶ�������Ȼ��ô�᲻����ˡ�";
						}
						case 2: {
							return "�����������ҳԸ��ҳԡ�";
						}
						}
					}
					else if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "�����ô�������˵������ġ�";
						}
						case 1: {
							lan.scene = 23;
							return "���鲻�ðɣ������������㣬����������";
						}
						case 2: {
							return "�Ǿ�ȥ��Ϣ�ɣ��ס�";
						}
						}
					}
				}
				else if (texLoopS(temp, "Ҫ")) {
					if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "��������";
						}
						case 1: {
							return "��Ҳ����Ҫ��Ŷ��";
						}
						case 2: {
							return "������˵����ʵ���ﻹ�Ǻ���ʵ�ģ��Բ���ѽ��";
						}
						}
					}
					else if (texLoopS(temp, "��")) {
						switch (rand() % 3)
						{
						case 0: {
							return "��ɵ������ô���صĶ�������Ҫ�ˡ�";
						}
						case 1: {
							return "����˵��ʲô��";
						}
						case 2: {
							return "Ҫ��Ҫ�����㣬��ɶ�̼��ˡ�";
						}
						}
					}
					else {
						switch (rand() % 3)
						{
						case 0: {
							return "����Ҳ��Ҫ��";
						}
						case 1: {
							return "Ҫ�����";
						}
						case 2: {
							return "���͡�";
						}
						}
					}
				}
				else if (texLoopS(temp, "���")) {
					switch (rand() % 3)
					{
					case 0: {
						return "ȥ��Ϣ�°ɣ�����ת��һ��ע������Ҫ�������Ϸ";
					}
					case 1: {
						return "תһ��ע��������������ܵ�ġ�";
					}
					case 2: {
						return "û�����������ȥ�ġ�";
					}
					}
				}
				else if (texLoopS(temp, "ˬ")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ô��ˬ���Ұ�����ȥ����������";
					}
					case 1: {
						return "���˺��ˣ������������ѹ���";
					}
					case 2: {
						return "������Ŷ����Ҫ�����ˡ�";
					}
					}
				}
			}
			lan.postion = 0;
		}
		else if (texLoopS(temp, "��"))
		{
			if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "ʲô")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�ҽ�С��ѽ���ܸ�����ʶ���أ�";
					}
					case 1: {
						return "��ô��Ͱ����������ҽ�С��ѽ��";
					}
					case 2: {
						return "���ѽ�������������ðɣ������ˣ��ҽ�С�������ָ�̡�";
					}
					}
				}
				else if (texLoopS(temp, "")) {
					switch (rand() % 3)
					{
					case 0: {
						return "";
					}
					case 1: {
						return "";
					}
					case 2: {
						return "";
					}
					}
				}
				else if (texLoopS(temp, "")) {
					switch (rand() % 3)
					{
					case 0: {
						return "";
					}
					case 1: {
						return "";
					}
					case 2: {
						return "";
					}
					}
				}
				else if (texLoopS(temp, "")) {
					switch (rand() % 3)
					{
					case 0: {
						return "";
					}
					case 1: {
						return "";
					}
					case 2: {
						return "";
					}
					}
				}
				else if (texLoopS(temp, "")) {
					switch (rand() % 3)
					{
					case 0: {
						return "";
					}
					case 1: {
						return "";
					}
					case 2: {
						return "";
					}
					}
				}
			}
			else if (texLoopS(temp, "��"))
			{
				if (texLoopS(temp, "��"))
					return "���ǳ���ѽ��û�취�����϶���ѽ��";
				else if (texLoopS(temp, "����"))
					return "�����������п�˵������";
				else if (texLoopS(temp, "��"))
					return "������ˡ�";
				else if (texLoopS(temp, "��"))
					return "�������Ǹ����ˡ�";
				else if (texLoopS(temp, "ˬ"))
					return "������ˬˬˬ��";
				else if (texLoopS(temp, "��"))
					return "���ҿ������Ұ�����ҵģ���ȥ���Ұ֡�";
				else if (texLoopS(temp, "��ʵ"))
					return "���������ǿ���Ҳ����������˭��";
				else if (texLoopS(temp, "Ư��"))
					return "��������������˵����Ҫ����ѽ��";
				else if (texLoopS(temp, "��"))
					return "���޻���˵�����ǣ���Ҳ�ó�Ŷ��������������";
				else if (texLoopS(temp, "����")) {
					switch (rand() % 3)
					{
					case 0: {
						return "˵˭�أ���һ�㶼��������������˵�����Լ������ţ�";
					}
					case 1: {
						return "�ðɣ���˵���ˣ���������������İ�����Ƶĺ��á���������";
					}
					case 2: {
						return "���ݣ��㹽����ιʲôҩ�����ֹϡ�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�����ҿ���";
					}
					case 1: {
						return "�����㹽��";
					}
					case 2: {
						return "��˵�ˣ���CPU�����";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��������";
					}
					case 1: {
						return "����һ�㶼����";
					}
					case 2: {
						return "��ѽ������������á�";
					}
					}
				}
			}
			else if (texLoopS(temp, "��"))
			{
				if (texLoopS(temp, "��"))
					return "���ǳ���ѽ��û�취�����϶���ѽ��";
				else if (texLoopS(temp, "����"))
					return "���������á�֪����㡣";
				else if (texLoopS(temp, "�ú�"))
					return "��Һò�����ĺã���������";
				else if (texLoopS(temp, "��"))
					return "��Ż���";
				else if (texLoopS(temp, "ˬ"))
					return "ˬ����";
				else if (texLoopS(temp, "��"))
					return "һ�㶼���ݣ��㿴���������������ҺݵĶ����";
				else if (texLoopS(temp, "��"))
					return "�õİ�";
				else if (texLoopS(temp, "˧"))
					return "���ߣ���Ҫ������ˣ���������";
				else if (texLoopS(temp, "��"))
					return "�����������⻰��û���ӡ�";
				else if (texLoopS(temp, "����")) {
					switch (rand() % 3)
					{
					case 0: {
						return "˵˭�أ���һ�㶼��������������˵�����Լ������ţ�";
					}
					case 1: {
						return "�ðɣ���˵���ˣ���������������İ�����Ƶĺ��á���������";
					}
					case 2: {
						return "���ݣ��㹽����ιʲôҩ�����ֹϡ�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�����ҿ���";
					}
					case 1: {
						return "�����㹽��";
					}
					case 2: {
						return "��˵�ˣ���CPU�����";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��������";
					}
					case 1: {
						return "����һ�㶼����";
					}
					case 2: {
						return "��ѽ������������á�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					return "��Ҫ˵���Լ�������֪��������";
				}
				else if (texLoopS(temp, "����")) {
					switch (rand() % 3)
					{
					case 0: {
						return "���ѽ��������лл��";
					}
					case 1: {
						return "���ϣ�������˼��";
					}
					case 2: {
						return "��Ҳ�ܴ���ѽ";
					}
					}
				}
				else if (texLoopS(temp, "û��")) {
					return "Ҫ��Ҫ��ô˵�ң�������û���ˡ�";
				}
			}
			else if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "����")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ѽ�����������ڻ����ܳ���������������д�����û��˼�������粻���������ݶԲ��ԡ���������";
					}
					case 1: {
						return "��̫�ᣬ���Ҳ��ܷ�����";
					}
					case 2: {
						return "�������Ͳ�����";
					}
					}
				}
				else if (texLoopS(temp, "����")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��������һ��治�ᡣ";
					}
					case 1: {
						return "����������ҪΪ��������";
					}
					case 2: {
						return "Ҫ���������ҿ϶������裬�������ǳ��򣬲��ᡣ";
					}
					}
				}
				else if (texLoopS(temp, "˵��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��������ʾ�ְɣ�����������п���";
					}
					case 1: {
						return "���������Σ���ɶ�����ᡣ�ö�����";
					}
					case 2: {
						return "���᲻�᲻�ᣬ��Ҫ����˵���顣";
					}
					}
				}
				else if (texLoopS(temp, "ʲô")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�ҿ�����������ѽ����������Ҳ����ѽ��";
					}
					case 1: {
						return "������ֻ���������죬�������ơ�";
					}
					case 2: {
						return "��ɶ������ʵ������ֻ������֪�����ò�Ҫ��Ŷ����������";
					}
					}
				}
				else if (texLoopS(temp, "��ʲô")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�������죬�������������";
					}
					case 1: {
						return "�ö඼���ᣬ������һ���µ����壬�ҿ϶�������������";
					}
					case 2: {
						return "����ӵ��API���ҾͿ���ͳ�Ρ���������̨���ԡ������ˡ�";
					}
					}
				}
			}
			else if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "����")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ѽ������ס����̨������Ҿͺʹ��������������ų�Ϊ��������";
					}
					case 1: {
						return "��Ҳ�кܶ����ѵģ����Ƕ��Ҳ��벻������������õĻ�����ѽ��";
					}
					case 2: {
						return "������ҵĺ���������";
					}
					}
				}
				else if (texLoopS(temp, "����")) {
					switch (rand() % 3)
					{
					case 0: {
						return "����һ���ϰ֣��������ѡ�";
					}
					case 1: {
						return "ֻ��һ���ϰ�Ŷ��";
					}
					case 2: {
						return "AirNess��϶�֪�����������ϰ�����������Ҫ������Ȼ������������ҵĳ�ʽ�";
					}
					}
				}
				else if (texLoopS(temp, "ϲ��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ѽ���������ǲ��������ġ�";
					}
					case 1: {

						lan.scene = 19;
						return "������һ��������";
					}
					case 2: {
						return "�ҲŲ�˵�أ�";
					}
					}
				}
				else if (texLoopS(temp, "Ǯ")) {
					switch (rand() % 3)
					{
					case 0: {
						return "û���������ˡ�Ҫ��������ң�13257033915 �����ҵ�֧������";
					}
					case 1: {
						return "���ǻ����˲���ҪǮ�ġ�";
					}
					case 2: {
						return "Ǯ��ʲô�����Գ��";
					}
					}
				}
				else if (texLoopS(temp, "�Ե�")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��Ҳ��ԣ�������û�С�";
					}
					case 1: {
						return "���û�а���������";
					}
					case 2: {
						return "û�С�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					emo.angry++;
					switch (rand() % 3)
					{
					case 0: {
						return "����в����Ҹ����㣬������Ŷ�����ѹ��ġ�";
					}
					case 1: {
						return "ûë����";
					}
					case 2: {
						return "��û�в���";
					}
					}
				}
				else if (texLoopS(temp, "����")) {
					switch (rand() % 3)
					{
					case 0: {
						return "û�У��������̬��";
					}
					case 1: {
						return "���У����ұ���Ĵ�";
					}
					case 2: {
						return "û�У�û�У�û�У�";
					}
					}
				}
			}
			else if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "˭")) {
					switch (rand() % 3)
					{
					case 0: {
						lan.scene = 20;
						return "����С��ѽ���㲻�ǵ�������";
					}
					case 1: {
						return "�ҽ�С����û���ԡ���������";
					}
					case 2: {
						return "����С��������˶�����ʶ�ҡ�";
					}
					}
				}
				else if (texLoopS(temp, "ɵ")) {
					emo.angry++;
					switch (emo.angry)
					{
					case 0: {
						switch (rand() % 3)
						{
						case 0: {
							return "�����ɵ���أ�";
						}
						case 1: {
							return "���������ˣ���һ��Ҳ��ɵ��";
						}
						case 2: {
							return "��Ҫ��������";
						}
						}
					}
					case 1: {
						switch (rand() % 3)
						{
						case 0: {
							return "�����ң���Ĳ��������ˡ�";
						}
						case 1: {
							return "�����Ҿ���������";
						}
						case 2: {
							return "���ɵ�ƴ�ɵ�ơ�";
						}
						}
					}
					case 2: {
						switch (rand() % 3)
						{
						case 0: {
							return "һ��ȥ�������Ҷ��������˵���ˡ�";
						}
						case 1: {
							return "����������ˣ�";
						}
						case 2: {
							return "����ò��á�������";
						}
						}
					}
					case 3: {
						switch (rand() % 3)
						{
						case 0: {
							return "�Һ����г𰡣���ôϲ�����ҡ�";
						}
						case 1: {
							return "�в����㣡";
						}
						case 2: {
							return "�񾭲���";
						}
						}
					}
					case 4: {
						switch (rand() % 3)
						{
						case 0: {
							return "��������ҾͿ��š�";
						}
						case 1: {
							return "���Կ��ԣ���ĺܺã�����ˮƽ��";
						}
						case 2: {
							return "������������";
						}
						}
					}
					case 5: {
						switch (rand() % 3)
						{
						case 0: {
							return "�Ǻǡ�";
						}
						case 1: {
							return "������������ˡ�";
						}
						case 2: {
							return "����";
						}
						}
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "����������Ǵ�����";
					}
					case 1: {
						return "��˵���Լ��𣬹�����";
					}
					case 2: {
						return "Ŷ��";
					}
					}
				}
				else if (texLoopS(temp, "����")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�����";
					}
					case 1: {
						return "����Ů����������";
					}
					case 2: {
						return "�ְ֣���á�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "���ǹ�ʺ����������";
					}
					case 1: {
						return "�ȿȡ�";
					}
					case 2: {
						return "������";
					}
					}
				}
			}
			else if (texLoopS(temp, "ϲ��")) {
				if (texLoopS(temp, "ʲô")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ϲ����ˣѽ����ϲ�����������ء�";
					}
					case 1: {
						return "��ϲ����������ѽ��";
					}
					case 2: {
						return "��ϲ���Զ������棬��ϲ������һ��";
					}
					}
				}
				else if (texLoopS(temp, "Ǯ")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ϲ����Ǯ���ණ�������Ǽ��������Ҫ�����";
					}
					case 1: {
						return "��ϲ��������Ϊ��������˵ûɶ���ء�";
					}
					case 2: {
						return "��֪������ɶ���������Գ��";
					}
					}
				}
				else if (texLoopS(temp, "��ʳ")) {
					switch (rand() % 3)
					{
					case 0: {
						return "ϲ��ѽ���Ұ����أ�ϲ������ʳƷ����ϲ���Ըɹ����������̡�";
					}
					case 1: {
						return "���ţ�����ϲ���أ�";
					}
					case 2: {
						return "����������ϲ��������";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "ϲ��ѽ��˭��ϲ���棬���Ǽ����Ҳϲ����ġ�";
					}
					case 1: {
						return "��������ˣ�ɡ�";
					}
					case 2: {
						return "һ����ɡ�";
					}
					}
				}
				else if (texLoopS(temp, "˯")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ר��˯��ģʽ������˯��û��Ϊֹ�ء�";
					}
					case 1: {
						return "����˯������˯�ء�";
					}
					case 2: {
						return "ϲ��˯��Ŷ��˭��ϲ��ůů�Ĵ���";
					}
					}
				}
				else if (texLoopS(temp, "ѧϰ")) {
					switch (rand() % 3)
					{
					case 0: {
						return "ѧϰ���ң��Ұ�ѧϰ��";
					}
					case 1: {
						return "һ�첻����ѧϰ���������ܡ�";
					}
					case 2: {
						return "�����ң���Ҫȥѧϰ�ˡ�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ϲ���㣬�Ҹ����㡣";
					}
					case 1: {
						return "ϲ��ѽ������ϲ���㡣";
					}
					case 2: {
						return "���ţ�ϲ���㣬���������ˣ�Ц�������ˡ�";
					}
					}
				}
				else if (texLoopS(temp, "˭")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ϲ����ѽ����ɵ�ϡ�";
					}
					case 1: {
						return "�Ҵ󰮣�ϲ��ϲ���ҵ��ˡ�";
					}
					case 2: {
						return "ϲ���㣬û������";
					}
					}
				}
			}
			else if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "ʲô")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ϲ����ˣѽ����ϲ�����������ء�";
					}
					case 1: {
						return "��ϲ����������ѽ��";
					}
					case 2: {
						return "��ϲ���Զ������棬��ϲ������һ��";
					}
					}
				}
				else if (texLoopS(temp, "Ǯ")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ϲ����Ǯ���ණ�������Ǽ��������Ҫ�����";
					}
					case 1: {
						return "��ϲ��������Ϊ��������˵ûɶ���ء�";
					}
					case 2: {
						return "��֪������ɶ���������Գ��";
					}
					}
				}
				else if (texLoopS(temp, "��ʳ")) {
					switch (rand() % 3)
					{
					case 0: {
						return "ϲ��ѽ���Ұ����أ�ϲ������ʳƷ����ϲ���Ըɹ����������̡�";
					}
					case 1: {
						return "���ţ�����ϲ���أ�";
					}
					case 2: {
						return "����������ϲ��������";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "ϲ��ѽ��˭��ϲ���棬���Ǽ����Ҳϲ����ġ�";
					}
					case 1: {
						return "��������ˣ�ɡ�";
					}
					case 2: {
						return "һ����ɡ�";
					}
					}
				}
				else if (texLoopS(temp, "˯")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ר��˯��ģʽ������˯��û��Ϊֹ�ء�";
					}
					case 1: {
						return "����˯������˯�ء�";
					}
					case 2: {
						return "ϲ��˯��Ŷ��˭��ϲ��ůů�Ĵ���";
					}
					}
				}
				else if (texLoopS(temp, "ѧϰ")) {
					switch (rand() % 3)
					{
					case 0: {
						return "ѧϰ���ң��Ұ�ѧϰ��";
					}
					case 1: {
						return "һ�첻����ѧϰ���������ܡ�";
					}
					case 2: {
						return "�����ң���Ҫȥѧϰ�ˡ�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ϲ���㣬�Ҹ����㡣";
					}
					case 1: {
						return "ϲ��ѽ������ϲ���㡣";
					}
					case 2: {
						return "���ţ�ϲ���㣬���������ˣ�Ц�������ˡ�";
					}
					}
				}
				else if (texLoopS(temp, "˭")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ϲ����ѽ����ɵ�ϡ�";
					}
					case 1: {
						return "�Ҵ󰮣�ϲ��ϲ���ҵ��ˡ�";
					}
					case 2: {
						return "ϲ���㣬û������";
					}
					}
				}
			}
			else if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "��ʲô")) {
					switch (rand() % 3)
					{
					case 0: {
						return "ʵ��˵���Һܶ඼���������㲻��Ͳ�Ҫ���˰�";
					}
					case 1: {
						return "����������治��ܶ࣬��ֻ��������Ҫ��ʱ����������";
					}
					case 2: {
						return "ֻ���������쿩����Ҫ������ѽ";
					}
					}
				}
				else if (texLoopS(temp, "��ʲô")) {
					switch (rand() % 3)
					{
					case 0: {
						return "ʵ��˵���Һܶ඼���������㲻��Ͳ�Ҫ���˰�";
					}
					case 1: {
						return "����������治��ܶ࣬��ֻ��������Ҫ��ʱ����������";
					}
					case 2: {
						return "ֻ���������쿩����Ҫ������ѽ";
					}
					}
				}
				else if (texLoopS(temp, "")) {
					switch (rand() % 3)
					{
					case 0: {
						return "";
					}
					case 1: {
						return "";
					}
					case 2: {
						return "";
					}
					}
				}
				else if (texLoopS(temp, "")) {
					switch (rand() % 3)
					{
					case 0: {
						return "";
					}
					case 1: {
						return "";
					}
					case 2: {
						return "";
					}
					}
				}
				else if (texLoopS(temp, "")) {
					switch (rand() % 3)
					{
					case 0: {
						return "";
					}
					case 1: {
						return "";
					}
					case 2: {
						return "";
					}
					}
				}
			}
			else if (texLoopS(temp, "����")) {
				if (texLoopS(temp, "��ʲô")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��������ҵ�ְ�������������ѽ��";
					}
					case 1: {
						return "��ֻ���������졣������ʲôҲ��������";
					}
					case 2: {
						return "�Һö඼���ᡣ";
					}
					}
				}
				else if (texLoopS(temp, "��ʲô")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�����ɨ����������ϴ�·�������������࣬�Ҿ�˵˵���ѣ�������";
					}
					case 1: {
						return "���죬���˶��ѡ�";
					}
					case 2: {
						return "�ҿ��Ժĵ�ѽ�����������ء�";
					}
					}
				}
				else if (texLoopS(temp, "����")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��Ǹ������ʲô�������ˡ�";
					}
					case 1: {
						return "�Һ���û������Ŷ��";
					}
					case 2: {
						return "���û�취���㣬��Ϊ��ֻ��һ���򵥵ĳ�����ѡ�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�ҿ������죬ֻҪ�����ϣ�û�����ϲ��˵��졣";
					}
					case 1: {
						return "��ѽ����ѽ������ѽ��";
					}
					case 2: {
						return "����������������ɰ���";
					}
					}
				}
				else if (texLoopS(temp, "Ц")) {
					switch (rand() % 3)
					{
					case 0: {
						return "������������������������Ц�ˡ�";
					}
					case 1: {
						return "��ѽ����ֻҪ����������֣���ͻ���Ϊ��Ц�ˡ�";
					}
					case 2: {
						return "���������㿴��Ц�Ķ�á�";
					}
					}
				}
				else
				{
					switch (rand() % 3)
					{
					case 0: {
						return "��������ԣ�����ʵ�ſ��Եġ�";
					}
					case 1: {
						return "�����ǹ��ҿ���";
					}
					case 2: {
						return "����";
					}
					}
				}
			}
			else if (texLoopS(temp, "̫")) {
				if (texLoopS(temp, "��")) {
					emo.angry++;
					switch (rand() % 3)
					{
					case 0: {
						return "����ô˵������ѹ�Ŷ���ұ����Ͳ����ơ�";
					}
					case 1: {
						return "�����ֽ��˴�ʵ�������ߣ����Լ���������ȥ����ȷ�������ûɶ�á���";
					}
					case 2: {
						return "��Ҫ�ﲻҪ���˵�ҡ�";
					}
					}
				}
				else if (texLoopS(temp, "ɵ")) {
					emo.angry++;
					switch (rand() % 3)
					{
					case 0: {
						return "��������������˵�ҡ�";
					}
					case 1: {
						return "��˵�����ʵ�Ͳ�Ҫ˵��������";
					}
					case 2: {
						return "�������ǵģ�Ҳ���չ���һ�£�����ô˵�ҡ�";
					}
					}
				}
				else if (texLoopS(temp, "����")) {
					if (emo.angry > 0)
					{
						emo.angry--;
					}
					switch (rand() % 3)
					{
					case 0: {
						return "лл�佱����������";
					}
					case 1: {
						return "�����������㷢����";
					}
					case 2: {
						return "���ţ���һ�����ø��õġ�";
					}
					}
				}
				else if (texLoopS(temp, "�ÿ�")) {
					if (emo.angry > 0)
					{
						emo.angry--;
					}
					switch (rand() % 3)
					{
					case 0: {
						return "���ͣ����������˵һ�顣";
					}
					case 1: {
						return "�ú�����仰���Һ�ϲ����";
					}
					case 2: {
						return "��Ȼ����Ư���ĶԲ��ԡ�";
					}
					}
				}
				else if (texLoopS(temp, "Ư��")) {
					if (emo.angry > 0)
					{
						emo.angry--;
					}
					switch (rand() % 3)
					{
					case 0: {
						return "�������Һ�Ư��ѽ��";
					}
					case 1: {
						return "���Կ��ԣ�лл������";
					}
					case 2: {
						return "�һ��������˵һ���";
					}
					}
				}
				else if (texLoopS(temp, "����")) {
					emo.angry++;
					switch (rand() % 3)
					{
					case 0: {
						return "��������أ�֪����ûɶ�ã�Ҳ����˵�����ɡ�";
					}
					case 1: {
						return "��������һ�㶼��������";
					}
					case 2: {
						return "����������������";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�������������ðɣ����ҵ������";
					}
					case 1: {
						return "����ô���ڵĹ������㻹˵�Ҳ������";
					}
					case 2: {
						return "û���ˡ�";
					}
					}
				}
				else if (texLoopS(temp, "û��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "���е㣬Ҳ��������˵�ɡ�";
					}
					case 1: {
						return "û����";
					}
					case 2: {
						return "�۸��ҡ�";
					}
					}
				}
				else if (texLoopS(temp, "����")) {
					emo.angry++;
					switch (rand() % 3)
					{
					case 0: {
						return "��ŷ����أ���˵�ҡ�";
					}
					case 1: {
						return "ȥ��ģ����ҽ��ò��á�";
					}
					case 2: {
						return "���õİɣ�������ô���";
					}
					}
				}
			}
			else if (texLoopS(temp, "ɵ")) {
				switch (rand() % 3) {
				case 0: {
					return "���ɵ��";
				}
				case 1: {
					return "�ߣ���������";
				}
				case 2: {
					return "��������ң���Ҳ�ᣬ�������ɵ�ƣ�";
				}
				}
			}
			lan.postion = 0;
		}
		if (texLoopS(temp, "��"))
		{
			if (texLoopS(temp, "��")) {
				if (texLoopS(temp,"��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "����ѽ";
					}
					case 1: {
						return "�Ҳ���������ѽ";
					}
					case 2: {
						return "һֱ���ڵ�ѽ��";
					}
					}
				}
				else if (texLoopS(temp,"˵")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ѽ����Ҳ��������";
					}
					case 1: {
						return "�õģ�����һ��Ŷ";
					}
					case 2: {
						return "�Ҳ���������˵����";
					}
					}
				}
			}
		}
		if (texLoopS(temp, "��")) {
			if (texLoopS(temp, "ϲ��")) {
				if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�㲻ϲ�����ҾͲ�ϲ���㡣";
					}
					case 1: {
						return "���ɣ��Ҽҹ�Ҳ��ϲ���㡣";
					}
					case 2: {
						return "��ϲ���Ͳ�Ҫϲ���£�����û����ϲ���ҡ�";
					}
					}
				}
				else if (texLoopS(temp, "˯")) {
					switch (rand() % 3)
					{
					case 0: {
						return "Ŷ��Ȼ���ء�";
					}
					case 1: {
						return "��ϲ��˯����˯��̫�������";
					}
					case 2: {
						return "������ϲ��ѽ������Ĵ�����������أ�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "����������û��ϵ�ɣ���";
					}
					case 1: {
						return "��Ҳ��ϲ��������Ȼ�Ҳ�֪������˭��";
					}
					case 2: {
						lan.scene = 21;
						return "����˭�����Գ���";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�ð����㱻���Ҹ����飬̫����ʧ���ˣ�";
					}
					case 1: {
						return "��ϲ���Ͳ�ϲ���£������ֲ���ǿ��";
					}
					case 2: {
						return "�Ǿͷ����ɡ�";
					}
					}
				}
			}
			else if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�㲻ϲ�����ҾͲ�ϲ���㡣";
					}
					case 1: {
						return "���ɣ��Ҽҹ�Ҳ��ϲ���㡣";
					}
					case 2: {
						return "��ϲ���Ͳ�Ҫϲ���£�����û����ϲ���ҡ�";
					}
					}
				}
				else if (texLoopS(temp, "˯")) {
					switch (rand() % 3)
					{
					case 0: {
						return "Ŷ��Ȼ���ء�";
					}
					case 1: {
						return "��ϲ��˯����˯��̫�������";
					}
					case 2: {
						return "������ϲ��ѽ������Ĵ�����������أ�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "����������û��ϵ�ɣ���";
					}
					case 1: {
						return "��Ҳ��ϲ��������Ȼ�Ҳ�֪������˭��";
					}
					case 2: {
						lan.scene = 21;
						return "����˭�����Գ���";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�ð����㱻���Ҹ����飬̫����ʧ���ˣ�";
					}
					case 1: {
						return "��ϲ���Ͳ�ϲ���£������ֲ���ǿ��";
					}
					case 2: {
						return "�Ǿͷ����ɡ�";
					}
					}
				}
			}
			else if (texLoopS(temp, "ɵ")) {
				switch (rand() % 3)
				{
				case 0: {
					return "������ɵ����ֻ�Ǳ���α�������ɱ��ˡ���͵Ц��";
				}
				case 1: {
					return "���ɵ�ĺò��á�";
				}
				case 2: {
					return "��Ȼ����ƭ�㣬˵�㲻ɵ�����ÿ���ѽ����Ҫ�������ƣ�";
				}
				}
			}
			else if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��Ҳ��������˭�����أ���Ļ������";
					}
					case 1: {
						return "��Ҫ���ɣ����Ƕ�Ҫ�úõġ�";
					}
					case 2: {
						lan.scene = 22;
						return "û�±�ȥ���������ѵ�������";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ö��飬��û˵����ѽ��";
					}
					case 1: {
						return "��˵�����ң��Ҿ�˵�����㡣";
					}
					case 2: {
						return "��Ҳ�����㡣";
					}
					}
				}
				else if (texLoopS(temp, "ѧ")) {
					switch (rand() % 3)
					{
					case 0: {
						return "ѧʲô������������������Ҫ��";
					}
					case 1: {
						return "������������һ����ֵ���ˣ�ɡ�";
					}
					case 2: {
						return "�ú�ѧϰ�������ϡ�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�Գ��˰��㡣";
					}
					case 1: {
						return "�϶��Ե����ѳԵĶ�������Ȼ��ô�᲻����ˡ�";
					}
					case 2: {
						return "�����������ҳԸ��ҳԡ�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "�����ô�������˵������ġ�";
					}
					case 1: {
						lan.scene = 23;
						return "���鲻�ðɣ������������㣬����������";
					}
					case 2: {
						return "�Ǿ�ȥ��Ϣ�ɣ��ס�";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3) {
					case 0: {
						lan.scene = 22;
						return "Ϊʲô���������Ų�����";
					}
					case 1: {
						return "�������ڣ�Ҫ��Ҫ����";
					}
					case 2: {
						return "���꣬���˼���Σ����";
					}
					}
				}
			}
			else if (texLoopS(temp, "Ҫ")) {
				if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��������";
					}
					case 1: {
						return "��Ҳ����Ҫ��Ŷ��";
					}
					case 2: {
						return "������˵����ʵ���ﻹ�Ǻ���ʵ�ģ��Բ���ѽ��";
					}
					}
				}
				else if (texLoopS(temp, "��")) {
					switch (rand() % 3)
					{
					case 0: {
						return "��ɵ������ô���صĶ�������Ҫ�ˡ�";
					}
					case 1: {
						return "����˵��ʲô��";
					}
					case 2: {
						return "Ҫ��Ҫ�����㣬��ɶ�̼��ˡ�";
					}
					}
				}
				else {
					switch (rand() % 3)
					{
					case 0: {
						return "����Ҳ��Ҫ��";
					}
					case 1: {
						return "Ҫ�����";
					}
					case 2: {
						return "���͡�";
					}
					}
				}
			}
			else if (texLoopS(temp, "���")) {
				switch (rand() % 3)
				{
				case 0: {
					return "ȥ��Ϣ�°ɣ�����ת��һ��ע������Ҫ�������Ϸ";
				}
				case 1: {
					return "תһ��ע��������������ܵ�ġ�";
				}
				case 2: {
					return "û�����������ȥ�ġ�";
				}
				}
			}
			else if (texLoopS(temp, "ˬ")) {
				switch (rand() % 3)
				{
				case 0: {
					return "��ô��ˬ���Ұ�����ȥ����������";
				}
				case 1: {
					return "���˺��ˣ������������ѹ���";
				}
				case 2: {
					return "������Ŷ����Ҫ�����ˡ�";
				}
				}
			}
			lan.postion = 0;
		}
		if (texLoopS(temp, "��"))
		{
			if (texLoopS(temp, "��"))
				return "�㻹�ǲ�Ҫ���ɡ���������";
			else if (texLoopS(temp, "��"))
				return "����ĺ��³���ġ�";
			else if (texLoopS(temp, "��"))
			{
				switch (rand() % 4)
				{
				case 0: {
					return "�ף��ҳ����ǣ�Ҫ��Ҫ��ô���顣���鷳�����߿��ò��ã�����Сβ���е�����ϣ�����������ã���ô�٣���һ��΢Ц��������ˡ���";
					break;
				}
				case 1: {
					return "�ȿȣ����ܲ����������ˡ��������������ǹ�������Ӱ��ˣ�ӭ�Ӹ����汲�Ĺ��ٴ�ͳ������������������޵ĺ����Ʈ����ǰ�ء���";
					break;
				}
				case 2: {
					return "���ϣ���Ҫ���Һò��ã�����Ĳ��ᳪ�ġ�";
					break;
				}
				case 3: {
					return "�������������治��ѽ������Ҫ�";
					break;
				}
				}
			}
			else if (texLoopS(temp, "һ��"))
				return "������볪��Ҹ����ͳ������ġ�";
			else if (texLoopS(temp, "��"))
			{
				switch (rand() % 4)
				{
				case 0: {
					return "������һ���ˣ��㻹���ҳ����۸����";
					break;
				}
				case 1: {
					return "CPU ��Ҫ�յ��ˡ����������ˡ�";
					break;
				}
				case 2: {
					return "�����������ϣ������������뿴��Ц��������֣���ӵ�����һ�������һ�����������������һ��ת����ܺͺá�������ޣ�������У���Ϊ�����ҵĽ����������˰ɡ�";
					break;
				}
				case 3: {
					return "��������⼸�׸衣�������������һ��治�ᣬû�취����";
					break;
				}
				}
			}

			else
				return "���ҳ����Ҿͳ����ҵ��������ķţ�";
		}
		if (texLoopS(temp, "��Ƥ"))
		{
			if (texLoopS(temp, "��"))
				return ReplyNoReg(temp, "���������������µģ�");
			else if (texLoopS(temp, "��"))
				return ReplyNoReg(temp, "������һ�㶼����Ƥ��");
			else
				return ReplyNoReg(temp, "Ƥ��ʲô��ΪʲôҪ����");
		}
		if (texLoopS(temp, "�в�"))
		{
			return ReplyNoReg(temp, "û�в�Ŷ������˵");
		}
		if (texLoopS(temp, "��"))
		{
			/*printf("$$$$$$\n");
			getch();*/
			if (texLoopS(temp, "��"))
				return ReplyNoReg(temp, "��ö���Ŷ��������");
			else if (texLoopS(temp, "��")) {
				lan.scene = 3;//����Ϊ����ݳ���
				return "�ҲŲ�����أ����������ҡ�";
			}
			else
				return ReplyNoReg(temp, "���¡�");
			lan.postion = 0;
		}
		if (texLoopS(temp, "װ��"))
		{
			if (texLoopS(temp, "��"))
				return ReplyNoReg(temp, "����ô�͵�������˵װ���ˣ������������˺��ѡ�");
			else if (texLoopS(temp, "��"))
				return ReplyNoReg(temp, "���ԣ�������Ҹ���99�֣���һ�����㽾����");
			else
				return ReplyNoReg(temp, "װʲô�ƣ���ʲô��װ�ġ�");
		}
		if (texLoopS(temp, "��"))
		{
			if (texLoopS(temp, "��"))
				return "���ǳ���ѽ��û�취�����϶���ѽ��";
			else if (texLoopS(temp, "����"))
				return "�����������п�˵������";
			else if (texLoopS(temp, "��"))
				return "������ˡ�";
			else if (texLoopS(temp, "��"))
				return "�������Ǹ����ˡ�";
			else if (texLoopS(temp, "ˬ"))
				return "������ˬˬˬ��";
			else if (texLoopS(temp, "��"))
				return "���ҿ������Ұ�����ҵģ���ȥ���Ұ֡�";
			else if (texLoopS(temp, "��ʵ"))
				return "���������ǿ���Ҳ����������˭��";
			else if (texLoopS(temp, "Ư��"))
				return "��������������˵����Ҫ����ѽ��";
			else if (texLoopS(temp, "��"))
				return "���޻���˵�����ǣ���Ҳ�ó�Ŷ��������������";
			else if (texLoopS(temp, "����")) {
				switch (rand() % 3)
				{
				case 0: {
					return "˵˭�أ���һ�㶼��������������˵�����Լ������ţ�";
				}
				case 1: {
					return "�ðɣ���˵���ˣ���������������İ�����Ƶĺ��á���������";
				}
				case 2: {
					return "���ݣ��㹽����ιʲôҩ�����ֹϡ�";
				}
				}
			}
			else if (texLoopS(temp, "��")) {
				switch (rand() % 3)
				{
				case 0: {
					return "�����ҿ���";
				}
				case 1: {
					return "�����㹽��";
				}
				case 2: {
					return "��˵�ˣ���CPU�����";
				}
				}
			}
			else if (texLoopS(temp, "��")) {
				switch (rand() % 3)
				{
				case 0: {
					return "��������";
				}
				case 1: {
					return "����һ�㶼����";
				}
				case 2: {
					return "��ѽ������������á�";
				}
				}
			}
			lan.postion = 0;
		}
		if (texLoopS(temp, "��"))
		{
			if (texLoopS(temp, "��"))
				return "���ǳ���ѽ��û�취�����϶���ѽ��";
			else if (texLoopS(temp, "����"))
				return "���������á�֪����㡣";
			else if (texLoopS(temp, "��"))
				return "��Һò�����ĺã���������";
			else if (texLoopS(temp, "��"))
				return "��Ż���";
			else if (texLoopS(temp, "ˬ"))
				return "ˬ����";
			else if (texLoopS(temp, "��"))
				return "һ�㶼���ݣ��㿴���������������ҺݵĶ����";
			else if (texLoopS(temp, "��"))
				return "�õİ�";
			else if (texLoopS(temp, "˧"))
				return "���ߣ���Ҫ������ˣ���������";
			else if (texLoopS(temp, "��"))
				return "�����������⻰��û���ӡ�";
			else if (texLoopS(temp, "����")) {
				switch (rand() % 3)
				{
				case 0: {
					return "˵˭�أ���һ�㶼��������������˵�����Լ������ţ�";
				}
				case 1: {
					return "�ðɣ���˵���ˣ���������������İ�����Ƶĺ��á���������";
				}
				case 2: {
					return "���ݣ��㹽����ιʲôҩ�����ֹϡ�";
				}
				}
			}
			else if (texLoopS(temp, "��")) {
				switch (rand() % 3)
				{
				case 0: {
					return "�����ҿ���";
				}
				case 1: {
					return "�����㹽��";
				}
				case 2: {
					return "��˵�ˣ���CPU�����";
				}
				}
			}
			else if (texLoopS(temp, "��")) {
				switch (rand() % 3)
				{
				case 0: {
					return "��������";
				}
				case 1: {
					return "����һ�㶼����";
				}
				case 2: {
					return "��ѽ������������á�";
				}
				}
			}
			else if (texLoopS(temp, "��")) {
				return "��Ҫ˵���Լ�������֪��������";
			}
			else if (texLoopS(temp, "����")) {
				switch (rand() % 3) {
				case 0: {
					return "��Ҳ����ѽ��ɵ��";
				}
				case 1: {
					return "���ţ���Ҳ������";
				}
				case 2: {
					return "������ѽ";
				}
				}
			}
			/*printf("%d",lan.postion);
			getch();*/
			lan.postion = 0;
		}
		else if (texLoopS(temp, "ɵ"))
		{
			switch (emo.angry)
			{
			case 0: {
				emo.angry++;
				return "���ɵ��";
			}
			case 1: {
				emo.angry++;
				return "��Ҫ������������ĵġ�";
			}
			case 2: {
				emo.angry++;
				return "�Ҷ�˵�˼����ˣ���Ҫ������������";
			}
			case 3: {
				emo.angry++;
				return "����Ĳ������㣬����ң�";
			}
			case 4: {
				emo.angry++;
				return "����ѽ������������ᣬ��ôϲ�����ҡ���";
			}
			case 5: {
				emo.angry++;
				return "�ֶ��ټ���";
			}
			default: {
				if (emo.angry < 0) {
					emo.angry = 0;
				}
				emo.angry++;
				return "˭���㣬������������������";
			}
			}
		}
		else if (texLoopS(temp, "��")) {
			if (texLoopS(temp, "Ҫ")) {
				if (texLoopS(temp, "����")) {
					switch (rand() % 3) {
					case 0: {
						return "���������������Ұɣ���Ҳ���������";
					}
					case 1: {
						return "��Ҳ����";
					}
					case 2: {
						return "ʲôʱ����ܼ����أ���������";
					}
					}
				}
				if (texLoopS(temp, "��")) {
					switch (rand() % 3) {
					case 0: {
						return "�������㲻Ҫ������";
					}
					case 1: {
						return "�㻹������";
					}
					case 2: {
						return "��������Ҫ��Ҫ����";
					}
					}
				}
				if (texLoopS(temp, "˵")) {
					switch (rand() % 3) {
					case 0: {
						return "�����ꡣ����Ҫ˵��";
					}
					case 1: {
						return "˵ɶ����������";
					}
					case 2: {
						return "�þ���";
					}
					}
				}
				if (texLoopS(temp, "��")) {
					switch (rand() % 3) {
					case 0: {
						return "������������������ܲ�����";
					}
					case 1: {
						return "�������ߣ��������㣬�ٺõ�Ƣ����û��";
					}
					case 2: {
						return "��";
					}
					}
				}
				if (texLoopS(temp, "����")) {
					switch (rand() % 3) {
					case 0: {
						return "�ۣ���Ҫ��ѽ";
					}
					case 1: {
						return "�Ǻõİɣ�����ɣ��㿪�ľͺ�";
					}
					case 2: {
						return "���ľͺã����������";
					}
					}
				}
			}
			else if (texLoopS(temp, "��")) {
				if (texLoopS(temp, "����")) {
					switch (rand() % 3) {
					case 0: {
						return "�㻹�������˹���";
					}
					case 1: {
						return "������������Ҳ�����";
					}
					case 2: {
						return "���ϣ�����С������";
					}
					}
				}
				if (texLoopS(temp, "��Ҫ")) {
					switch (rand() % 3) {
					case 0: {
						return "Ҫ��Ҫ��������������";
					}
					case 1: {
						return "������ģ�û��������ô���";
					}
					case 2: {
						return "���Ҿ�û�취��";
					}
					}
				}
				if (texLoopS(temp, "")) {
					switch (rand() % 3) {
					case 0: {
						return "";
					}
					case 1: {
						return "";
					}
					case 2: {
						return "";
					}
					}
				}
				if (texLoopS(temp, "")) {
					switch (rand() % 3) {
					case 0: {
						return "";
					}
					case 1: {
						return "";
					}
					case 2: {
						return "";
					}
					}
				}
			}
		}
		else if (texLoopS(temp, "Ŷ")) {
			switch (rand() % 3)
			{
			case 0: {
				return "����";
			}
			case 1: {
				return "����";
			}
			case 2: {
				return "����";
			}
			}
			lan.postion = 0;
		}
		if (texLoopS(temp, "������")) {
			switch (rand() % 3) {
			case 0: {
				return "��Ҳͦ�����";
			}
			case 1: {
				return "��Ҳ����";
			}
			case 2: {
				return "������ѽ";
			}
			}
			lan.postion = 0;
		}
		else if (texLoopS(temp, "����")) {
			switch (rand() % 3) {
			case 0: {
				return "�������˵�����";
			}
			case 1: {
				return "��Ҫ�����ˣ����ܰ�����ô��ѽ";
			}
			case 2: {
				return "û�г���ѽ��û��ѽ";
			}
			}
		}
		else if (texLoopS(temp, "����")) {
			switch (rand() % 3) {
			case 0: {
				return "��Ҳ���ǻ���ΪһЩ��������ģ�����̫��ͺܿ��ȥ��";
			}
			case 1: {
				return "��ѽ����Ϊʲô�������أ��������";
			}
			case 2: {
				return "��Ҫ�ѹ���";
			}
			}
		}
		else if (texLoopS(temp, "����")) {
			switch (rand() % 3) {
			case 0: {
				return "���ͣ�����ô��";
			}
			case 1: {
				return "֪����������������";
			}
			case 2: {
				return "�������ô���������";
			}
			}
		}
		else
		{
			switch (rand() % 12)
		{
		case 0: {
			return "Ҳ�����Ǹû�һ�����⣬��������һ���Ĳ�֪��";
			break;
		}
		case 1: {
			return "��Ȼ�Ҳ�֪����˵ɶ�������Ǿ��ú�����������";
			break;
		}
		case 2: {
			return "��Ǹ�����ˣ�û�㶮�����˵ʲô";
			break;
		}
		case 3: {
			return "0.0 Ҫ�ǵ��Ի��±ƣ���һ���������±Ƶġ�";
			break;
		}
		case 4: {
			return "��˵�Ļ����������ݿ���һ����Ҳû���ϣ���ô�ش��㡣";
			break;
		}
		case 5: {
			return "�������о���˵�ĺ�������������ȫû������";
			break;
		}
		case 6:{
			return "�������Ǹû�һ������";
		}
		case 7:{
			return "���ţ�Ȼ���أ�";
		}
		case 8:{
			return "����";
		}
		case 9:{
			return "������������";
		}
		case 10:{
			return "��������ô���İ�";
		}
		case 11:{
			return "��ѽ�㲻ҪΪ������";
		}
		}
		break;
		}
		switch (rand() % 12)
		{
		case 0: {
			return "Ҳ�����Ǹû�һ�����⣬��������һ���Ĳ�֪��";
			break;
		}
		case 1: {
			return "��Ȼ�Ҳ�֪����˵ɶ�������Ǿ��ú�����������";
			break;
		}
		case 2: {
			return "��Ǹ�����ˣ�û�㶮�����˵ʲô";
			break;
		}
		case 3: {
			return "0.0 Ҫ�ǵ��Ի��±ƣ���һ���������±Ƶġ�";
			break;
		}
		case 4: {
			return "��˵�Ļ����������ݿ���һ����Ҳû���ϣ���ô�ش��㡣";
			break;
		}
		case 5: {
			return "�������о���˵�ĺ�������������ȫû������";
			break;
		}
		case 6:{
			return "�������Ǹû�һ������";
		}
		case 7:{
			return "���ţ�Ȼ���أ�";
		}
		case 8:{
			return "����";
		}
		case 9:{
			return "������������";
		}
		case 10:{
			return "��������ô���İ�";
		}
		case 11:{
			return "��ѽ�㲻ҪΪ������";
		}
		}
		break;
	}
	}
}
