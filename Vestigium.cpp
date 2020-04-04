#include "stdio.h"
int main()
{

    int matrix[500][500];
    int n,t,a;
    int temp,sum;
    int r,x,c,r1,c1;
    scanf("%d",&t);
    for(a = 0;a < t;a++)
    {
        scanf("%d",&n);
        temp=0,sum=0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                scanf("%d",&matrix[i][j]);
            }
        }
        r=0;
        c=0;
        for(int i = 0; i < n; i++) {
                r1=0;
            for(int j = 0; j < n-1; j++) {
                temp = matrix[i][j];
                //Scan current row

                for(int k = j+1; k < n; k++)
                {

                    if(matrix[i][j]== matrix[i][k])
                    {
                        r++;
                        r1=1;
                        break;
                    }
                }
                if(r1==1)
                {
                    break;
                }
            }
        }
        for(int j = 0; j < n; j++) {
                c1=0;
            for(int i = 0; i < n-1; i++) {
                temp = matrix[i][j];

                //Scan current column
                for(int k = i+1; k < n; k++)
                {
                    if(temp == matrix[k][j] )
                    {
                        c++;
                        c1=1;
                        break;
                    }

                }
                if(c1==1)
                {
                    break;
                }
            }
        }
        for(int l = 0;l < n;l++)
            sum = sum + matrix[l][l];

        x=sum;
        printf("Case #%d: %d %d %d\n",a+1,x,r,c );
    }
    return 0;
}
