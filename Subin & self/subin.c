
 #include <stdio.h>

int  main()
{
    int i, j, root,size=40, ara[40];
    for(i=2; i < size; i++)
    {
        ara[i] = 1;
    }
    root = sqrt(size);
    for(i=2; i <= root; i++)
    {
        for(j=2; i*j <= size; j++)
        {
            printf("%d ", i*j);

        }
//        break;
        printf("\n");

    }
}
