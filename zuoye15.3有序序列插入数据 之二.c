#include <stdio.h>
#define MAX_SIZE 1001
int getarray(int array[])
{
    int i = 0;
    for(;i < 1000;i++)
        array[i] = 0;
    i = 0;
    int tep;
    while(1)
    {
        scanf("%d",&tep);
        if(tep == 0)
            break;
        else
        {
            array[i] = tep;
            i++;
        }
    }
    return 0;
}
int getkey(int key[])
{
    int n,i;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&key[i]);
    }
    return n;
}
int insert(int array[], int key, int vol)
{
    int data[1001];
    int i,j,tep,flag = 0;
    if(array[0] == 0)
    {
     array[0] = key;
    }
    for(i = 0; i < vol; i++)
    {
        if(i+1 != array[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        return -2;
    }
    else
{
    for(i = 0; i < vol; i++)
        {

            if(array[i] == key)
            {
                return -1;

            }
            else if(key < array[i])
            {
                tep = array[i];
                array[i] = key;
                data[i+1] = tep;
                for(j = i + 1;j < vol;j++)
                {
                    data[j+1] = array[j];
                }
                for(j = i+1;j < vol;j++)
                    array[j] = data[j];

                return i;
            }

        }
        for(i = 0;i < vol;i++)
        {
            if(key > array[i])
            {

            }
            if(array[vol-1-i] != 0)
            {
                array[vol-i] = key;
               return vol-i;
            }
        }
    }
}
int result(int flag)
{
    if(flag == -1)
    {
        printf("The key is already in this array!\n");
    }
    if(flag == -2)
    {
        printf("The array if full!\n");
    }
    if(flag >= 0)
    {
        printf("The key is inserted in position %d.\n",flag);
    }
    return 0;
}
int main()
{
    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
    scanf("%d", &cases);
    for(ca = 1; ca <= cases; ca++)
    {
        getarray(array);
        size = getkey(key);
        printf("Case %d:\n", ca);
        for(i = 0; i < size; i++)
            result(insert(array, key[i], MAX_SIZE - 1));
    }
    return 0;
}

