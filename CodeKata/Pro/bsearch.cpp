#include<bits/stdc++.h>

int max(int a, int b) { 
 return (a > b)? a : b; 
}
int max(int a, int b, int c) { return max(max(a, b), c); }
int maxCrossSum(int a[], int l, int m, int h)
{
   int sum = 0;
   int left_sum = INT_MIN;
   for (int i = m; i >= l; i--)
   {
        sum = sum + a[i];
        if (sum > l_sum)
          l_sum = sum;
    }
    sum = 0;
    int r_sum = INT_MIN;
    for (int i = m+1; i <= h; i++)
    {
        sum = sum + arr[i];
        if (sum > r_sum)
          r_sum = sum;
    }
    return l_sum + r_sum;
}
int maxSubSum(int a[], int l, int h)
{
   if (l == h)
     return arr[l];
   int m = (l + h)/2;
   return max(maxSubSum(a, l, m),
              maxSubSum(a, m+1, h),
              maxCrossSum(a, l, m, h));
}

int main()
{
   int a[] = {2, 3, 4, 5, 7};
   int n = sizeof(a)/sizeof(a[0]);
   int max_sum = maxSubSum(arr, 0, n-1);
   printf("Max continuous sum is %d\n", max_sum);
   return 0;
}
