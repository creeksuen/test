//
// Created by Tencent_GO on 2023/11/29.
//


#include <cstdio>
#include <iostream>
#include <cstring>


#define MAX(a, b) (((a)>=(b))? (a):(b))
enum
{
    CC,
    AA,
};
int main()
{
    int a = 0;
    auto x = MAX(a, AA);
    char buffer[20] ;
    memset(buffer, '2', 20);
    snprintf(buffer, 20, "11111111111111111111");
    std::cout << x<< std::endl;

}