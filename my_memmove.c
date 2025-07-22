#include<stdio.h>
#include<assert.h>
void * my_memmove(void * des,const void * src,size_t count)
{
    assert(des!=NULL);
    assert(src!=NULL);
    void * res=des;
    if(des>src)
    {
        while(count--)
    {
        *((char *)des+count)=*((char *)src+count);
    }
    }
    else
    {
        while(count--)
        {
            *(char *)des=*(char *)src;
            des++;
            src++;
        }
    }
    return res;
}
int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    my_memmove(arr1+2,arr1,20);
    int i;
    for(i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}
