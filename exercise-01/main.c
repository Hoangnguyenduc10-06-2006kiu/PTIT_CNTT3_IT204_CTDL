#include <stdio.h>


int main(void)
{
    int n;
    printf("moi ban nhap so n:");
    scanf("%d",&n);
    for (int i =0; i <n ;i++)
    {
        printf("Hello\n");
    }
    return 0;
}

// độ phức tạp của bài toán là O(n) vì có 1 vòng for nó lặp lại n có độ phức tạp là O(n)