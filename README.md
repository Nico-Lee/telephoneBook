# telephoneBook


void add_linkman(info *arr);//添加联系人
void printf_face();//打印菜单
void del_linkman(info *arr);//删除联系人
info *empt_linkman(info *arr);//清空所有联系人
void display(info *arr);//显示某个联系人信息
void display_all(info *arr);//显示所有联系人信息
void alter_linkman(info *arr);//修改联系人信息
info *find_linkman(info *arr);//查找某个联系人信息
void sort(info *arr);//排序联系人信息
info arr[MAX] = { { 0, 0, 0, 0, 0 } };//全局的一个数组，用来存放联系人信息
info *tmp = arr;//全局指针
info *star = arr;//全局指针
