//自己实现strlen函数


#include <stdio.h>
#include <assert.h>

int my_strlen(char* str)
{
    char* start = str;
    char* end=str;
    while (*end!='\0')
    {
        end++;
    }
    return end-start;
}


int my_strlen1(const char* str)
{
    assert(str != NULL );
    int count=0;
    while(*str)
    {
        count++;
        str++;
    }
    return count;
}
int main()
{
    char arr[]="bit";
    int len = my_strlen(arr);
    int len1 = my_strlen1(arr);
    printf("%d\n",len);
    printf("%d\n",len1);
    return 0;
}