#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int n;
        scanf("%d", &n);
        
        char row1[n + 1], row2[n + 1];
        scanf("%s", row1);
        scanf("%s", row2);
        
        int flag = 1;
        
        for(int i = 0; i < n; i++)
        {
            if(row1[i] != row2[i] && !(row1[i] == 'G' && row2[i] == 'B') && !(row1[i] == 'B' && row2[i] == 'G'))
            {
                flag = 0;
                break;
            }
        }
        
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}