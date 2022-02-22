#include <iostream> 
#include <stdio.h>

/* 
以上是预处理器编译指令 #include
也叫头文件。
C语言的头文件扩展名h。
例如math.h 支持各种C语言数学函数
有些C语言的头文件改成了c++版本，例如math.h编程 cmath。

*/


int main()
{
using namespace std;   //make definition visible  编译指令 名称空间使iostream 中的定义对程序可用。当不同头文件有相同名称函数时，存入名称空间，重命名。可以避免名称重复。
int varialI;  // declare an interger variable，创建一个名为“varialI”的变量，它可以存储证书

std::cout<<"这是个打印命令";  //每个结尾都要➕“；” 分号 std::cout 完整的名称空间
cout << endl; //start a new line
cout <<"新的打印命令"<<endl;  //新的打印方式
printf("这是来自于C语言的打印命令\n");  //C语言的打印命令 在stdio.h 文件中。
scanf("请输入数字：%d",&i); // 这是一个输入命令，printf的后续参数不要加&，而scanf由于需要一个指针，所以需要加&
cout<<varialI<<endl; //打印i的数值 结果






return 0;  //terminate main()

}