/// GCC编译器的介绍及使用
/*
一 GCC编译器介绍
    GCC它是由GNU开发的编程语言编译器. 它是GNU Compiler Collection的缩写. 可以用来编译C,C++,Object-c等多种语言
    它是Linux下提供一般用户使用的标准编译器

二 gcc编译器
    1. 安装gcc编译器
        sudo apt-get install gcc
    2. 使用教程
        方法一: 使用系统生成的可执行文件
            gcc hello.c         #编译代码,系统默认会在当前目录下,生成一个叫做a.out的文件.[all out]
            ./a.out             #执行a.out文件,输出对应结果
        方法二: 用户自定义可执行文件
            gcc hello.c -o exec #编译代码,用户自定义生成的可执行文件名字
            ./exec              #执行exec文件,输出对应结果
三 每个阶段生成代码
    预处理-->生成我预处理过的C代码  xx.i
        gcc -E xx.c -o xx.i
    编译-->把我们预处理过的代码生成我们的汇编代码   xx.s
        gcc -S xx.i -o xx.s
    汇编-->把汇编代码生成我们的目标文件 xx.o
        gcc -c xx.s -o xx.o
    链接-->把我们的目标文件生成我们的可执行文件 xx
        gcc xx.o -o xx
    参数说明:
        -E 使编译器在预处理结束的时候停止
        -S 使编译器在编译结束的时候停止
        -c 使编译器在汇编结束的时候停止
        -o  输出gcc编译的结果
*/