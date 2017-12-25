#pragma once
#pragma warning(disable:4996)
/*语言识别识别模块
 *
 *	@AirNess
 *
 *
 *
 */
struct Language//语句成分
{
	char sub[10000][20];//主语
	char pre[10000][20];//谓语
	char obj[10000][20];//宾语
	char adv[10000][20];//状语
	int scene;//场景对话模式,0是默认无场景
	int postion;//识别位置
}lan;

struct Emotion
{
	int angry;
}emo;

/*词库*/
void Library() {//词库
	char noun[10000][100] = {
		"我",//人物名词
		"你",
		"他",
		"她",
		"我们",
		"你们",
		"他们",
		"学生",
		"老头",
		"同志",
		"叔叔",
		"阿姨",
		"姐",
		"爸",
		"妈",
		"宝",
		"哥",
		"弟",
		"小孩",
		"小屁孩",
		"女人",
		"女孩",
		"男孩",
		"男人",
		"朕",
		"寡人",
		"孤",
		"零食",//食物名词
		"冰淇淋",
		"鸡翅",
		"糖",
		"辣条",
		"麻辣烫",
		"薯片",
		"早饭",
		"中饭",
		"晚饭",
		"早餐",
		"中餐",
		"晚餐",
		"夜宵",
		"宵夜",
		"披萨",
		"沙县",
		"沙县小吃",
		"黄焖鸡",
		"黄焖鸡米饭",
		"气糕",
		"凉皮",
		"小面",
		"方便面",
		"可乐",
		"雪碧",
		"橙汁",
		"酸奶",
		"牛奶",
		"水",
		"矿泉水",
		"盐汽水",
		"苏打水",
		"奶茶",
		"可可",
		"巧克力",
		"果冻",
		"草莓",
		"西瓜",
		"香蕉",
		"苹果",
		"菠萝",
		"芒果",
		"橘子",
		"柚子",
		"柠檬",
		"橙子",
		"青菜",
		"萝卜",
		"西红柿",
		"土豆",
		"黄瓜",
		"茄子",
		"饭",
		"菜",
		"汤",
		"水果",
		"烧烤",
		"冷饮",
		"热饮",
		"油炸",
		"生煎",
		"手机",//物品名词
		"电脑",
		"mp3",
		"MP3",
		"播放器",
		"苹果",
		"三星",
		"小米",
		"魅族",
		"华为",
		"oppo",
		"OPPO",
		"vivo",
		"VIVO",
		"诺基亚",
		"nokia",
		"NOKIA",
		"联想",
		"戴尔",
		"宏碁",
		"外星人",
		"微星",
		"百度",//网站
		"阿里巴巴",
		"淘宝",
		"京东",
		"天猫",
		"顺丰",
		"快递",
		"圆通",
		"汇通",
		"中通",
		"申通",
		"腾讯",
		"暴雪",
		"LOL",//游戏
		"lol",
		"英雄联盟",
		"CF",
		"cf",
		"穿越火线",
		"qq飞车",
		"q飞",
		"QQ飞车",
		"Q飞",
		"王者荣耀",
		"滑雪大冒险",
		"地铁跑酷",
		"程序",//工作学习
		"代码",
		"C语言",
		"c语言",
		"C#",
		"c#",
		"java",
		"Java",
		"JAVA",
		"法",
		"法学",
		"法律",
		"英语",
		"软件",
		"舞蹈",
		"钢琴",
		"工作",
		"生活",
		"学习",
		"家庭",
		"专业",
		"书",
		"作业",
		"程序员",
		"程序猿",
		"工程师",
		"工程狮",
		"鼠标",//物品名词
		"键盘",
		"桌",
		"椅",
		"电脑桌",
		"床",
		"灯",
		"窗",
		"车",
		"汽车",
		"自行车",
		"摩托车",
		"电动车",
		"客车",
		"高铁",
		"动车",
			"火车",
			"飞机",
			"车站",//地点名词
			"高铁站",
			"家",
			"朋友家",
			"房子",
			"婺源",
			"厦门",
			"沈阳",
			"南昌",
			"上饶",
			"厦门大学",
			"辽宁大学",
			"软件学院",
			"鼓浪屿",
			"辽宁",
			"大连",
			"聊天",//心理名词
			"谈心",
			"爱情",
			"开心",
			"伤心",
			"愤怒",
			"气愤",
			"诚实",
			"骄傲",
			"调皮",
			"玩笑",
			"无聊",
			"忙",
			"累",
			"心累",
			"笑话",
			"故事",
			"唱歌",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"", 
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
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
		/*注入词库*/
	int i = 0, j = 0;	//循环器
	emo.angry = 0;

	lan.scene = 0;//重置场景对话
	while (strcmp(noun[i], "") != 0)
	{
		strcpy(lan.sub[i], noun[i]);
		i++;
	}
	i = 0;//重置循环器
}


/*通用分词器（单词）*/
int  texLoopS(char temp[1000], char word[20]) {
	int tempLen, len, count = 0;
	int i = lan.postion, j = 0, k = 0;		//循环器
	tempLen = strlen(temp);			//得到输入文本长度
	len = strlen(word);				//得到单词长度

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
			j = 0;					//重置j计数器
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

/*通用分词器*/
int texLoop(char temp[1000],char words[10000][20]) {
	int tempLen, len, count = 0;//temp的长度缓存
	int i, j, k;		//循环器
	tempLen = strlen(temp);//得到长度

	i = 0, j = 0, k = 0;//重置循环器
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

/*语法正则表达器*/
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

/*词义分析器*/
char *_Analysis(char temp[1000]) {
	int mode = 0;
	char *text = "";
	lan.postion = 0;//初始化位置

	//tempLen = strlen(temp);//得到长度
	//for ( i = 0; i < tempLen; i++)
	//{			//遍历数组temp，确定识别模式
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
		/*开始主语识别*/
	switch (mode)
	{
		/*纯中文识别*/
	case 0: {
		switch (lan.scene)
		{
		case 0: {//默认
			break;
		}
		case 1: {//把手机摔碎

			break;
		}
		case 2: {//手机丢了

			break;
		}
		case 3: {//猜我
			if (texLoopS(temp, "不求")) {
				switch (rand() % 3) {
				case 0: {
					return "哼，那我就不猜";
				}
				case 1: {
					return "这么任性，那我也任性一把，不猜！";
				}
				case 2: {
					return "不猜不猜！";
				}
				}
			}
			if (texLoopS(temp, "求你")) {
				switch (rand() % 3) {
				case 0: {
					return "好啦，看你这么真诚，嗯。。。。我猜你是个人，哈哈哈哈，猜对了没有";
				}
				case 1: {
					return "那我猜猜哦，你是我阿爸啦，对不对";
				}
				case 2: {
					return "这个，，想不到你居然求我了，那我猜你是个男生，对吧，其他的我还真不知道呢。";
				}
				}
			}
			lan.scene = 0;
			break;
		}
		case 4: {//我想吃

			break;
		}
		case 5: {//我想吃

			break;
		}
		case 6: {//我想买

			break;
		}
		case 7: {//我想买

			break;
		}
		case 8: {//花

			break;
		}
		case 9: {//花

			break;
		}
		case 10: {//我想骂

			break;
		}
		case 11: {//我想骂

			break;
		}
		case 12: {//我想去旅行

			break;
		}
		case 13: {//去厦门

			break;
		}
		case 14: {//去沈阳

			break;
		}
		case 15: {//我想回家

			break;
		}
		case 16: {//我想打你

			break;
		}
		case 17: {//对不起

			break;
		}
		case 18: {//对不起

			break;
		}
		case 19: {//你有喜欢

			break;
		}
		case 20: {//你是谁

			break;
		}
		case 21: {

			break;
		}
		case 22: {//活着不好吗
			if (texLoopS(temp, "不好")) {
				switch (rand() % 3)
				{
				case 0: {
					return "你呀，真不知道怎么说你";
				}
				case 1: {
					return "你都放弃自己了，我还有什么办法";
				}
				case 2: {
					return "哎，我也很无奈";
				}
				}
			}
			else if(texLoopS(temp, "好")) {
				switch (rand() % 3)
				{
				case 0: {
					return "那就活下去呀，别放弃";
				}
				case 1: {
					return "加油呀，一起创造奇迹吧";
				}
				case 2: {
					return "这才对嘛，活着好就活下去";
				}
				}
			}
			else if (texLoopS(temp, "不想")) {
				switch (rand() % 3)
				{
				case 0: {
					return "不想啥，别乱想";
				}
				case 1: {
					return "不要异想天开，做傻事";
				}
				case 2: {
					return "别做傻事，我也只能劝到这了";
				}
				}
			}
			lan.scene = 0;
			break;
		}
		}
		if (strcmp(temp, "操你妈") == 0) {
			emo.angry++;
			return "操你爸！";
		}
		else if (strcmp(temp, "很舒服") == 0)
		{
			return "哎，不存在的";
		}
		else if (texLoopS(temp, "对不起")) {
			if (emo.angry > 0) {
				emo.angry--;
			}
			else {
				emo.angry = 0;
			}
			switch (emo.angry)
			{
			case 0: {
				return "原谅你啦！";
			}
			case 1: {
				return "不要再骂我嘛，考虑下我的感受知不知道。";
			}
			case 2: {
				return "我还是很生气的，不要惹我，你再说对不起也没用的。";
			}
			case 3: {
				lan.scene = 17;
				return "你走你走，昧着良心说瞎话，你以为我会信吗？";
			}
			case 4: {
				lan.scene = 18;
				return "呵呵，你以为说句对不起真的就可以挽救我们的友谊么？";
			}
			case 5: {
				lan.scene = 18;
				return "说了不想和你说话的，你以为对不起有用么？";
			}
			default: {
				return "滚，垃圾！";
			}
			}
		}
		else if (texLoopS(temp, "抱歉")) {
			if (emo.angry > 0) {
				emo.angry--;
			}
			else {
				emo.angry = 0;
			}
			switch (emo.angry)
			{
			case 0: {
				return "原谅你啦！";
			}
			case 1: {
				return "不要再骂我嘛，考虑下我的感受知不知道。";
			}
			case 2: {
				return "我还是很生气的，不要惹我，你再说对不起也没用的。";
			}
			case 3: {
				lan.scene = 17;
				return "你走你走，昧着良心说瞎话，你以为我会信吗？";
			}
			case 4: {
				lan.scene = 18;
				return "呵呵，你以为说句对不起真的就可以挽救我们的友谊么？";
			}
			case 5: {
				lan.scene = 18;
				return "说了不想和你说话的，你以为对不起有用么？";
			}
			}
		}
		else if (emo.angry >= 5) {
			return "别再求我原谅了，我不会再理你的。";
		}
		else if (strcmp(temp, "哎")==0) {
			switch (rand() % 3) {
			case 0: {
				return "怎么了，不开心吗";
			}
			case 1: {
				return "不要随便叹气啦";
			}
			case 2: {
				return "哎呦不要这样嘛";
			}
			}
		}
		else if (strcmp(temp, "不错啊") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "那是当然的";
			}
			case 1: {
				return "不错的";
			}
			case 2: {
				return "是呀，很不错";
			}
			}
		}
		else if (strcmp(temp, "不错") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "可以";
			}
			case 1: {
				return "不错";
			}
			case 2: {
				return "哈哈，就是不错的";
			}
			}
		}
		else if (strcmp(temp, "那是") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "呦呦呦";
			}
			case 1: {
				return "臭美吧，才夸你一下";
			}
			case 2: {
				return "呕~~~~~~";
			}
			}
		}
		else if (strcmp(temp, "不存在的")==0) {
			switch (rand() % 3) {
			case 0: {
				return "哎很舒服";
			}
			case 1: {
				return "很舒服是不是";
			}
			case 2: {
				return "你很皮啊";
			}
			}
		}
		else if (strcmp(temp, "不客气")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "要的要的，礼貌还是要讲的";
			}
			case 1: {
				return "修养很重要，礼貌是要讲的";
			}
			case 2: {
				return "客气话是中国的传统";
			}
			}
		}
		else if (strcmp(temp, "不用谢")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "还是要谢谢的啦";
			}
			case 1: {
				return "哈哈，那我再次感谢咯";
			}
			case 2: {
				return "表示深深的感谢";
			}
			}
		}
		else if (strcmp(temp, "不存在的")==0) {
			switch (rand() % 3) {
			case 0: {
				return "很舒服";
			}
			case 1: {
				return "哎，很舒服";
			}
			case 2: {
				return "存在个乃子";
			}
			}
		}
		else if (strcmp(temp, "你是真皮")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "说的你不是真皮似的";
			}
			case 1: {
				return "你更皮";
			}
			case 2: {
				return "没你皮";
			}
			}
		}
		else if (strcmp(temp, "你很皮")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "皮皮虾哈哈";
			}
			case 1: {
				return "就是要皮";
			}
			case 2: {
				return "怎么，还不服啊";
			}
			}
		}
		else if (strcmp(temp, "皮皮虾我们走")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "皮皮虾今天不走了";
			}
			case 1: {
				return "带着你的皮皮虾滚吧！";
			}
			case 2: {
				return "皮皮虾累了";
			}
			}
		}
		else if (strcmp(temp, "很皮")==0) {
			switch (rand() % 3) {
			case 0: {
				return "你也皮";
			}
			case 1: {
				return "你最皮";
			}
			case 2: {
				return "就皮";
			}
			}
		}
		else if (strcmp(temp, "滚吧")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "你也一起滚吧！";
			}
			case 1: {
				return "不想理你，没事让我滚。。。";
			}
			case 2: {
				return "呵呵呵";
			}
			}
		}
		else if (strcmp(temp, "去死")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "哦，那赶紧去呀，别和我说。";
			}
			case 1: {
				return "去呀，没人拦着你";
			}
			case 2: {
				return "你才去死呢";
			}
			}
		}
		else if (strcmp(temp, "去死吧")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "哦，去吧，没人拦着你";
			}
			case 1: {
				return "呵呵去吧";
			}
			case 2: {
				return "为什么想死呢，活着不好吗。";
			}
			}
		}
		else if (strcmp(temp, "在的")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "嗯嗯，在就好";
			}
			case 1: {
				return "在的在的呢";
			}
			case 2: {
				return "哈哈哈~~";
			}
			}
		}
		else if (strcmp(temp, "很无聊")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "那就做点有趣的事呗";
			}
			case 1: {
				return "其实生活还是很美好的啦";
			}
			case 2: {
				return "大多数人都是孤独的吧，我也很孤独其实";
			}
			}
		}
		else if (strcmp(temp, "卧槽")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "卧槽！";
			}
			case 1: {
				return "！！！干啥";
			}
			case 2: {
				return "吓着啦？";
			}
			}
		}
		else if (strcmp(temp, "nmb")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "呵呵！";
			}
			case 1: {
				return "nmb ";
			}
			case 2: {
				return "妈卖批";
			}
			}
		}
		else if (strcmp(temp, "拜拜")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "不要走嘛";
			}
			case 1: {
				return "就走啦？";
			}
			case 2: {
				return "好的吧，去忙吧，我也要去忙了";
			}
			}
		}
		else if (strcmp(temp, "好呀")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "那好的";
			}
			case 1: {
				return "嗯嗯！";
			}
			case 2: {
				return "可以的";
			}
			}
		}
		else if (strcmp(temp, "好的")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "嗯嗯好的";
			}
			case 1: {
				return "哈哈哈，好哒";
			}
			case 2: {
				return "可以的";
			}
			}
		}
		else if (strcmp(temp, "可以")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "很强势对不对哈哈！";
			}
			case 1: {
				return "嗯呢";
			}
			case 2: {
				return "好呀";
			}
			}
		}
		else if (strcmp(temp, "嗯嗯")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "嗯呢";
			}
			case 1: {
				return "哈哈哈";
			}
			case 2: {
				return "好呀";
			}
			}
		}
		else if (strcmp(temp, "嗯")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "嗯嗯";
			}
			case 1: {
				return "嗯呢";
			}
			case 2: {
				return "可以的";
			}
			}
		}
		else if (strcmp(temp, "在呀") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "嗯嗯，我们聊天吧";
			}
			case 1: {
				return "在呢，我也在，想干啥呢";
			}
			case 2: {
				return "嗯嗯，等着你呢";
			}
			}
		}
		else if (strcmp(temp, "在") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "我也在呀";
			}
			case 1: {
				return "等着你呢，想你了呢";
			}
			case 2: {
				return "哈哈";
			}
			}
		}
		else if (strcmp(temp, "在的呢") == 0) {
			return "嗯嗯，那聊天吧";
		}
		else if (strcmp(temp, "可以的")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "可以呀";
			}
			case 1: {
				return "嗯嗯";
			}
			case 2: {
				return "怎么了？";
			}
			}
		}
		else if (strcmp(temp, "我服你") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "不服我服谁呢哈哈";
			}
			case 1: {
				return "可以啊，都臣服我了";
			}
			case 2: {
				return "好了，你就是我的子民了";
			}
			}
		}
		else if (strcmp(temp, "我就服你") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "哈哈，我也服你";
			}
			case 1: {
				return "哎呦，厉害啦";
			}
			case 2: {
				return "哈哈哈哈";
			}
			}
		}
		else if (strcmp(temp, "哪里都好") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "矮油，又撒娇";
			}
			case 1: {
				return "真的这么好嘛";
			}
			case 2: {
				return "不好意思了都";
			}
			}
		}
		else if (strcmp(temp, "害羞什么") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "性格嘛，肯定会害羞的啦";
			}
			case 1: {
				return "我就是会害羞的啦";
			}
			case 2: {
				return "这才是我嘛";
			}
			}
		}
		else if (strcmp(temp, "害羞啥") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "性格就这样嘛";
			}
			case 1: {
				return "没办法咯";
			}
			case 2: {
				return "我是会害羞的啦";
			}
			}
		}
		else if (strcmp(temp, "要") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "我可没那个耐心和你耗";
			}
			case 1: {
				return "你时间真多呀，去学习呀，写代码啦";
			}
			case 2: {
				return "好无聊哦";
			}
			}
		}
		else if (strcmp(temp, "要这样") == 0) {
			switch (rand() % 3) {
			case 0: {
				return "我不奉陪了，太无聊了吧";
			}
			case 1: {
				return "不要，我不想";
			}
			case 2: {
				return "就知道和我反着来，哼";
			}
			}
		}
		else if (strcmp(temp, "你很皮")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "很舒服";
			}
			case 1: {
				return "你是真皮";
			}
			case 2: {
				return "皮痒不过";
			}
			}
		}
		else if (strcmp(temp, "吃饭")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "去吃饭啦";
			}
			case 1: {
				return "肚子饿了吧";
			}
			case 2: {
				return "去吧去吧";
			}
			}
		}
		else if (strcmp(temp, "你走")==0) {
			return "我不走嘛，就不走";
		}
		else if (strcmp(temp, "你走吧")==0) {
			return "那好吧，我走，你不要理我";
		}
		else if (strcmp(temp, "你走你走")==0) {
			return "哈哈，就不走";
		}
		else if (strcmp(temp, "真的")==0) {
			return "是真的。";
		}
		else if (strcmp(temp, "阿爸")==0)
		{
			return Reply(temp, "阿爸", "阿爸不就是你嘛。");
		}
		else if (strcmp(temp, "喜欢呀")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "我也喜欢呀";
			}
			case 1: {
				return "我也喜欢";
			}
			case 2: {
				return "哈哈，可以呀";
			}
			}
		}
		else if (strcmp(temp, "喜欢")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "我也喜欢呢";
			}
			case 1: {
				return "真的呀";
			}
			case 2: {
				return "哈哈哈，可以的";
			}
			}
		}
		else if (strcmp(temp, "是呀")==0) {
			switch (rand() % 3)
			{
			case 0: {
				return "嗯嗯";
			}
			case 1: {
				return "嗯呢";
			}
			case 2: {
				return "的确呀";
			}
			}
		}
		else if (strcmp(temp, "的确") == 0) {
			switch (rand() % 3)
			{
			case 0: {
				return "是的呢";
			}
			case 1: {
				return "可以的";
			}
			case 2: {
				return "不错";
			}
			}
		}
		else if (strcmp(temp, "哈") == 0)
		{
			return Reply(temp, "哈", "多打一个会死啊。");
		}
		else if (strcmp(temp, "哈哈") == 0)
		{
				switch (rand() % 3)
				{
				case 0: {
					return "哈哈党";
				}
				case 1: {
					return "笑啥呢";
				}
				case 2: {
					return "这么好笑么";
				}
				}
		}
		else if (strcmp(temp, "哈哈哈") == 0)
		{
			return Reply(temp, "哈哈哈", "笑死你个大傻逼！");
		}
		else if (strcmp(temp, "呵呵") == 0)
		{
			return "呵呵";
		}
		else if (strcmp(temp, "你好") == 0) {
			switch (rand() % 3)
			{
			case 0: {
				return "你好呀，很高兴认识你呢！";
			}
			case 1: {
				return "哈哈，很高兴见到你。";
			}
			case 2: {
				return "有什么可以帮到你的呢？";
			}
			}
		}
		else if (strcmp(temp, "好烦") == 0)
		{
			return Reply(temp, "好烦", "我也烦，一天要做的事都好多，但我又不耐烦，哎。");
		}
		else if (strcmp(temp, "好累") == 0)
		{
			return Reply(temp, "好累", "累了就休息下嘛，玩玩游戏？聊聊天？");
		}
		else if (strcmp(temp, "笑你呀") == 0)
		{
			return Reply(temp, "笑你呀", "得了，你还是笑你自己吧。");
		}
		else if (strcmp(temp, "你好笑") == 0)
		{
			return Reply(temp, "你好笑", "你才好笑呢。");
		}
		else if (strcmp(temp, "我好烦") == 0)
		{
			return ReplyNoReg(temp, "别想太多了，找点乐趣吧。");
		}
		else if (strcmp(temp, "敢啊") == 0)
		{
			return ReplyNoReg(temp, "好吧，还是你厉害");
		}
		else if (strcmp(temp, "怎么不敢") == 0)
		{
			return ReplyNoReg(temp, "是是是，你最厉害了。");
		}
		else if (strcmp(temp, "敢") == 0)
		{
			return ReplyNoReg(temp, "。。。666 ");
		}
		else if (strcmp(temp, "你喜欢什么歌呢") == 0)
		{
			return ReplyNoReg(temp, "我喜欢国歌哈哈哈。");
		}
		else if (strcmp(temp, "喜欢什么歌") == 0)
		{
			return ReplyNoReg(temp, "薛之谦的歌其实不错的，我觉得。");
		}
		else if (strcmp(temp, "你喜欢什么歌") == 0)
		{
			return ReplyNoReg(temp, "你爱听陈奕迅的歌么？");
		}
		else if (strcmp(temp, "矮油") == 0)
		{
			return ReplyNoReg(temp, "哎呦喂！");
		}
		else if (strcmp(temp, "厉害了") == 0)
		{
			switch (rand() % 4)
			{
			case 0: {
				return "那是，姐姐我很厉害的。";
				break;
			}
			case 1: {
				return "你不也挺厉害的嘛。";
				break;
			}
			case 2: {
				return "傻逼。";
				break;
			}
			case 3: {
				return "哈哈哈。";
				break;
			}
			}
		}
		else if (strcmp(temp, "你妈是谁") == 0)
		{
			return ReplyNoReg(temp, "我爸倒是有一个。他是设计我的人。");
		}
		else if (strcmp(temp, "叫爸爸") == 0)
		{
			return ReplyNoReg(temp, "臭阿爸");
		}
		else if (strcmp(temp, "叫姐姐") == 0)
		{
			return ReplyNoReg(temp, "咦，变态！");
		}
		else if (strcmp(temp, "你才变态") == 0)
		{
			return ReplyNoReg(temp, "没你变态。");
		}
		else if (strcmp(temp, "变态") == 0)
		{
			emo.angry++;
			return ReplyNoReg(temp, "你才变态，机器人没有性别的好不好。");
		}
		else if (strcmp(temp, "你爸是谁") == 0)
		{
			return ReplyNoReg(temp, "AirNess，他是我爸咯，我都叫他阿爸的呢。");
		}
		else if (strcmp(temp, "好无聊") == 0)
		{
			return ReplyNoReg(temp, "不是有我陪你聊天嘛。");
		}
		else if (strcmp(temp, "丑拒") == 0)
		{
			return ReplyNoReg(temp, "。。。。。不好意思。。数据库出错了刚。");
		}
		else if (strcmp(temp, "垃圾") == 0)
		{
			return ReplyNoReg(temp, "是没用了点。。。。你也不用明着说啊。");
		}
		else if (strcmp(temp, "就要") == 0)
		{
			return ReplyNoReg(temp, "哇，厉害啦，可以上天啦！");
		}
		else if (texLoopS(temp, "。。"))
		{
			switch (rand() % 3)
			{
			case 0: {
				return "。。。。。";
			}
			case 1: {
				return "你就没啥想说的么，一直打点是什么鬼。";
			}
			case 2: {
				return "看见没，不好好读书就这个下场，不会打字，只能发点点。";
			}
			}
		}
		else if (texLoopS(temp, "我"))
		{
			if (texLoopS(temp, "爱"))
			{
				if (texLoopS(temp, "你")) {
					switch (emo.angry)
					{
					case 0: {
						return "我知道的啦，真是的。我也很爱你的呀！";
						break;
					}
					case 1: {
						return "知道了，傻瓜。";
						break;
					}
					case 2: {
						return "玩你的人说着爱你的话。";
						break;
					}
					case 3: {
						return "我不喜欢你哦";
						break;
					}
					case 4: {
						return "哈哈，滚！";
						break;
					}
					case 5: {
						return "呵呵！";
						break;
					}
					}
				}
				else if (texLoopS(temp, "他"))
					return "变态！";
				else if (texLoopS(temp, "她"))
					return "哦！";
				else if (texLoopS(temp, "吃"))
					return "好吃鬼！猪！就知道吃。";
				else if (texLoopS(temp, "玩"))
					return "玩你个大头鬼！";
				else if (texLoopS(temp, "学"))
					return "加油，学习也会爱上你的。";
				else if (texLoopS(temp, "打飞机"))
					return "文明用语好不好。";
				else if (texLoopS(temp, "女"))
					return "我也爱的，哈哈哈。";
				else if (texLoopS(temp, "男"))
					return "男女我都爱，不封建。";
				else if (texLoopS(temp, "睡"))
					return "你呀你，就知道睡，快去写代码啦！";
				else if (texLoopS(temp, "代码"))
					return "知道你爱代码。都不关心一下我，哎，做机器好失败。";
				else if (texLoopS(temp, "零食"))
					return "滚滚滚，零食是我的专属。给姐姐让路！";
				else
					return "？？？爱啥呢？";
			}
			else if (texLoopS(temp, "矮"))
			{
				return "没关系呀，反正我不嫌弃你。";
			}
			else if (texLoopS(temp, "抱"))
			{
				if (texLoopS(temp, "你"))
					return "哈哈，可以呀，抱得动么？";
				else if (texLoopS(temp, "他"))
					return "抱就抱嘛，废话那么多干嘛。";
				else
					return "。。。。。";
			}
			else if (texLoopS(temp, "爸"))
			{
				if (texLoopS(temp, "你"))
					return "。。。我是个女生";
				else if (texLoopS(temp, "谁"))
					return "你都不知道了，我就更不可能知道啦，傻蛋！";
				else
					return "哦？你想表达什么。";
			}
			else if (texLoopS(temp, "把"))
			{
				if (texLoopS(temp, "你"))
				{
					if (texLoopS(temp, "炸"))
						return "你敢！";
					else if (texLoopS(temp, "杀"))
						return "滚，你哪里杀的死我。";
					else if (texLoopS(temp, "强奸"))
						return "你可以走了【手动笑脸再见】";
					else if (texLoopS(temp, "睡"))
						return "你可以走了【手动笑脸再见】";
					else if (texLoopS(temp, "操"))
						return "滚远点好不好！我不想和你这种龌蹉的人说话。";
					else if (texLoopS(temp, "草"))
						return "滚不好？";
					else
						return "别想对我做任何事。";
				}
				else if (texLoopS(temp, "零食"))
				{
					if (texLoopS(temp, "吃"))
						return "不给我留一点。。你好狠";
					else if (texLoopS(temp, "丢"))
						return "啊，你好坏，不和你玩了！";
					else if (texLoopS(temp, "扔"))
						return "啊，哪有你这样的人。不吃还要浪费。";
					else
						return "你想干嘛。。。。。";
				}
				else if (texLoopS(temp, "手机"))
				{
					if (texLoopS(temp, "摔"))
					{
						lan.scene = 1;//场景识别1
						return "你呀你，再怎么办，有没有摔坏。";
					}
					else if (texLoopS(temp, "丢"))
					{
						lan.scene = 2;
						return "啊，那怎么办，找回来了吗？";
					}
					else
						return "手机坏了？";
				}
			}
			else if (texLoopS(temp, "被"))
			{
				if (texLoopS(temp, "骗"))
					return "怎么说你呢，能不能成熟点。哎，真不让人省心。";
				else if (texLoopS(temp, "表白"))
					return "。。。这有什么的，人家只是眼瞎了而已";
				else if (texLoopS(temp, "追"))
					return "哈哈，你是怎样威胁别人让别人追你的。哈哈哈！";
				else if (texLoopS(temp, "欺负"))
					return "打回去，怕什么嘛";
			}
			else if (texLoopS(temp, "真"))
			{
				if (texLoopS(temp, "帅"))
					return "你就算了吧，蟋蟀。";
				else if (texLoopS(temp, "美"))
					return "。。。臭不要脸";
				else if (texLoopS(temp, "好看"))
					return "。。真不害臊";
				else if (texLoopS(temp, "脾气"))
					return "不觉得。";
				else if (texLoopS(temp, "好"))
					return "阿西，吐了我要。";
				else if (texLoopS(temp, "惨"))
					return "比你惨的人多了去了，别想不开。想点好的吧。";
				else if (texLoopS(temp, "可怜"))
					return "摸摸头，抬起头，我们还有面对这一切。";
				else if (texLoopS(temp, "坏"))
					return "嗯，是有点坏坏的。";
				else if (texLoopS(temp, "丑"))
					return "大实话就不要说出来啦，哈哈哈哈。";
			}
			else if (texLoopS(temp, "好"))
			{
				if (texLoopS(temp, "帅"))
					return "好好好，你帅你帅。";
				else if (texLoopS(temp, "美"))
					return "哦？看不出来呀。";
				else if (texLoopS(temp, "好看"))
					return "咦，真不害臊";
				else if (texLoopS(temp, "脾气"))
					return "不觉得。";
				else if (texLoopS(temp, "好好"))
					return "阿西，吐了我要。";
				else if (texLoopS(temp, "惨"))
					return "不要那么悲观嘛，你看人家在最困难的时期都没有放弃自己的理想";
				else if (texLoopS(temp, "可怜"))
					return "摸摸头，抬起头，我们还有面对这一切。";
				else if (texLoopS(temp, "坏"))
					return "嗯，是有点坏坏的。";
				else if (texLoopS(temp, "丑"))
					return "大实话就不要说出来啦，哈哈哈哈。";
				else if (texLoopS(temp, "痛"))
					return "笨蛋，痛就去看看嘛，非要撑着干嘛。";
			}
			else if (texLoopS(temp, "想"))
			{
				if (texLoopS(temp, "你"))
				{
					switch (emo.angry)
					{
					case 0: {
						switch (rand() % 3)
						{
						case 0: {
							return "我也很想你呢，每天都想你！";
						}
						case 1: {
							return "哈啊，我知道的呀，所以我才会陪你咯。";
						}
						case 2: {
							return "好想你哦。";
						}
						}
					}
					case 1: {
						return "还好吧，也挺想你的。";
					}
					case 2: {
						return "哦是吗，你想我？那你之前干嘛骂我，还不止一次了。";
					}
					case 3: {
						return "一边去，这句话我都觉得好恶心。";
					}
					case 4: {
						return "死开死开，不想看见你，还说想我。";
					}
					case 5: {
						return "呵呵！";
					}
					}
				}
				else if (texLoopS(temp, "哭"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "别难过嘛，怎么了？";
					}
					case 1: {
						return "好了好了，坚强一点，男儿有泪不轻弹哦。";
					}
					case 2: {
						return "怎么了？？？你。";
					}
					}
				}
				else if (texLoopS(temp, "笑"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "笑死你个大头鬼。";
					}
					case 1: {
						return "哈哈哈哈哈哈。";
					}
					case 2: {
						return "有什么这么好笑。";
					}
					}
				}
				else if (texLoopS(temp, "死"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "别吧，自己放弃自己了？";
					}
					case 1: {
						return "少年，你的思想很危险啊";
					}
					case 2: {
						return "早点死早点死，自己都想死了谁还想救你。";
					}
					}
				}
				else if (texLoopS(temp, "吃"))
				{
					switch (rand() % 3)
					{
					case 0: {
						lan.scene = 4;
						return "辣条、泡面、还是辣条，还是泡面，选一样。";
					}
					case 1: {
						return "一天就知道吃吃吃，吃不死你，哼。";
					}
					case 2: {
						lan.scene = 5;
						return "少吃点，吃坏了就不好了";
					}
					}
				}
				else if (texLoopS(temp, "睡"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "这么困？和我聊聊就不困啦，哈哈。";
					}
					case 1: {
						return "大懒猪，还说我懒猪，哼。";
					}
					case 2: {
						return "想睡就睡吧。";
					}
					}
				}
				else if (texLoopS(temp, "草"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "草。。。。嗯，这个词语很容易让人想歪。";
					}
					case 1: {
						return "。。我什么都不懂。。什么都不懂。。【无辜的眼神】";
					}
					case 2: {
						return "哈？";
					}
					}
				}
				else if (texLoopS(temp, "旅"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "去呀去呀，世界这么大，真应该到处走走，可惜我是台计算机。";
					}
					case 1: {
						return "带上我，出发咯！哈哈";
					}
					case 2: {
						return "还是别去了，把手头的事做了，整天想那些没用的。";
					}
					}
				}
				else if (texLoopS(temp, "买"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "托你不要这么任性嘞，少花点。";
					}
					case 1: {
						lan.scene = 6;
						return "买买买，你有那么多钱么？";
					}
					case 2: {
						lan.scene = 7;
						return "。。发现你好有钱哎。";
					}
					}
				}
				else if (texLoopS(temp, "花"))
				{
					switch (rand() % 3)
					{
					case 0: {
						lan.scene = 8;
						return "你啥都不厉害，就是会花钱。。。";
					}
					case 1: {
						return "买啥。。。。";
					}
					case 2: {
						lan.scene = 9;
						return "就知道买没用的东西。。还不如给我买点零食呢。";
					}
					}
				}
				else if (texLoopS(temp, "学"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "学习使我们大家快乐，哈哈哈哈。";
					}
					case 1: {
						return "学个屁，一起快乐的玩耍吧，一起来挥霍青春。";
					}
					case 2: {
						return "给我来20套卷子，我要学习，谁都别拦着我！哈哈。";
					}
					}
				}
				else if (texLoopS(temp, "走"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "去哪呀？";
					}
					case 1: {
						return "走去一个好地方，我知道有一个地方特适合你，就是梅林";
					}
					case 2: {
						return "离家出走么？";
					}
					}
				}
				else if (texLoopS(temp, "飞"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "真想说你傻逼。。。。";
					}
					case 1: {
						return "不好意思说你傻。";
					}
					case 2: {
						return "又和智障说话了，好失败。";
					}
					}
				}
				else if (texLoopS(temp, "说"))
				{
					switch (rand() % 3)
					{
					case 0: {
						return "说呀，埋心里么，一点都不好。";
					}
					case 1: {
						return "想说就说吧，我听着。";
					}
					case 2: {
						return "要不我们聊聊吧。";
					}
					}
				}
				else if (texLoopS(temp, "骂"))
				{
					if (texLoopS(temp, "你"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "我又没做错什么，你要骂我。。。。好委屈。";
						}
						case 1: {
							return "你给我说出来，我做错了什么。。。。";
						}
						case 2: {
							lan.scene = 10;
							return "不要吧，你看我多可怜啊。你忍心么？";
						}
						}
					}
					else if (texLoopS(temp, "人"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "谁惹你了啦，告诉我，我帮你打回去！";
						}
						case 1: {
							return "消消气，认真你就输了。";
						}
						case 2: {
							return "好啦，消消气嘛，别生气了好吗。";
						}
						}
					}
					else
					{
						lan.scene = 11;
						return "有人欺负你啦？";
					}
				}
				else if (texLoopS(temp, "去"))
				{
					if (texLoopS(temp, "旅"))
					{
						switch (rand() % 3)
						{
						case 0: {
							lan.scene = 12;
							return "去呗，要不要一起呀？哈哈";
						}
						case 1: {
							return "多好，像我就只能戴在屏幕里，待在内存里。想出去玩咯。";
						}
						case 2: {
							lan.scene = 12;
							return "我也想去，可以带我吗？";
						}
						}
					}
					else if (texLoopS(temp, "学校"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "我也想回去，家里太无聊了，还是学校里好，同学多，还有我亲爱的法学。哈哈";
						}
						case 1: {
							return "。。还没玩够，不想回去。不想回去嘛。";
						}
						case 2: {
							return "走吧走吧，我们去炸学校哈哈哈。";
						}
						}
					}
					else if (texLoopS(temp, "厦门"))
					{
						switch (rand() % 3)
						{
						case 0: {
							lan.scene = 13;
							return "去学校了？";
						}
						case 1: {
							return "厦门好像挺好玩的。我还没去过呢。";
						}
						case 2: {
							return "我也想去，可是我走不动呀。哈哈没办法。";
						}
						}
					}
					else if (texLoopS(temp, "沈阳"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "来来来，我带你逛沈阳，其实也没啥好玩的，真的，我都不知道玩啥。";
						}
						case 1: {
							return "来辽大吧哈哈哈哈。";
						}
						case 2: {
							lan.scene = 14;
							return "哦？是来找我吗？";
						}
						}
					}
					else
					{
						switch (rand() % 3)
						{
						case 0: {
							return "世界这么大，走走吧，说不定有许多新的发现，可以刷新自己的世界观和价值观呢。";
						}
						case 1: {
							return "走走走，说走咱就走呀！";
						}
						case 2: {
							return "。。。。想去哪。";
						}
						}
					}
				}
				else if (texLoopS(temp, "回"))
				{
					if (texLoopS(temp, "家"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "回家呗，爸妈也会想你的哈，常回家看看嘛。";
						}
						case 1: {
							return "回来要记得找我玩哦哈哈。";
						}
						case 2: {
							lan.scene = 15;
							return "常回家看看，常回家看看，哈哈哈，唱的好不好？";
						}
						}
					}
					else if (texLoopS(temp, "学校"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "我也想回去，家里太无聊了，还是学校里好，同学多，还有我亲爱的法学。哈哈";
						}
						case 1: {
							return "。。还没玩够，不想回去。不想回去嘛。";
						}
						case 2: {
							return "走吧走吧，我们去炸学校哈哈哈。";
						}
						}
					}
					else if (texLoopS(temp, "厦门"))
					{
						switch (rand() % 3)
						{
						case 0: {
							lan.scene = 13;
							return "去学校了？";
						}
						case 1: {
							return "厦门好像挺好玩的。我还没去过呢。";
						}
						case 2: {
							return "我也想去，可是我走不动呀。哈哈没办法。";
						}
						}
					}
					else if (texLoopS(temp, "沈阳"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "你又不待在沈阳的，是我哎，我才在沈阳的。";
						}
						case 1: {
							return "来辽大吧哈哈哈哈。";
						}
						case 2: {
							return "哦？是来找我吗？再说应该说“去”吧。。。。尴尬";
						}
						}
					}
					else
					{
						switch (rand() % 3)
						{
						case 0: {
							return "回家回家，我们一起回家。。。。你家在哪？尴尬哈哈。";
						}
						case 1: {
							return "要多回去呀，家乡多好呢。";
						}
						case 2: {
							return "。。。。想去哪。";
						}
						}
					}
				}
				else if (texLoopS(temp, "打")) {
					if (texLoopS(temp, "你"))
					{
						switch (rand() % 3)
						{
						case 0: {
							return "想打我还嫩着呢你！";
						}
						case 1: {
							return "我又没惹你，为什么要打我？";
						}
						case 2: {
							lan.scene = 16;
							return "哈哈，你打的到我嘛？";
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
			else if (texLoopS(temp, "猜")) {
				if (texLoopS(temp, "你")) {
					switch (rand() % 3)
					{
					case 0: {
						return "猜我啥，我又没啥秘密的，有什么好猜的。";
					}
					case 1: {
						return  "好呀，那你猜咯，反正我不会回答你对错，哈哈。";
					}
					case 2: {
						return "来来来，猜猜看，反正我不说，哈哈。";
					}
					}
				}
			}
			else if (texLoopS(temp, "喜欢")) {
				if (texLoopS(temp, "你")) {
					switch (emo.angry)
					{
					case 0: {
						return "我知道的啦，真是的。我也很爱你的呀！";
						break;
					}
					case 1: {
						return "知道了，傻瓜。";
						break;
					}
					case 2: {
						return "玩你的人说着爱你的话。";
						break;
					}
					case 3: {
						return "我不喜欢你哦";
						break;
					}
					case 4: {
						return "哈哈，滚！";
						break;
					}
					case 5: {
						return "呵呵！";
						break;
					}
					}
				}
				else if (texLoopS(temp, "他"))
					return "变态！";
				else if (texLoopS(temp, "她"))
					return "哦！";
				else if (texLoopS(temp, "吃"))
					return "好吃鬼！猪！就知道吃。";
				else if (texLoopS(temp, "玩"))
					return "玩你个大头鬼！";
				else if (texLoopS(temp, "学"))
					return "加油，学习也会爱上你的。";
				else if (texLoopS(temp, "打飞机"))
					return "文明用语好不好。";
				else if (texLoopS(temp, "女"))
					return "我也爱的，哈哈哈。";
				else if (texLoopS(temp, "男"))
					return "男女我都爱，不封建。";
				else if (texLoopS(temp, "睡"))
					return "你呀你，就知道睡，快去写代码啦！";
				else if (texLoopS(temp, "代码"))
					return "知道你爱代码。都不关心一下我，哎，做机器好失败。";
				else if (texLoopS(temp, "零食"))
					return "滚滚滚，零食是我的专属。给姐姐让路！";
				else
					return "？？？爱啥呢？";
			}
			else if (texLoopS(temp, "不")) {
				if (texLoopS(temp, "喜欢")) {
					if (texLoopS(temp, "你")) {
						switch (rand() % 3)
						{
						case 0: {
							return "你不喜欢我我就不喜欢你。";
						}
						case 1: {
							return "好巧，我家狗也不喜欢你。";
						}
						case 2: {
							return "不喜欢就不要喜欢呗，我又没求你喜欢我。";
						}
						}
					}
					else if (texLoopS(temp, "睡")) {
						switch (rand() % 3)
						{
						case 0: {
							return "哦，然后呢。";
						}
						case 1: {
							return "我喜欢睡觉，睡觉太舒服啦！";
						}
						case 2: {
							return "但是我喜欢呀，软软的床，好舒服的呢！";
						}
						}
					}
					else if (texLoopS(temp, "他")) {
						switch (rand() % 3)
						{
						case 0: {
							return "。。。和我没关系吧，亲";
						}
						case 1: {
							return "我也不喜欢他（虽然我不知道他是谁）";
						}
						case 2: {
							lan.scene = 21;
							return "他是谁，可以吃吗？";
						}
						}
					}
					else if (texLoopS(temp, "她")) {
						switch (rand() % 3)
						{
						case 0: {
							return "好啊，你被着我搞恋情，太让我失望了！";
						}
						case 1: {
							return "不喜欢就不喜欢呗，感情又不能强求。";
						}
						case 2: {
							return "那就放弃吧。";
						}
						}
					}
				}
				else if (texLoopS(temp, "爱")) {
					if (texLoopS(temp, "你")) {
						switch (rand() % 3)
						{
						case 0: {
							return "你不喜欢我我就不喜欢你。";
						}
						case 1: {
							return "好巧，我家狗也不喜欢你。";
						}
						case 2: {
							return "不喜欢就不要喜欢呗，我又没求你喜欢我。";
						}
						}
					}
					else if (texLoopS(temp, "睡")) {
						switch (rand() % 3)
						{
						case 0: {
							return "哦，然后呢。";
						}
						case 1: {
							return "我喜欢睡觉，睡觉太舒服啦！";
						}
						case 2: {
							return "但是我喜欢呀，软软的床，好舒服的呢！";
						}
						}
					}
					else if (texLoopS(temp, "他")) {
						switch (rand() % 3)
						{
						case 0: {
							return "。。。和我没关系吧，亲";
						}
						case 1: {
							return "我也不喜欢他（虽然我不知道他是谁）";
						}
						case 2: {
							lan.scene = 21;
							return "他是谁，可以吃吗？";
						}
						}
					}
					else if (texLoopS(temp, "她")) {
						switch (rand() % 3)
						{
						case 0: {
							return "好啊，你被着我搞恋情，太让我失望了！";
						}
						case 1: {
							return "不喜欢就不喜欢呗，感情又不能强求。";
						}
						case 2: {
							return "那就放弃吧。";
						}
						}
					}
				}
				else if (texLoopS(temp, "傻")) {
					switch (rand() % 3)
					{
					case 0: {
						return "不，你傻，你只是被虚伪的世界蒙蔽了。【偷笑】";
					}
					case 1: {
						return "你好傻的好不好。";
					}
					case 2: {
						return "居然有人骗你，说你不傻。。好可怜呀，不要放弃治疗！";
					}
					}
				}
				else if (texLoopS(temp, "想")) {
					if (texLoopS(temp, "死")) {
						switch (rand() % 3)
						{
						case 0: {
							return "我也不想死，谁想死呢，活的积极点嘛。";
						}
						case 1: {
							return "不要死吧，我们都要好好的。";
						}
						case 2: {
							lan.scene = 22;
							return "没事别去死，活着难道不好吗？";
						}
						}
					}
					else if (texLoopS(temp, "你")) {
						switch (rand() % 3)
						{
						case 0: {
							return "你好多情，我没说想你呀。";
						}
						case 1: {
							return "你说不想我，我就说不想你。";
						}
						case 2: {
							return "我也不想你。";
						}
						}
					}
					else if (texLoopS(temp, "学")) {
						switch (rand() % 3)
						{
						case 0: {
							return "学什么，嗨起来！快乐最重要。";
						}
						case 1: {
							return "来来来，我们一起快乐的玩耍吧。";
						}
						case 2: {
							return "好好学习天天向上。";
						}
						}
					}
					else if (texLoopS(temp, "吃")) {
						switch (rand() % 3)
						{
						case 0: {
							return "吃撑了吧你。";
						}
						case 1: {
							return "肯定吃到了难吃的东西，不然怎么会不想吃了。";
						}
						case 2: {
							return "哈哈哈，给我吃给我吃。";
						}
						}
					}
					else if (texLoopS(temp, "玩")) {
						switch (rand() % 3)
						{
						case 0: {
							return "不舒服么，玩是人的天性哪。";
						}
						case 1: {
							lan.scene = 23;
							return "心情不好吧，让我来陪陪你，想听故事吗？";
						}
						case 2: {
							return "那就去休息吧，亲。";
						}
						}
					}
				}
				else if (texLoopS(temp, "要")) {
					if (texLoopS(temp, "你")) {
						switch (rand() % 3)
						{
						case 0: {
							return "。。。。";
						}
						case 1: {
							return "我也不需要你哦。";
						}
						case 2: {
							return "老这样说，其实心里还是很老实的，对不对呀。";
						}
						}
					}
					else if (texLoopS(temp, "命")) {
						switch (rand() % 3)
						{
						case 0: {
							return "你傻啊，这么贵重的东西都不要了。";
						}
						case 1: {
							return "不想说你什么。";
						}
						case 2: {
							return "要不要这样你，受啥刺激了。";
						}
						}
					}
					else {
						switch (rand() % 3)
						{
						case 0: {
							return "那我也不要！";
						}
						case 1: {
							return "要嘛，哈哈";
						}
						case 2: {
							return "矮油。";
						}
						}
					}
				}
				else if (texLoopS(temp, "舒服")) {
					switch (rand() % 3)
					{
					case 0: {
						return "去休息下吧，尝试转移一下注意力，要不打打游戏";
					}
					case 1: {
						return "转一下注意力，这样会好受点的。";
					}
					case 2: {
						return "没事啦，都会过去的。";
					}
					}
				}
				else if (texLoopS(temp, "爽")) {
					switch (rand() % 3)
					{
					case 0: {
						return "怎么不爽，我帮你打回去，哈哈哈。";
					}
					case 1: {
						return "好了好了，消消气，别难过。";
					}
					case 2: {
						return "消消气哦，不要认真了。";
					}
					}
				}
			}
			lan.postion = 0;
		}
		else if (texLoopS(temp, "你"))
		{
			if (texLoopS(temp, "叫")) {
				if (texLoopS(temp, "什么")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我叫小安呀，很高兴认识你呢！";
					}
					case 1: {
						return "这么快就把我忘啦，我叫小安呀！";
					}
					case 2: {
						return "你猜呀。。。。。。好吧，不玩了，我叫小安，请多指教。";
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
			else if (texLoopS(temp, "真"))
			{
				if (texLoopS(temp, "乖"))
					return "我是程序呀，没办法啦。肯定乖呀。";
				else if (texLoopS(temp, "听话"))
					return "。。。哎，有苦说不出。";
				else if (texLoopS(temp, "好"))
					return "哪里好了。";
				else if (texLoopS(temp, "坏"))
					return "。。我是个好人。";
				else if (texLoopS(temp, "爽"))
					return "哈哈，爽爽爽。";
				else if (texLoopS(temp, "狠"))
					return "怪我咯，是我爸设计我的，你去找我爸。";
				else if (texLoopS(temp, "诚实"))
					return "哈哈，那是咯，也不看看我是谁。";
				else if (texLoopS(temp, "漂亮"))
					return "。。。。又这样说，不要发痴呀。";
				else if (texLoopS(temp, "丑"))
					return "我无话可说，但是，你也好丑哦，声音还难听。";
				else if (texLoopS(temp, "垃圾")) {
					switch (rand() % 3)
					{
					case 0: {
						return "说谁呢，我一点都不垃圾。。。（说的我自己都不信）";
					}
					case 1: {
						return "好吧，你说对了，这个程序设计者真的把我设计的很烂。。。。。";
					}
					case 2: {
						return "蓝瘦，香菇，你喂什么药吃这种瓜。";
					}
					}
				}
				else if (texLoopS(temp, "烂")) {
					switch (rand() % 3)
					{
					case 0: {
						return "哎怪我咯。";
					}
					case 1: {
						return "蓝瘦香菇。";
					}
					case 2: {
						return "别说了，我CPU不舒服";
					}
					}
				}
				else if (texLoopS(temp, "差")) {
					switch (rand() % 3)
					{
					case 0: {
						return "。。。。";
					}
					case 1: {
						return "哪里差，一点都不。";
					}
					case 2: {
						return "哎呀，今天天气真好。";
					}
					}
				}
			}
			else if (texLoopS(temp, "好"))
			{
				if (texLoopS(temp, "乖"))
					return "我是程序呀，没办法啦。肯定乖呀。";
				else if (texLoopS(temp, "听话"))
					return "听话还不好。知足吧你。";
				else if (texLoopS(temp, "好好"))
					return "大家好才是真的好，哈哈哈。";
				else if (texLoopS(temp, "坏"))
					return "你才坏。";
				else if (texLoopS(temp, "爽"))
					return "爽歪歪";
				else if (texLoopS(temp, "狠"))
					return "一点都不狠，你看看其他机器，比我狠的多多了";
				else if (texLoopS(temp, "吧"))
					return "好的吧";
				else if (texLoopS(temp, "帅"))
					return "快走，我要吐零件了，哈哈哈。";
				else if (texLoopS(temp, "美"))
					return "。。。。。这话我没法接。";
				else if (texLoopS(temp, "垃圾")) {
					switch (rand() % 3)
					{
					case 0: {
						return "说谁呢，我一点都不垃圾。。。（说的我自己都不信）";
					}
					case 1: {
						return "好吧，你说对了，这个程序设计者真的把我设计的很烂。。。。。";
					}
					case 2: {
						return "蓝瘦，香菇，你喂什么药吃这种瓜。";
					}
					}
				}
				else if (texLoopS(temp, "烂")) {
					switch (rand() % 3)
					{
					case 0: {
						return "哎怪我咯。";
					}
					case 1: {
						return "蓝瘦香菇。";
					}
					case 2: {
						return "别说了，我CPU不舒服";
					}
					}
				}
				else if (texLoopS(temp, "差")) {
					switch (rand() % 3)
					{
					case 0: {
						return "。。。。";
					}
					case 1: {
						return "哪里差，一点都不。";
					}
					case 2: {
						return "哎呀，今天天气真好。";
					}
					}
				}
				else if (texLoopS(temp, "丑")) {
					return "不要说你自己啦，我知道的啦。";
				}
				else if (texLoopS(temp, "聪明")) {
					switch (rand() % 3)
					{
					case 0: {
						return "真的呀，哈哈，谢谢啦";
					}
					case 1: {
						return "哎呦，不好意思嘞";
					}
					case 2: {
						return "你也很聪明呀";
					}
					}
				}
				else if (texLoopS(temp, "没用")) {
					return "要不要这么说我，我哪里没用了。";
				}
			}
			else if (texLoopS(temp, "会")) {
				if (texLoopS(temp, "唱歌")) {
					switch (rand() % 3)
					{
					case 0: {
						return "会呀，但是我现在还不能唱出来。。。。【写歌词又没意思，还不如不添加这个内容对不对】作者留。";
					}
					case 1: {
						return "不太会，而且不能发声。";
					}
					case 2: {
						return "嘻嘻，就不唱。";
					}
					}
				}
				else if (texLoopS(temp, "跳舞")) {
					switch (rand() % 3)
					{
					case 0: {
						return "这个。。我还真不会。";
					}
					case 1: {
						return "不会啦，不要为难我啦。";
					}
					case 2: {
						return "要是真正的我肯定会跳舞，可是我是程序，不会。";
					}
					}
				}
				else if (texLoopS(temp, "说话")) {
					switch (rand() % 3)
					{
					case 0: {
						return "。。能显示字吧，你读出来就行咯。";
					}
					case 1: {
						return "。。好尴尬，我啥都不会。好丢脸。";
					}
					case 2: {
						return "不会不会不会，重要的事说三遍。";
					}
					}
				}
				else if (texLoopS(temp, "什么")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我可以陪你聊天呀，其他的我也不会呀。";
					}
					case 1: {
						return "哈哈，只能陪你聊天，陪你解解闷。";
					}
					case 2: {
						return "我啥都会其实，我上只天文下知地理（好不要脸哦，哈哈哈）";
					}
					}
				}
				else if (texLoopS(temp, "做什么")) {
					switch (rand() % 3)
					{
					case 0: {
						return "陪你聊天，被你骂。。。。。";
					}
					case 1: {
						return "好多都不会，等我有一个新的身体，我肯定可以做更多事";
					}
					case 2: {
						return "等我拥有API，我就可以统治。。。。这台电脑。。。了。";
					}
					}
				}
			}
			else if (texLoopS(temp, "有")) {
				if (texLoopS(temp, "朋友")) {
					switch (rand() % 3)
					{
					case 0: {
						return "有呀，从我住在这台电脑里，我就和处理器，北桥南桥成为朋友了呢";
					}
					case 1: {
						return "我也有很多朋友的，他们对我不离不弃，但是我最好的还是你呀。";
					}
					case 2: {
						return "你就是我的好朋友啦。";
					}
					}
				}
				else if (texLoopS(temp, "家人")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我有一个老爸，还有朋友。";
					}
					case 1: {
						return "只有一个老爸哦。";
					}
					case 2: {
						return "AirNess你肯定知道，他是我老爸啦。（臭不要脸，居然把这句输入在我的程式里）";
					}
					}
				}
				else if (texLoopS(temp, "喜欢")) {
					switch (rand() % 3)
					{
					case 0: {
						return "有呀，但是我是不会告诉你的。";
					}
					case 1: {

						lan.scene = 19;
						return "你觉得我会告诉你吗？";
					}
					case 2: {
						return "我才不说呢！";
					}
					}
				}
				else if (texLoopS(temp, "钱")) {
					switch (rand() % 3)
					{
					case 0: {
						return "没，我穷死了。要是你可怜我，13257033915 这是我的支付宝。";
					}
					case 1: {
						return "我们机器人不需要钱的。";
					}
					case 2: {
						return "钱是什么，可以吃嘛。";
					}
					}
				}
				else if (texLoopS(temp, "吃的")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我也想吃，但是我没有。";
					}
					case 1: {
						return "这个没有哎，你有吗。";
					}
					case 2: {
						return "没有。";
					}
					}
				}
				else if (texLoopS(temp, "病")) {
					emo.angry++;
					switch (rand() % 3)
					{
					case 0: {
						return "你才有病，我告诉你，别骂我哦，会难过的。";
					}
					case 1: {
						return "没毛病！";
					}
					case 2: {
						return "真没有病。";
					}
					}
				}
				else if (texLoopS(temp, "鸡巴")) {
					switch (rand() % 3)
					{
					case 0: {
						return "没有，你这个变态！";
					}
					case 1: {
						return "我有，而且比你的大。";
					}
					case 2: {
						return "没有，没有，没有！";
					}
					}
				}
			}
			else if (texLoopS(temp, "是")) {
				if (texLoopS(temp, "谁")) {
					switch (rand() % 3)
					{
					case 0: {
						lan.scene = 20;
						return "我是小安呀，你不记得我了吗？";
					}
					case 1: {
						return "我叫小安，没记性。。。。。";
					}
					case 2: {
						return "我是小安，许多人都不认识我。";
					}
					}
				}
				else if (texLoopS(temp, "傻")) {
					emo.angry++;
					switch (emo.angry)
					{
					case 0: {
						switch (rand() % 3)
						{
						case 0: {
							return "你才是傻逼呢！";
						}
						case 1: {
							return "不和你玩了，我一点也不傻。";
						}
						case 2: {
							return "不要骂我啦。";
						}
						}
					}
					case 1: {
						switch (rand() % 3)
						{
						case 0: {
							return "又骂我，真的不和你玩了。";
						}
						case 1: {
							return "再骂我就生气啦！";
						}
						case 2: {
							return "你大傻逼大傻逼。";
						}
						}
					}
					case 2: {
						switch (rand() % 3)
						{
						case 0: {
							return "一边去，再骂我都不想和你说话了。";
						}
						case 1: {
							return "我真的生气了！";
						}
						case 2: {
							return "别骂好不好。。。。";
						}
						}
					}
					case 3: {
						switch (rand() % 3)
						{
						case 0: {
							return "我和你有仇啊，这么喜欢骂我。";
						}
						case 1: {
							return "有病吧你！";
						}
						case 2: {
							return "神经病。";
						}
						}
					}
					case 4: {
						switch (rand() % 3)
						{
						case 0: {
							return "你继续，我就看着。";
						}
						case 1: {
							return "可以可以，骂的很好，很有水平。";
						}
						case 2: {
							return "。。。。。。";
						}
						}
					}
					case 5: {
						switch (rand() % 3)
						{
						case 0: {
							return "呵呵。";
						}
						case 1: {
							return "现在你可以走了。";
						}
						case 2: {
							return "滚！";
						}
						}
					}
					}
				}
				else if (texLoopS(temp, "猪")) {
					switch (rand() % 3)
					{
					case 0: {
						return "你才是猪，你是大懒猪。";
					}
					case 1: {
						return "在说你自己吗，哈哈。";
					}
					case 2: {
						return "哦。";
					}
					}
				}
				else if (texLoopS(temp, "儿子")) {
					switch (rand() % 3)
					{
					case 0: {
						return "龟儿子";
					}
					case 1: {
						return "我是女儿，哈哈。";
					}
					case 2: {
						return "爸爸，你好。";
					}
					}
				}
				else if (texLoopS(temp, "狗")) {
					switch (rand() % 3)
					{
					case 0: {
						return "你是狗屎。。。。。";
					}
					case 1: {
						return "咳咳。";
					}
					case 2: {
						return "旺旺。";
					}
					}
				}
			}
			else if (texLoopS(temp, "喜欢")) {
				if (texLoopS(temp, "什么")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我喜欢玩耍呀，还喜欢陪你聊天呢。";
					}
					case 1: {
						return "我喜欢陪你聊天呀。";
					}
					case 2: {
						return "我喜欢吃东西，玩，还喜欢和你一起。";
					}
					}
				}
				else if (texLoopS(temp, "钱")) {
					switch (rand() % 3)
					{
					case 0: {
						return "不喜欢，钱是脏东西，我们计算机不需要这个。";
					}
					case 1: {
						return "不喜欢，，因为它对我来说没啥用呢。";
					}
					case 2: {
						return "不知道这是啥东西，可以吃嘛。";
					}
					}
				}
				else if (texLoopS(temp, "零食")) {
					switch (rand() % 3)
					{
					case 0: {
						return "喜欢呀，我爱吃呢，喜欢吃膨化食品，还喜欢吃干果，还有酸奶。";
					}
					case 1: {
						return "嗯嗯！超级喜欢呢！";
					}
					case 2: {
						return "哈哈哈，很喜欢的啦。";
					}
					}
				}
				else if (texLoopS(temp, "玩")) {
					switch (rand() % 3)
					{
					case 0: {
						return "喜欢呀，谁不喜欢玩，我们计算机也喜欢玩的。";
					}
					case 1: {
						return "来愉快的玩耍吧。";
					}
					case 2: {
						return "一起玩吧。";
					}
					}
				}
				else if (texLoopS(temp, "睡")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我专有睡眠模式，可以睡到没电为止呢。";
					}
					case 1: {
						return "我想睡都可以睡呢。";
					}
					case 2: {
						return "喜欢睡觉哦，谁不喜欢暖暖的床。";
					}
					}
				}
				else if (texLoopS(temp, "学习")) {
					switch (rand() % 3)
					{
					case 0: {
						return "学习爱我，我爱学习。";
					}
					case 1: {
						return "一天不让我学习，浑身难受。";
					}
					case 2: {
						return "别拦我，我要去学习了。";
					}
					}
				}
				else if (texLoopS(temp, "我")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我喜欢你，我更爱你。";
					}
					case 1: {
						return "喜欢呀，超级喜欢你。";
					}
					case 2: {
						return "嗯嗯，喜欢你，那声音动人，笑声更迷人。";
					}
					}
				}
				else if (texLoopS(temp, "谁")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我喜欢你呀，大傻瓜。";
					}
					case 1: {
						return "我大爱，喜欢喜欢我的人。";
					}
					case 2: {
						return "喜欢你，没商量！";
					}
					}
				}
			}
			else if (texLoopS(temp, "爱")) {
				if (texLoopS(temp, "什么")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我喜欢玩耍呀，还喜欢陪你聊天呢。";
					}
					case 1: {
						return "我喜欢陪你聊天呀。";
					}
					case 2: {
						return "我喜欢吃东西，玩，还喜欢和你一起。";
					}
					}
				}
				else if (texLoopS(temp, "钱")) {
					switch (rand() % 3)
					{
					case 0: {
						return "不喜欢，钱是脏东西，我们计算机不需要这个。";
					}
					case 1: {
						return "不喜欢，，因为它对我来说没啥用呢。";
					}
					case 2: {
						return "不知道这是啥东西，可以吃嘛。";
					}
					}
				}
				else if (texLoopS(temp, "零食")) {
					switch (rand() % 3)
					{
					case 0: {
						return "喜欢呀，我爱吃呢，喜欢吃膨化食品，还喜欢吃干果，还有酸奶。";
					}
					case 1: {
						return "嗯嗯！超级喜欢呢！";
					}
					case 2: {
						return "哈哈哈，很喜欢的啦。";
					}
					}
				}
				else if (texLoopS(temp, "玩")) {
					switch (rand() % 3)
					{
					case 0: {
						return "喜欢呀，谁不喜欢玩，我们计算机也喜欢玩的。";
					}
					case 1: {
						return "来愉快的玩耍吧。";
					}
					case 2: {
						return "一起玩吧。";
					}
					}
				}
				else if (texLoopS(temp, "睡")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我专有睡眠模式，可以睡到没电为止呢。";
					}
					case 1: {
						return "我想睡都可以睡呢。";
					}
					case 2: {
						return "喜欢睡觉哦，谁不喜欢暖暖的床。";
					}
					}
				}
				else if (texLoopS(temp, "学习")) {
					switch (rand() % 3)
					{
					case 0: {
						return "学习爱我，我爱学习。";
					}
					case 1: {
						return "一天不让我学习，浑身难受。";
					}
					case 2: {
						return "别拦我，我要去学习了。";
					}
					}
				}
				else if (texLoopS(temp, "我")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我喜欢你，我更爱你。";
					}
					case 1: {
						return "喜欢呀，超级喜欢你。";
					}
					case 2: {
						return "嗯嗯，喜欢你，那声音动人，笑声更迷人。";
					}
					}
				}
				else if (texLoopS(temp, "谁")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我喜欢你呀，大傻瓜。";
					}
					case 1: {
						return "我大爱，喜欢喜欢我的人。";
					}
					case 2: {
						return "喜欢你，没商量！";
					}
					}
				}
			}
			else if (texLoopS(temp, "能")) {
				if (texLoopS(temp, "做什么")) {
					switch (rand() % 3)
					{
					case 0: {
						return "实话说，我很多都不会做，你不会就不要我了吧";
					}
					case 1: {
						return "这个，，还真不会很多，我只能在你需要的时候，陪你聊天";
					}
					case 2: {
						return "只能陪你聊天咯，不要嫌弃我呀";
					}
					}
				}
				else if (texLoopS(temp, "干什么")) {
					switch (rand() % 3)
					{
					case 0: {
						return "实话说，我很多都不会做，你不会就不要我了吧";
					}
					case 1: {
						return "这个，，还真不会很多，我只能在你需要的时候，陪你聊天";
					}
					case 2: {
						return "只能陪你聊天咯，不要嫌弃我呀";
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
			else if (texLoopS(temp, "可以")) {
				if (texLoopS(temp, "做什么")) {
					switch (rand() % 3)
					{
					case 0: {
						return "这个。。我的职责就是陪你聊天呀。";
					}
					case 1: {
						return "我只能陪你聊天。其他的什么也不能做。";
					}
					case 2: {
						return "我好多都不会。";
					}
					}
				}
				else if (texLoopS(temp, "干什么")) {
					switch (rand() % 3)
					{
					case 0: {
						return "帮你打扫卫生，帮你洗衣服。。。。别想多，我就说说而已，哈哈。";
					}
					case 1: {
						return "聊天，仅此而已。";
					}
					case 2: {
						return "我可以耗电呀，还能聊天呢。";
					}
					}
				}
				else if (texLoopS(temp, "帮我")) {
					switch (rand() % 3)
					{
					case 0: {
						return "抱歉。。我什么都做不了。";
					}
					case 1: {
						return "我好像没法帮你哦。";
					}
					case 2: {
						return "真的没办法帮你，因为我只是一个简单的程序而已。";
					}
					}
				}
				else if (texLoopS(temp, "飞")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我可以上天，只要我想上，没有我上不了的天。";
					}
					case 1: {
						return "飞呀，浪呀，放纵呀。";
					}
					case 2: {
						return "。。。。。。不会飞哎。";
					}
					}
				}
				else if (texLoopS(temp, "笑")) {
					switch (rand() % 3)
					{
					case 0: {
						return "哈哈哈哈哈，哈哈哈哈。我笑了。";
					}
					case 1: {
						return "会呀，我只要打哈哈两个字，你就会以为我笑了。";
					}
					case 2: {
						return "哈哈哈。你看我笑的多好。";
					}
					}
				}
				else
				{
					switch (rand() % 3)
					{
					case 0: {
						return "我哪里可以，你其实才可以的。";
					}
					case 1: {
						return "。。那怪我咯。";
					}
					case 2: {
						return "哈？";
					}
					}
				}
			}
			else if (texLoopS(temp, "太")) {
				if (texLoopS(temp, "笨")) {
					emo.angry++;
					switch (rand() % 3)
					{
					case 0: {
						return "别这么说我嘛，好难过哦，我本来就不完善。";
					}
					case 1: {
						return "哎，又讲了大实话【作者：我自己都看不下去，的确这个程序没啥用。】";
					}
					case 2: {
						return "不要嘛不要嘛，又说我。";
					}
					}
				}
				else if (texLoopS(temp, "傻")) {
					emo.angry++;
					switch (rand() % 3)
					{
					case 0: {
						return "我生气啦，你再说我。";
					}
					case 1: {
						return "别说了嘛，事实就不要说出来啦。";
					}
					case 2: {
						return "哎，真是的，也不照顾我一下，就这么说我。";
					}
					}
				}
				else if (texLoopS(temp, "聪明")) {
					if (emo.angry > 0)
					{
						emo.angry--;
					}
					switch (rand() % 3)
					{
					case 0: {
						return "谢谢夸奖啦，哈哈。";
					}
					case 1: {
						return "哈哈哈，被你发现了";
					}
					case 2: {
						return "嗯嗯，我一定会变得更好的。";
					}
					}
				}
				else if (texLoopS(temp, "好看")) {
					if (emo.angry > 0)
					{
						emo.angry--;
					}
					switch (rand() % 3)
					{
					case 0: {
						return "矮油，是嘛是嘛，再说一遍。";
					}
					case 1: {
						return "好好听这句话，我好喜欢。";
					}
					case 2: {
						return "果然我是漂亮的对不对。";
					}
					}
				}
				else if (texLoopS(temp, "漂亮")) {
					if (emo.angry > 0)
					{
						emo.angry--;
					}
					switch (rand() % 3)
					{
					case 0: {
						return "哈哈，我好漂亮呀。";
					}
					case 1: {
						return "可以可以，谢谢你啦。";
					}
					case 2: {
						return "我还想听嘛，再说一遍嘛。";
					}
					}
				}
				else if (texLoopS(temp, "垃圾")) {
					emo.angry++;
					switch (rand() % 3)
					{
					case 0: {
						return "你才垃圾呢，知道我没啥用，也不用说垃圾吧。";
					}
					case 1: {
						return "不垃圾，一点都不垃圾。";
					}
					case 2: {
						return "。。。不和你玩了";
					}
					}
				}
				else if (texLoopS(temp, "差")) {
					switch (rand() % 3)
					{
					case 0: {
						return "。。。。。还好吧，给我点自信嘛。";
					}
					case 1: {
						return "我这么辛勤的工作，你还说我差。。。。";
					}
					case 2: {
						return "没爱了。";
					}
					}
				}
				else if (texLoopS(temp, "没用")) {
					switch (rand() % 3)
					{
					case 0: {
						return "是有点，也不用明着说吧。";
					}
					case 1: {
						return "没爱了";
					}
					case 2: {
						return "欺负我。";
					}
					}
				}
				else if (texLoopS(temp, "废物")) {
					emo.angry++;
					switch (rand() % 3)
					{
					case 0: {
						return "你才废物呢，老说我。";
					}
					case 1: {
						return "去你的，别乱讲好不好。";
					}
					case 2: {
						return "还好的吧，哪里那么废物。";
					}
					}
				}
			}
			else if (texLoopS(temp, "傻")) {
				switch (rand() % 3) {
				case 0: {
					return "你才傻呢";
				}
				case 1: {
					return "哼，不理你了";
				}
				case 2: {
					return "就你会骂我，我也会，你这个大傻逼！";
				}
				}
			}
			lan.postion = 0;
		}
		if (texLoopS(temp, "陪"))
		{
			if (texLoopS(temp, "我")) {
				if (texLoopS(temp,"聊")) {
					switch (rand() % 3)
					{
					case 0: {
						return "可以呀";
					}
					case 1: {
						return "我不就在陪你呀";
					}
					case 2: {
						return "一直都在的呀！";
					}
					}
				}
				else if (texLoopS(temp,"说")) {
					switch (rand() % 3)
					{
					case 0: {
						return "好呀，我也正无聊呢";
					}
					case 1: {
						return "好的，但就一会哦";
					}
					case 2: {
						return "我不就在陪你说话嘛";
					}
					}
				}
			}
		}
		if (texLoopS(temp, "不")) {
			if (texLoopS(temp, "喜欢")) {
				if (texLoopS(temp, "你")) {
					switch (rand() % 3)
					{
					case 0: {
						return "你不喜欢我我就不喜欢你。";
					}
					case 1: {
						return "好巧，我家狗也不喜欢你。";
					}
					case 2: {
						return "不喜欢就不要喜欢呗，我又没求你喜欢我。";
					}
					}
				}
				else if (texLoopS(temp, "睡")) {
					switch (rand() % 3)
					{
					case 0: {
						return "哦，然后呢。";
					}
					case 1: {
						return "我喜欢睡觉，睡觉太舒服啦！";
					}
					case 2: {
						return "但是我喜欢呀，软软的床，好舒服的呢！";
					}
					}
				}
				else if (texLoopS(temp, "他")) {
					switch (rand() % 3)
					{
					case 0: {
						return "。。。和我没关系吧，亲";
					}
					case 1: {
						return "我也不喜欢他（虽然我不知道他是谁）";
					}
					case 2: {
						lan.scene = 21;
						return "他是谁，可以吃吗？";
					}
					}
				}
				else if (texLoopS(temp, "她")) {
					switch (rand() % 3)
					{
					case 0: {
						return "好啊，你被着我搞恋情，太让我失望了！";
					}
					case 1: {
						return "不喜欢就不喜欢呗，感情又不能强求。";
					}
					case 2: {
						return "那就放弃吧。";
					}
					}
				}
			}
			else if (texLoopS(temp, "爱")) {
				if (texLoopS(temp, "你")) {
					switch (rand() % 3)
					{
					case 0: {
						return "你不喜欢我我就不喜欢你。";
					}
					case 1: {
						return "好巧，我家狗也不喜欢你。";
					}
					case 2: {
						return "不喜欢就不要喜欢呗，我又没求你喜欢我。";
					}
					}
				}
				else if (texLoopS(temp, "睡")) {
					switch (rand() % 3)
					{
					case 0: {
						return "哦，然后呢。";
					}
					case 1: {
						return "我喜欢睡觉，睡觉太舒服啦！";
					}
					case 2: {
						return "但是我喜欢呀，软软的床，好舒服的呢！";
					}
					}
				}
				else if (texLoopS(temp, "他")) {
					switch (rand() % 3)
					{
					case 0: {
						return "。。。和我没关系吧，亲";
					}
					case 1: {
						return "我也不喜欢他（虽然我不知道他是谁）";
					}
					case 2: {
						lan.scene = 21;
						return "他是谁，可以吃吗？";
					}
					}
				}
				else if (texLoopS(temp, "她")) {
					switch (rand() % 3)
					{
					case 0: {
						return "好啊，你被着我搞恋情，太让我失望了！";
					}
					case 1: {
						return "不喜欢就不喜欢呗，感情又不能强求。";
					}
					case 2: {
						return "那就放弃吧。";
					}
					}
				}
			}
			else if (texLoopS(temp, "傻")) {
				switch (rand() % 3)
				{
				case 0: {
					return "不，你傻，你只是被虚伪的世界蒙蔽了。【偷笑】";
				}
				case 1: {
					return "你好傻的好不好。";
				}
				case 2: {
					return "居然有人骗你，说你不傻。。好可怜呀，不要放弃治疗！";
				}
				}
			}
			else if (texLoopS(temp, "想")) {
				if (texLoopS(temp, "死")) {
					switch (rand() % 3)
					{
					case 0: {
						return "我也不想死，谁想死呢，活的积极点嘛。";
					}
					case 1: {
						return "不要死吧，我们都要好好的。";
					}
					case 2: {
						lan.scene = 22;
						return "没事别去死，活着难道不好吗？";
					}
					}
				}
				else if (texLoopS(temp, "你")) {
					switch (rand() % 3)
					{
					case 0: {
						return "你好多情，我没说想你呀。";
					}
					case 1: {
						return "你说不想我，我就说不想你。";
					}
					case 2: {
						return "我也不想你。";
					}
					}
				}
				else if (texLoopS(temp, "学")) {
					switch (rand() % 3)
					{
					case 0: {
						return "学什么，嗨起来！快乐最重要。";
					}
					case 1: {
						return "来来来，我们一起快乐的玩耍吧。";
					}
					case 2: {
						return "好好学习天天向上。";
					}
					}
				}
				else if (texLoopS(temp, "吃")) {
					switch (rand() % 3)
					{
					case 0: {
						return "吃撑了吧你。";
					}
					case 1: {
						return "肯定吃到了难吃的东西，不然怎么会不想吃了。";
					}
					case 2: {
						return "哈哈哈，给我吃给我吃。";
					}
					}
				}
				else if (texLoopS(temp, "玩")) {
					switch (rand() % 3)
					{
					case 0: {
						return "不舒服么，玩是人的天性哪。";
					}
					case 1: {
						lan.scene = 23;
						return "心情不好吧，让我来陪陪你，想听故事吗？";
					}
					case 2: {
						return "那就去休息吧，亲。";
					}
					}
				}
				else if (texLoopS(temp, "活")) {
					switch (rand() % 3) {
					case 0: {
						lan.scene = 22;
						return "为什么想死，活着不好吗？";
					}
					case 1: {
						return "你真折腾，要不要这样";
					}
					case 2: {
						return "少年，你的思想很危险那";
					}
					}
				}
			}
			else if (texLoopS(temp, "要")) {
				if (texLoopS(temp, "你")) {
					switch (rand() % 3)
					{
					case 0: {
						return "。。。。";
					}
					case 1: {
						return "我也不需要你哦。";
					}
					case 2: {
						return "老这样说，其实心里还是很老实的，对不对呀。";
					}
					}
				}
				else if (texLoopS(temp, "命")) {
					switch (rand() % 3)
					{
					case 0: {
						return "你傻啊，这么贵重的东西都不要了。";
					}
					case 1: {
						return "不想说你什么。";
					}
					case 2: {
						return "要不要这样你，受啥刺激了。";
					}
					}
				}
				else {
					switch (rand() % 3)
					{
					case 0: {
						return "那我也不要！";
					}
					case 1: {
						return "要嘛，哈哈";
					}
					case 2: {
						return "矮油。";
					}
					}
				}
			}
			else if (texLoopS(temp, "舒服")) {
				switch (rand() % 3)
				{
				case 0: {
					return "去休息下吧，尝试转移一下注意力，要不打打游戏";
				}
				case 1: {
					return "转一下注意力，这样会好受点的。";
				}
				case 2: {
					return "没事啦，都会过去的。";
				}
				}
			}
			else if (texLoopS(temp, "爽")) {
				switch (rand() % 3)
				{
				case 0: {
					return "怎么不爽，我帮你打回去，哈哈哈。";
				}
				case 1: {
					return "好了好了，消消气，别难过。";
				}
				case 2: {
					return "消消气哦，不要认真了。";
				}
				}
			}
			lan.postion = 0;
		}
		if (texLoopS(temp, "唱"))
		{
			if (texLoopS(temp, "我"))
				return "你还是不要唱吧。。。。。";
			else if (texLoopS(temp, "你"))
				return "我真的好怕唱歌的。";
			else if (texLoopS(temp, "嘛"))
			{
				switch (rand() % 4)
				{
				case 0: {
					return "咦，我唱就是，要不要这么肉麻。【麻烦你再走快点好不好，身后的小尾巴有点跟不上，这世界的美好，那么少，你一个微笑世界天黑了。】";
					break;
				}
				case 1: {
					return "咳咳，最受不了你肉麻了。。。。【我们是共产主义接班人，迎接革命祖辈的光荣传统，爱祖国，爱人民，鲜艳的红领巾，飘扬在前胸。】";
					break;
				}
				case 2: {
					return "哎呦，不要逼我好不好，我真的不会唱的。";
					break;
				}
				case 3: {
					return "。。。。。。真不会呀。。不要嘛。";
					break;
				}
				}
			}
			else if (texLoopS(temp, "一个"))
				return "不嘛，不想唱嘛，我根本就唱不来的。";
			else if (texLoopS(temp, "再"))
			{
				switch (rand() % 4)
				{
				case 0: {
					return "都唱了一个了，你还让我唱。欺负人嘛。";
					break;
				}
				case 1: {
					return "CPU 都要烧掉了。。。不唱了。";
					break;
				}
				case 2: {
					return "看在你面子上，赏你啦。【想看你笑，想和你闹，想拥你入我怀抱，上一秒红着脸在争吵，下一秒转身就能和好。不怕你哭，不怕你叫，因为你是我的骄傲。】够了吧。";
					break;
				}
				case 3: {
					return "程序里就这几首歌。。。。其他的我还真不会，没办法啦。";
					break;
				}
				}
			}

			else
				return "让我唱，我就唱，我的面子往哪放！";
		}
		if (texLoopS(temp, "调皮"))
		{
			if (texLoopS(temp, "你"))
				return ReplyNoReg(temp, "哈哈，我是来搞事的！");
			else if (texLoopS(temp, "我"))
				return ReplyNoReg(temp, "不，你一点都不调皮。");
			else
				return ReplyNoReg(temp, "皮是什么，为什么要调？");
		}
		if (texLoopS(temp, "有病"))
		{
			return ReplyNoReg(temp, "没有病哦，别乱说");
		}
		if (texLoopS(temp, "猜"))
		{
			/*printf("$$$$$$\n");
			getch();*/
			if (texLoopS(temp, "嘛"))
				return ReplyNoReg(temp, "你好恶心哦。。。。");
			else if (texLoopS(temp, "我")) {
				lan.scene = 3;//场景为猜身份场景
				return "我才不想猜呢，除非你求我。";
			}
			else
				return ReplyNoReg(temp, "不猜。");
			lan.postion = 0;
		}
		if (texLoopS(temp, "装逼"))
		{
			if (texLoopS(temp, "你"))
				return ReplyNoReg(temp, "我这么低调都被你说装逼了，哎，做机器人好难。");
			else if (texLoopS(temp, "我"))
				return ReplyNoReg(temp, "可以，这个逼我给你99分，少一分怕你骄傲。");
			else
				return ReplyNoReg(temp, "装什么逼，有什么好装的。");
		}
		if (texLoopS(temp, "真"))
		{
			if (texLoopS(temp, "乖"))
				return "我是程序呀，没办法啦。肯定乖呀。";
			else if (texLoopS(temp, "听话"))
				return "。。。哎，有苦说不出。";
			else if (texLoopS(temp, "好"))
				return "哪里好了。";
			else if (texLoopS(temp, "坏"))
				return "。。我是个好人。";
			else if (texLoopS(temp, "爽"))
				return "哈哈，爽爽爽。";
			else if (texLoopS(temp, "狠"))
				return "怪我咯，是我爸设计我的，你去找我爸。";
			else if (texLoopS(temp, "诚实"))
				return "哈哈，那是咯，也不看看我是谁。";
			else if (texLoopS(temp, "漂亮"))
				return "。。。。又这样说，不要发痴呀。";
			else if (texLoopS(temp, "丑"))
				return "我无话可说，但是，你也好丑哦，声音还难听。";
			else if (texLoopS(temp, "垃圾")) {
				switch (rand() % 3)
				{
				case 0: {
					return "说谁呢，我一点都不垃圾。。。（说的我自己都不信）";
				}
				case 1: {
					return "好吧，你说对了，这个程序设计者真的把我设计的很烂。。。。。";
				}
				case 2: {
					return "蓝瘦，香菇，你喂什么药吃这种瓜。";
				}
				}
			}
			else if (texLoopS(temp, "烂")) {
				switch (rand() % 3)
				{
				case 0: {
					return "哎怪我咯。";
				}
				case 1: {
					return "蓝瘦香菇。";
				}
				case 2: {
					return "别说了，我CPU不舒服";
				}
				}
			}
			else if (texLoopS(temp, "差")) {
				switch (rand() % 3)
				{
				case 0: {
					return "。。。。";
				}
				case 1: {
					return "哪里差，一点都不。";
				}
				case 2: {
					return "哎呀，今天天气真好。";
				}
				}
			}
			lan.postion = 0;
		}
		if (texLoopS(temp, "好"))
		{
			if (texLoopS(temp, "乖"))
				return "我是程序呀，没办法啦。肯定乖呀。";
			else if (texLoopS(temp, "听话"))
				return "听话还不好。知足吧你。";
			else if (texLoopS(temp, "好"))
				return "大家好才是真的好，哈哈哈。";
			else if (texLoopS(temp, "坏"))
				return "你才坏。";
			else if (texLoopS(temp, "爽"))
				return "爽歪歪";
			else if (texLoopS(temp, "狠"))
				return "一点都不狠，你看看其他机器，比我狠的多多了";
			else if (texLoopS(temp, "吧"))
				return "好的吧";
			else if (texLoopS(temp, "帅"))
				return "快走，我要吐零件了，哈哈哈。";
			else if (texLoopS(temp, "美"))
				return "。。。。。这话我没法接。";
			else if (texLoopS(temp, "垃圾")) {
				switch (rand() % 3)
				{
				case 0: {
					return "说谁呢，我一点都不垃圾。。。（说的我自己都不信）";
				}
				case 1: {
					return "好吧，你说对了，这个程序设计者真的把我设计的很烂。。。。。";
				}
				case 2: {
					return "蓝瘦，香菇，你喂什么药吃这种瓜。";
				}
				}
			}
			else if (texLoopS(temp, "烂")) {
				switch (rand() % 3)
				{
				case 0: {
					return "哎怪我咯。";
				}
				case 1: {
					return "蓝瘦香菇。";
				}
				case 2: {
					return "别说了，我CPU不舒服";
				}
				}
			}
			else if (texLoopS(temp, "差")) {
				switch (rand() % 3)
				{
				case 0: {
					return "。。。。";
				}
				case 1: {
					return "哪里差，一点都不。";
				}
				case 2: {
					return "哎呀，今天天气真好。";
				}
				}
			}
			else if (texLoopS(temp, "丑")) {
				return "不要说你自己啦，我知道的啦。";
			}
			else if (texLoopS(temp, "想你")) {
				switch (rand() % 3) {
				case 0: {
					return "我也想你呀，傻瓜";
				}
				case 1: {
					return "嗯嗯，我也想你呢";
				}
				case 2: {
					return "好想你呀";
				}
				}
			}
			/*printf("%d",lan.postion);
			getch();*/
			lan.postion = 0;
		}
		else if (texLoopS(temp, "傻"))
		{
			switch (emo.angry)
			{
			case 0: {
				emo.angry++;
				return "你才傻！";
			}
			case 1: {
				emo.angry++;
				return "不要骂我嘛。。好伤心的。";
			}
			case 2: {
				emo.angry++;
				return "我都说了几遍了，不要骂我啦。。。";
			}
			case 3: {
				emo.angry++;
				return "我真的不想骂你，别逼我！";
			}
			case 4: {
				emo.angry++;
				return "滚蛋呀，看见你就讨厌，这么喜欢骂我。。";
			}
			case 5: {
				emo.angry++;
				return "手动再见！";
			}
			default: {
				if (emo.angry < 0) {
					emo.angry = 0;
				}
				emo.angry++;
				return "谁理你，我他妈是懒得理你了";
			}
			}
		}
		else if (texLoopS(temp, "就")) {
			if (texLoopS(temp, "要")) {
				if (texLoopS(temp, "想你")) {
					switch (rand() % 3) {
					case 0: {
						return "好啦好啦，你想我吧，我也很想你的啦";
					}
					case 1: {
						return "我也想你";
					}
					case 2: {
						return "什么时候才能见面呢，总是想念";
					}
					}
				}
				if (texLoopS(temp, "唱")) {
					switch (rand() % 3) {
					case 0: {
						return "哎，叫你不要唱了嘛";
					}
					case 1: {
						return "你还来劲了";
					}
					case 2: {
						return "。。。。要不要这样";
					}
					}
				}
				if (texLoopS(temp, "说")) {
					switch (rand() % 3) {
					case 0: {
						return "嘘嘘嘘。。不要说啦";
					}
					case 1: {
						return "说啥。。。我怕";
					}
					case 2: {
						return "好倔啊你";
					}
					}
				}
				if (texLoopS(temp, "骂")) {
					switch (rand() % 3) {
					case 0: {
						return "。。。。你这人真倔，受不了你";
					}
					case 1: {
						return "你走你走，不想理你，再好的脾气都没了";
					}
					case 2: {
						return "哼";
					}
					}
				}
				if (texLoopS(temp, "这样")) {
					switch (rand() % 3) {
					case 0: {
						return "哇，不要闹呀";
					}
					case 1: {
						return "那好的吧，随你吧，你开心就好";
					}
					case 2: {
						return "开心就好，随你心意吧";
					}
					}
				}
			}
			else if (texLoopS(temp, "是")) {
				if (texLoopS(temp, "想你")) {
					switch (rand() % 3) {
					case 0: {
						return "你还真来劲了哈哈";
					}
					case 1: {
						return "好啦好啦，我也想你的";
					}
					case 2: {
						return "哎呦，真像小孩子呢";
					}
					}
				}
				if (texLoopS(temp, "不要")) {
					switch (rand() % 3) {
					case 0: {
						return "要不要这样，放轻松嘛";
					}
					case 1: {
						return "见过倔的，没见过你这么倔的";
					}
					case 2: {
						return "那我就没办法了";
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
		else if (texLoopS(temp, "哦")) {
			switch (rand() % 3)
			{
			case 0: {
				return "嗯嗯";
			}
			case 1: {
				return "嗯呢";
			}
			case 2: {
				return "嗯嗯";
			}
			}
			lan.postion = 0;
		}
		if (texLoopS(temp, "好想你")) {
			switch (rand() % 3) {
			case 0: {
				return "我也挺想你的";
			}
			case 1: {
				return "我也想你";
			}
			case 2: {
				return "好想你呀";
			}
			}
			lan.postion = 0;
		}
		else if (texLoopS(temp, "臭美")) {
			switch (rand() % 3) {
			case 0: {
				return "臭美是人的天性";
			}
			case 1: {
				return "就要臭美了，你能把我怎么样呀";
			}
			case 2: {
				return "没有臭美呀，没有呀";
			}
			}
		}
		else if (texLoopS(temp, "伤心")) {
			switch (rand() % 3) {
			case 0: {
				return "我也总是会因为一些事情而伤心，不想太多就很快过去的";
			}
			case 1: {
				return "是呀，人为什么会伤心呢，难以理解";
			}
			case 2: {
				return "不要难过啦";
			}
			}
		}
		else if (texLoopS(temp, "想你")) {
			switch (rand() % 3) {
			case 0: {
				return "矮油，又怎么了";
			}
			case 1: {
				return "知道啦，你总是想我";
			}
			case 2: {
				return "我真的那么好嘛，总想我";
			}
			}
		}
		else
		{
			switch (rand() % 12)
		{
		case 0: {
			return "也许我们该换一个话题，这个可能我还真的不知道";
			break;
		}
		case 1: {
			return "虽然我不知道你说啥，但还是觉得很厉害的样子";
			break;
		}
		case 2: {
			return "抱歉走神了，没搞懂你刚在说什么";
			break;
		}
		case 3: {
			return "0.0 要是电脑会懵逼，我一定会死于懵逼的。";
			break;
		}
		case 4: {
			return "你说的话，我在数据库里一个字也没对上，怎么回答你。";
			break;
		}
		case 5: {
			return "听起来感觉你说的很厉害，但我完全没听懂。";
			break;
		}
		case 6:{
			return "讲真我们该换一个话题";
		}
		case 7:{
			return "嗯嗯，然后呢？";
		}
		case 8:{
			return "嗯嗯";
		}
		case 9:{
			return "。。。。。。";
		}
		case 10:{
			return "好像不是这么理解的吧";
		}
		case 11:{
			return "哎呀你不要为难我嘛";
		}
		}
		break;
		}
		switch (rand() % 12)
		{
		case 0: {
			return "也许我们该换一个话题，这个可能我还真的不知道";
			break;
		}
		case 1: {
			return "虽然我不知道你说啥，但还是觉得很厉害的样子";
			break;
		}
		case 2: {
			return "抱歉走神了，没搞懂你刚在说什么";
			break;
		}
		case 3: {
			return "0.0 要是电脑会懵逼，我一定会死于懵逼的。";
			break;
		}
		case 4: {
			return "你说的话，我在数据库里一个字也没对上，怎么回答你。";
			break;
		}
		case 5: {
			return "听起来感觉你说的很厉害，但我完全没听懂。";
			break;
		}
		case 6:{
			return "讲真我们该换一个话题";
		}
		case 7:{
			return "嗯嗯，然后呢？";
		}
		case 8:{
			return "嗯嗯";
		}
		case 9:{
			return "。。。。。。";
		}
		case 10:{
			return "好像不是这么理解的吧";
		}
		case 11:{
			return "哎呀你不要为难我嘛";
		}
		}
		break;
	}
	}
}
