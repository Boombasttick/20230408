#include <stdio.h>
#include <string.h>
#include <assert.h>

int is_move(char* str1 , char* str2)
{
    assert(str1);
    assert(str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
    return 0;
    else
    {
        //在str1字符串后追加一个str1字符串，abcdefabcdef
        //strcat 无法追加相同字符串，strncat可以
        strncat(str1 , str2 , 6);
        //判断str2是否是追加字符串后str1的子串
        char* ret = strstr(str1,str2);
        if(ret == NULL)
        {
            return 0;
        }
        else
        {
            return 1; 
        }
    }
}

int main()
{
    char arr1[] = "abcdef" ;
    char arr2[] = "cdeab" ;
    int ret1 = is_move (arr1 , arr2);
    if(ret1==1)
    {
        printf("YES!\n");
    }
    else 
    {  
        printf("NO\n");
    }
    return 0;
}