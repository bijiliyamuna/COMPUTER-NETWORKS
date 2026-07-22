#include <stdio.h>
int main()
{
    char a[20];
    int n;
    printf("Enter the size of frame: ");
    scanf("%d", &n);
    printf("Enter the frame characters:\n");
    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }
    printf("Destuffed Data: ");
    for(int i = 1; i < n-1; i++)
    {       
        if(a[i]=='@')
        {
            i++;
        }
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
