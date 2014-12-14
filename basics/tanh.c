#include<stdio.h>
#include<math.h>

int printit(void);

int main()
{
    printf("Hello World!\n");
    FILE *FP;
    FP = fopen("sample.dat","w");
    float x = 0.0;
    float y;
    while (x++<10.0)
    {
        y = tanh(x);
        fprintf(FP,"%f\n", y);
    }
    printit();
    fclose(FP);
    return 0;
}
