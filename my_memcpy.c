#include<stdio.h>
#include<assert.h>
void * my_memcpy(void* des,const void* src,size_t count)
{
    void * p=des;
    assert(des!=NULL);
    assert(src!=NULL);

    while(count--)
    {
        *(char *)des=*(char *)src;
        ++des;
        ++src;
    }
    return p;
}
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={0};
    my_memcpy(arr2,arr1,sizeof(arr1));
    int i;
    for(i=0;i<(sizeof(arr2)/sizeof(arr2[0]));i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
