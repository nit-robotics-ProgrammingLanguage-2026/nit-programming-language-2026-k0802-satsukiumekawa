#include <stdio.h>
#include <math.h>

void calc_trig(double deg, double *s, double *c, double *t);

int main(void)
{
    double deg;
    double s, c, t;

    scanf("%lf", &deg);

    /* calc_trig を呼び出して結果を格納 */
    calc_trig(deg, &s, &c, &t);

    printf("%.4f,%.4f,%.4f", s, c, t);

    return 0;
}

void calc_trig(double deg, double *s, double *c, double *t)
{
    double rad;

    /* 度をラジアンに変換 */
    rad = deg * M_PI / 180.0;

    /* 結果をポインタ経由で返す */
    *s = sin(rad);
    *c = cos(rad);
    *t = tan(rad);
}
