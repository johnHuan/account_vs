#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#define INCOME "收入"
#define EXPAND "支出"


#define FILENAME "E:/cpp/account_vs/data.txt"

using namespace std;

// 通用性函数声明

// 绘制菜单的函数
void showMainMenu();
void showAccountingMenu();
void showQueryMenu();

// 读取键盘输入并进行合法性校验
char readMenuSelection(int options);
char readQuitConfirm();
int readAmount();