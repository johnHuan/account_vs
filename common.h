#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#define INCOME "����"
#define EXPAND "֧��"


#define FILENAME "E:/cpp/account_vs/data.txt"

using namespace std;

// ͨ���Ժ�������

// ���Ʋ˵��ĺ���
void showMainMenu();
void showAccountingMenu();
void showQueryMenu();

// ��ȡ�������벢���кϷ���У��
char readMenuSelection(int options);
char readQuitConfirm();
int readAmount();