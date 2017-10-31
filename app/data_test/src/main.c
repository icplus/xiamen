#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef unsigned int u_int32_t;
typedef unsigned short int u_int16_t;
typedef unsigned char u_int8_t;
int main(int argc, char *argv[])
{
    int len32,len16,len8;
    len32 = sizeof(u_int32_t);
    len16 = sizeof(u_int16_t);
    len8 = sizeof(u_int8_t);
    printf("len32:%d\nlen16:%d\nlen8:%d\n", len32, len16, len8);
}

