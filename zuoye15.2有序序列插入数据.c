//#include <stdio.h>
//#define MAX_SIZE 1001
//int getarray(int array[])
//{
//    int i = 0;
//    for(;i < 1000;i++)
//        array[i] = 0;
//    i = 0;
//    int tep;
//    while(1)
//    {
//        scanf("%d",&tep);
//        if(tep == 0)
//            break;
//        else
//        {
//            array[i] = tep;
//            i++;
//        }
//    }
//    return 0;
//}
//int insert(int array[], int key, int vol)
//{
//    int i,flag = 0;
//    if(array[0] == 0)
//        return 0;
//    for(i = 0; i < vol; i++)
//    {
//        if(i+1 != array[i])
//        {
//            flag = 1;
//            break;
//        }
//    }
//
//    if(flag == 0)
//    {
//        return -2;
//    }
//    else
//{
//    for(i = 0; i < vol; i++)
//        {
//
//            if(array[i] == key)
//            {
//                return -1;
//
//            }
//            else if(key < array[i])
//            {
//                return i;
//            }
//
//        }
//        for(i = 0;i < vol;i++)
//        {
//            if(key > array[i])
//            {
//
//            }
//            if(array[vol-1-i] != 0)
//            {
//               return vol-i;
//            }
//        }
//    }
//}
//int result(int flag)
//{
//    if(flag == -1)
//    {
//        printf("The key is already in this array!\n");
//    }
//    if(flag == -2)
//    {
//        printf("The array if full!\n");
//    }
//    if(flag >= 0)
//    {
//        printf("The key is inserted in position %d.\n",flag);
//    }
//    return 0;
//}
//int main()
//{
//    int array[MAX_SIZE], cases, i, key;
//    scanf("%d", &cases);
//    for(i = 1; i <= cases; i++)
//    {
//        getarray(array);
//        scanf("%d", &key);
//        result(insert(array, key, MAX_SIZE - 1));
//    }
//    return 0;
//}
#include<stdio.h>
#define MAX_SIZE 1001
int getarray(int array[])
{
    int i,tep;
    for(i = 0;i < 1000;i++)
      array[i] = 0;//初始化
      i = 0;
    while(1)
    {
        scanf("%d",&tep);
        if(tep == 0)
            break;
        else
            array[i] = tep;
        i++;
    }
    for(i = 0;i < 1000;i++)
        printf("%d ",array[i]);
}
int insert(int array[], int key, int vol)
{
    int flag = 0, i;
    for(i = 0;i < vol; i++)
    {
        if(array[i] != i+1)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        return -1;
    for(i = 0;i < vol; i++)
    {
        if(array[i] > key)
            return i;
    }
    for(i = 0;i < vol; i++)
    {
        if(array[i] == key)
            return -2;//避免和上面返回的i重复
    }

}
int result(int flag)
{
    printf("flag = %d\n",flag);
    if(flag == -1)
        printf("The array if full!\n");
    if(flag == -2)
        printf("The key is already in this array!\n");
    if(flag != -1&&flag != -2) //flag>=0
        printf("The key is already in this array!\n") ;

}
int main()
{
    int array[MAX_SIZE], cases, i, key;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        getarray(array);
        scanf("%d", &key);
        result(insert(array, key, MAX_SIZE - 1));
    }
    return 0;
}


