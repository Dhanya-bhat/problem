#include <stdio.h>

int frustrated(int n, int k)
{
if (n == 1)
return 1;
else

return (frustrated(n - 1, k) + k-1) % n + 1;
}


int main()
{
int n = 14;
int k = 2;
printf("The chosen place is %d", frustrated(n, k));
return 0;
}