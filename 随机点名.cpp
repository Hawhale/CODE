#include <cstdlib>//随机数头文件
#include <ctime>//时间头文件
#include <iostream>//IO流头文件

//在宏定义中定义一个random(int number)函数，这样就可以在main()里面直接调用random()函数，

int Name(int random_number);
//定义一个函数叫Name，包含对象random_number,它可以将随机生成的数字转换成对应的人名

using namespace std;//使用标准命名空间库


int  main()//定义主函数，主要作用就是生成随机数
{
    cout << "@Hawale 保留所有权利." << endl;
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << "欢迎使用自动点名系统." << endl << endl << endl;
    cout << "先按下“1”键再按下“回车”键开始点名." << endl;//无用的介绍

    int Number_To_Start;//定义变量Number_To_Start,这个变量用来控制随机点名的开始和结束
    cin >> Number_To_Start;//控制开始

    if (Number_To_Start == 1) //开始后执行的程序
    {
        for (;;) //无限循环生成随机数程序，也就是无限循环随机点名程序
        {
            srand((int)time(0));//通过时间获取种子，time（0）可换成time（NULL）

            Name(rand()%11);//生成随机数，把随机数放在变量random_number里作为人名的序数

            if (rand()%11 == 0)//如果随机数为0
            {
                for (;;) //重新执行
                {
                    srand((int)time(0));//通过时间获取种子，time（0）可换成time（NULL）
                    Name(rand()%11);//生成随机数，把随机数放在变量random_number里作为人名的序数
                    cin >> Number_To_Start;//控制结束
                }
            }

            cin >> Number_To_Start;//控制结束
        }
    }
    else//如果按的不是“1”键
    {
        for (;;)
        {
            cout << "输入1" << endl;//重新执行程序
            cin >> Number_To_Start;//控制开始
            if (Number_To_Start == 1) //开始后执行的程序
            {
                for (;;) //无限循环生成随机数程序，也就是无限循环随机点名程序
                {
                    srand((int)time(0));//通过时间获取种子，time（0）可换成time（NULL）

                  Name(rand() % 11);//生成随机数，把随机数放在变量random_number里作为人名的序数

                    if (rand()%11 == 0)//如果随机数为0
                    {
                        for (;;) //重新执行
                        {
                            srand((int)time(0));//通过时间获取种子，time（0）可换成time（NULL）

                            int Name( rand() % 11);//生成随机数，把随机数放在变量random_number里作为人名的序数

                            cin >> Number_To_Start;//控制结束
                        }
                    }

                    cin >> Number_To_Start;//控制结束

                    if (Number_To_Start != 1)
                    {
                        break;
                    }//用break退出循环
                }
            }
        }
    }
}
 int Name(int random_number)//编写Name函数，把序号转换为人名
{
    cout << "________________________________________________________________________________________________________________" << endl;
    cout << endl;//每次点名结果的分界线，为了美观
    if (random_number != 0)
        cout << "本次人选:";//如果随机数不为0，就在人名前面加上“本次人选”这句话，为了易读
    if (random_number == 0)
        cout << "天不时地不利，再点一次" << endl;//如果随机数为0，就再点一次
    if (random_number == 1)
        cout << "The name1" << endl;//如果随机数为1，就输出序号为一的人名，以下同理
    if (random_number == 2)
        cout << "The name2" << endl;
    if (random_number == 3)
        cout << "The name3" << endl;
    if (random_number == 4)
        cout << "The name4" << endl;
    if (random_number == 5)
        cout << "The name5" << endl;
    if (random_number == 6)
        cout << "The name6" << endl;
    if (random_number == 7)
        cout << "The name7" << endl;
    if (random_number == 8)
        cout << "The name8" << endl;
    if (random_number == 9)
        cout << "The name9" << endl;
    if (random_number == 10)
        cout << "The name10" << endl;

    cout << "按下“0”键再按下“回车”键以继续。" << endl << endl;

    return 0;
}//把序号转换为人名结束，程序自动返回主函数，继续生成下一轮的随机数随机点名