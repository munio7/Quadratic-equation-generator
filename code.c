#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    int a,b,c;
    int x1,x2;
    float delta;
    int i = 0;

    while (i<200) 
    {
        a = rand()%2 + 1;
        b = rand()%10 - 5;
        c = rand()%10 - 5;

        delta = (b*b)-4*a*c;

        x1 = ((-1)*b + sqrt(delta))/ 2*a;
        x2 = ((-1)*b - sqrt(delta))/ 2*a;

        if (a!=0 && b!= 0 && c!=0)
        {
            switch ((int)delta)
            {
            case 1:
                printf("A = %d\tB = %d\tC = %d\n", a, b, c);
                printf("Delta =%f\n",delta);
                printf("Pierwiastki to : %d\t%d\n", x1, x2);
                printf("----------------------\n");
                break;
            case 4:
                printf("A = %d\tB = %d\tC = %d\n", a, b, c);
                printf("Delta =%f\n",delta);
                printf("Pierwiastki to : %d\t%d\n", x1, x2);
                printf("----------------------\n");
                break;
            case 9:
                printf("A = %d\tB = %d\tC = %d\n", a, b, c);
                printf("Delta =%f\n",delta);
                printf("Pierwiastki to : %d\t%d\n", x1, x2);
                printf("----------------------\n");
                break;
            case 16:
                printf("A = %d\tB = %d\tC = %d\n", a, b, c);
                printf("Delta =%f\n",delta);
                printf("Pierwiastki to : %d\t%d\n", x1, x2);
                printf("----------------------\n");
                break;
            case 25:
                printf("A = %d\tB = %d\tC = %d\n", a, b, c);
                printf("Delta =%f\n",delta);
                printf("Pierwiastki to : %d\t%d\n", x1, x2);
                printf("----------------------\n");
                break;
            case 36:
                printf("A = %d\tB = %d\tC = %d\n", a, b, c);
                printf("Delta =%f\n",delta);
                printf("Pierwiastki to : %d\t%d\n", x1, x2);
                printf("----------------------\n");
                break;
            case 49:
                printf("A = %d\tB = %d\tC = %d\n", a, b, c);
                printf("Delta =%f\n",delta);
                printf("Pierwiastki to : %d\t%d\n", x1, x2);
                printf("----------------------\n");
                break;
            case 64:
                printf("A = %d\tB = %d\tC = %d\n", a, b, c);
                printf("Delta =%f\n",delta);
                printf("Pierwiastki to : %d\t%d\n", x1, x2);
                printf("----------------------\n");
                break;
            default:
                break;
            }
        }
        else 
        {
           continue;
        }
        i++;
    }        

}
