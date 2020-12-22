//
//  main.c
//  MineC
//
//  Created by 朱运 on 2020/12/22.
//

#include <stdio.h>
#include "basics.h"
#include <dirent.h>
#define  FilePath "/Users/zhuyun/Desktop/旧项目总结1.md"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    /*
     算法
     */
    printf("I am coming now! \n");
    printf("Yes coming.\n");
    printf("Hello, World!\n");
    
    int c = maxCout(10, 100);
    printf("max = %d \n",c);
    maxCout(10, 20);
    
    //写入文件
    FILE *file = fopen("/Users/zhuyun/Desktop/a1.text", "w+");
    fprintf(file, "files \n");
    fputs("mine", file);
    fclose(file);
    
    //读取文件
    FILE *f1 = fopen(FilePath, "r");
    char buff[25588];
    fscanf(f1, "%s",buff);
    printf("1:%s\n",buff);
    fgets(buff, 25588, (FILE *)f1);
    printf("2:%s\n",buff);
    fgets(buff, 25588, (FILE *)f1);
    printf("3:%s\n",buff);
    fclose(f1);
    
    //getchar(),putchar()
//    int d;
//    printf("Enter 一个数字:\n");
//    d = getchar();
//    printf("你输入的是:");
//    putchar(d);//只读取单一的字符
//    printf("\n");
    
    //输入,输出
//    char str[100];
//    printf("请输入:");
////    gets(str);
//    fgets(str, (sizeof(str) / sizeof(str[0])), stdin);//使用这个没有警告
//    printf("你输入的是:");
//    puts(str);
    
    printf("time:%s\n",__TIME__);

    return 0;
}
