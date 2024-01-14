/// Linux文件系统及常用快捷键

/*Linux文件系统常用文件的含义
路径    含义
/bin    bin是二进制(binary)英文缩写
/boot   存放的都是系统启动时要用到的程序.
/dev    包含了所有Linux系统中使用的外部设备.
/etc    存放了系统管理时要用到的各种配置文件和子目录.
/lib    存放系统动态连接共享库的
/home   普通用户的主目录
/root   根目录(超级用户)的主目录
*/

/*Linux常用快捷键
1. 开启一个新的终端
    ctrl + alt + t
2. 虚拟机全屏
    ctrl + alt + 回车
3. 清屏
    ctrl + clear
    ctrl + l
4. 终端字体变大
    ctrl 加 shift 加 +
5. 终端字体缩小
    ctrl + -
6. 鼠标退出虚拟机控制
    ctrl + alt
7. 进入命令模式
    ctrl + alt + F7
8. 退出命令模式
    ctrl + alt + F2
*/

/*Linux基本命令
1. pwd: print work dirctory的缩写, 显示当前目录的绝对路径
    绝对路径: 以/为起点, 遍历到子目录
    相对路径: 以当前目录为起点, 遍历到子目录
2. cd: change directory的缩写, 切换目录
        .   当前目录
        ..  上层目录
        -   上一次操作所在路径
        ~   相当于/home/用户名的路径
3. ls: list单词的缩写, 列出当前目录的内容
4. touch: 新建一个文件
5. clear: 清屏
6. mkdir: 在当前目录下新建文件夹
7. rm: 默认删除文件, 加上指定参数后, 可删除文件夹
    -r 删除文件夹
    -f 强制执行
8. cp: 复制文件/文件夹到指定目录
    格式1: 拷贝指定目录
        cp 源文件 目录路径
    格式2: 创建文件副本
        cp 源文件 目标文件
    格式3: 拷贝文件夹
        cp 源文件夹 目录文件夹 -a
9. mv: 移动文件
    格式1: 移动指定目录
        mv 源文件 目录路径
    格式2: 把源文件命名为目标文件
        mv 源文件 目标文件
    格式3: 把源文件移动到目标文件夹
        mv 源文件 目标文件夹

示例:
cd /home/linux          #进入/home/linux文件夹
mkdir Cbase             #新建文件Cbase文件夹
cd ./Cbase              #进入Cbase文件夹
touch log1.txt log2.txt log3.txt    #创建log1.txt log2.txt log3.txt文件
mkdir dirTest           #新建dirTest目录
clear                   #清屏
rm log1.txt log2.txt    #删除log1.txt log2.txt文件
rm -rf dirTest          #删除dirTest文件夹

cp hello.c /home/linux/Cbase    #把hello.c拷贝到Cbase文件夹中
cp hello.c world.c              #把hello.c复制一份命名为world.c
cp Cbase ../ -a                 #把Cbase文件夹拷贝到上层目录

mv hello.c /home/linux/Cbase    #把hello.c移动到Cbase文件夹中
mv hello.c world.c              #把hello.c重命名为world.c
mv Cbase ../                    #把Cbase文件夹移动到上层目录
*/