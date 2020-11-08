//
// Created by gusga on 08/11/2020.
//

#include <stdio.h>
#include <math.h>

double zeta_simple(double s, long long int n)
{
    double p=0.0;
    long long int i;
    for(i=1; i<=n; i++)
    {

        p+=pow(i,-s);
    }
    printf("%d", p);
}

int main() {

    zeta_simple(1.5, 2);

}