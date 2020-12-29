//
//  basics.c
//  MineC
//
//  Created by 朱运 on 2020/12/22.
//

#include "basics.h"

void b1(void){
    
    /*
     C的基本语法
     
     
     C的令牌(Token)
     C由各种令牌组成,令牌可以是关键字,标识符,常量,字符串值,或者一个符号,例如下面是一个C的五个令牌:
     printf("Hello, World! \n");
     这五个令牌分别是:
     1,printf
     2,(
     3,"Hello, World! \n"
     4,)
     5,;
     
     分号;
     在C程序中,分号是语句的结束符,也就是说,每个语句必须是以分号结束,他表明一个逻辑实体的结束,
     例如下面是2个不同的语句:
     printf("Hello, World! \n");
     return 0;
     
     注释
     C语言的注释有两种:
     单行注释://
     多行注释:两个斜杠中间是2个星号
     
     标识符
     标识符是用来标识变量,函数,或用户自定义项目名称,一个标识符以字母A-Z或a-z或下划线_开始,后面跟零个或多个字母,下划线,数字0-9;
     C标识符不允许出现标点符号,比如:%,@,%
     C是区分大小写的语言,因此game,Game是两个不同的标识;
     标识样例:a1,bdc_1,AO09,_mu;
     
     关键字
     关键字是C的保留字.这些保留字不能作为常量名,变量名,函数名,或其他标识名称
     如:auto,break,case,char,const,continute,default,do,double,else,enum,extern,float,for,goto,if,int,long,register,return,short,signed,sizeof,static,struct,switch,typedef,unsigned,union,void,volatile,white;
     
     C中的空格
     只包含空格的行,叫做空白行,C编译器会完全忽略它.
     在C中,空格用于描述空白符,制表符,换行符和注释.空格分隔语句的各个部分,让编译器能识别语句中的某个元素在哪里结束,下一个元素在哪里开始.
     因此,在下面语句中:
     int age;
     在这里,int和age之间必须至少有一个空格字符(通常一个空白符),这样编译器才能区分它们.
     下面语句:
     int number = n1 + n2;
     number和 = ,或者 = 和n1之间的空格不是必须的,但是为了增强可读性,可以适当的添加一些空格;
     
    */
    
    
    
#pragma mark C的数据类型
    
    //基本类型:整型和浮点型
    
    /*
     char单个字符对应:ASCII码对照表,是整型:范围从32-126
     char字符表示数字,英文字母,符号
     内存分配一个字节,A:65
     */
    char c1 = 'A';printf("字符类型:%c\n占得字节数:%ld\n",c1,sizeof(c1));
    if (c1 == 65) {
        printf("字符A对应ASCII码值为65\n");
    }
    char c2 = 'B',c3 = 'C';printf("%d,%d,%d\n",c1,c2,c3);
    char d1 = '!';printf("%d\n",d1);
    char d2 = 99;printf("d2 = %c\n",d2);
    char d3 = ' ';printf("d3 = %d\n",d3);
    char d4 = '}';printf("d4 = %d\n",d4);
    
    char arr1[] = "这是一个char数组也叫字符串";printf("arr1 = %s\n",arr1);
    
    unsigned char e1 = 255;printf("e1 = %c\n",e1);
    for (unsigned char i = 32; i < 127; i ++) {
//        printf("i = %c,%d\n",i,i);
    }
    //枚举类型
    
    //void类型
    
    //派生类型:
    
    
}
