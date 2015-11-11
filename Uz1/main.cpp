//
//  main.cpp
//  Uz1
//
//  Created by 20141105063T on 15/11/11.
//  Copyright © 2015年 20141105063T. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,*p;
    a=100;
    p=&a;
    printf("a=%x &a=%x &p=%x p=%x *p=%x\n",a,&a,&p,p,*p);
    //std::cout << "Hello, World!\n";
    return 0;
}
