//
//  pointer.c
//  MineC
//
//  Created by 朱运 on 2020/12/23.
//

#include "pointer.h"

void pointerKnowledge(void){
    /*
     指针:
     
     */
    //
    int i = 123;
    int *m0;
    m0 = &i;
    
    //char 一个字节
    char c = 'x';//定义char类型变量c
    char *m1 = NULL;//定义char类型指针m1
    m1 = &c;//给指针赋值
    printf("c = %c\n",c);
    printf("m1 = %p,*m1 = %c\n",m1,*m1);
}
