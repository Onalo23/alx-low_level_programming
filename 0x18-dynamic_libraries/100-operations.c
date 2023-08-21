#include <stdio.h>

int add(int j, int k);
int sub(int j, int k);
int mul(int j, int k);
int div(int j, int k);
int mod(int j, int k);

int add(int j, int k)
{
return (j + k);
}

int sub(int j, int k)
{
return (j - k);
}
int mul(int j, int k)
{
return (j * k);
}

int div(int j, int k)
{
return (j / k);
}

int mod(int j, int k)
{
return (j % k);
}
