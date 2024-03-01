#include<stdio.h>
void fun_value(int no)
{
   no++;
}
void fun_add(int *ptr)
{
    (*ptr)++;
}
void fun_ref(int &ref)
{
    ref++;
}


int main()
{
    int i=10, j=10, k=10;

    fun_value(i);
    fun_add(&j);
    fun_ref(k);

    printf("call by val..i %d\n",i);
    
    printf("call by add..j %d\n",j);
    
    printf("call by ref..k %d\n",k);

    return 0;
}