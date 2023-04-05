//https://chidokun.github.io/2015/03/interchange-sort/#:~:text=Thu%E1%BA%ADt%20to%C3%A1n%20s%E1%BA%AFp%20x%E1%BA%BFp%3A%20Interchange%20Sort%20%28%C4%91%E1%BB%95i%20ch%E1%BB%97,x%E1%BA%BFp%20d%C3%A3y%20t%C4%83ng%20d%E1%BA%A7n.%20...%203%20%C4%90%C3%A1nh%20gi%C3%A1
void InterchangeSort(int *a, int n)
{
   for (int i = 0; i < n-1; i++)
      for (int j = i+1; j < n; j++)
         if (a[i] > a[j])
         {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
}
