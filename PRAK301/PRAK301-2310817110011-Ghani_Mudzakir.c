#include <stdio.h>

int main()
{
    //kita membuat variabel untuk memasukan user input
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    // 2 3 1
    // 1 3 2
    // 3 1 

    if (a<b)
    {
        if (a<c)
        {
            if (c<b)
            {
                printf("%d %d %d", a,c,b);
            }
            if (c>b)
            {
                printf("%d %d %d", a,b,c);
            }
        }
        if (a>c)
        {
            if (c<b)
            {
                printf("%d %d %d", c,a,b);
            }
        }
    }
    if (a>b) //2 1 3 // 2 3
    {
        if (a<c)
        {
            if (c>b)
            {
                printf("%d %d %d", b,a,c);
            }
        }

        if (a>c) //3 1 2 // 3 2 1
        {
            if (c<b)
            {
                printf("%d %d %d", c,b,a);
            }
            if (c>b)
            {
                printf("%d %d %d", b,c,a);
            }
        }
    }
    

    return 0;
}



