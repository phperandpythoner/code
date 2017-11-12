#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//定义一个拆开锦囊方法
typedef void(TIPS)(void);

//定义锦囊
struct Tip {
	char from[64];//谁写的
	char to[64];//写给谁
	TIPS *tp;//相当于抽象类的纯虚函数
};
//创建
struct Tip* create_tip(char *from, char *to, TIPS *tp)
{
	struct Tip *tmp = (struct Tip *)malloc(sizeof(struct Tip));
	if (tmp == NULL)
	{
		return NULL;
	}
	strcpy(tmp->from, from);
	strcpy(tmp->to, to);
	tmp->tp = tp;

	return tmp;
}
//调用
void open_tip(struct Tip * tip_p)
{
	cout << tip_p->from << tip_p->to << endl;
	tip_p->tp();
}
//释放
void destory_tip(struct Tip *tp)
{
	if (tp != NULL)
	{
		free(tp);
		tp = NULL;
	}
}

//--------------------------------实现层-----------------

void tip1_func(void)
{
	cout << "tip1_func" << endl;
}
void tip2_func(void)
{
	cout << "tip2_func" << endl;
}
void tip3_func(void)
{
	cout << "tip3_func" << endl;
}
int main()
{
	struct Tip *tp1 = create_tip("诸葛亮", "赵宇", tip1_func);
	struct Tip *tp2 = create_tip("诸葛亮", "赵宇", tip2_func);
	struct Tip *tp3 = create_tip("诸葛亮", "赵宇", tip3_func);

	open_tip(tp1);
	open_tip(tp2);
	open_tip(tp3);

	destory_tip(tp1);
	destory_tip(tp2);
	destory_tip(tp3);

	system("pause");
	return 0;
}