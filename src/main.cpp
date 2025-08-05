#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    // 设置控制台为UTF-8
    SetConsoleOutputCP(CP_UTF8);
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "下面将显示字体的颜色与对应的编码：" << endl;
    int textColor = 0xF0;

    cout << hex << showbase;
    for (int i = 0; i < 16; i++)
    {

        SetConsoleTextAttribute(h, textColor);
        cout << textColor << " 的颜色" << endl;
        textColor++;
    }

    textColor = 0x0F;
    SetConsoleTextAttribute(h, textColor);
    cout << "下面将显示背景的颜色与对应的编码：";
    textColor = 0xF6;
    SetConsoleTextAttribute(h, textColor);
    cout << "下面将显示背景的颜色与对应的编码：" << endl;

    textColor = 0x00;
    for (int i = 0; i < 60; i++)
    {
        textColor += 16;
        if (textColor >= 0x100)
            textColor = 0x00;
        SetConsoleTextAttribute(h, textColor);
        cout << textColor << " 的颜色" << endl;
    }

    system("pause");
    return 0;
}