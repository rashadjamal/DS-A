#include<stdio.h>
int main() {
   int a[50], i,j,n,t;
   printf("Enter the No.of elements :\n");
   scanf("%d", &n);
   printf("Enter the elements:\n");
   for(i=0; i<n; i++){
      scanf ("%d", &a[i]);
   }
   for(i = 1; i <= n - 1; i++){
      for(j=i; j > 0 && a[j - 1] > a[j]; j--){
         t = a[j];
         a[j] = a[j - 1];
         a[j - 1] = t;
      }
   }
   printf ("After insertion sorting Elements are:\n");
   for (i=0; i<n; i++)
   printf("%d\t", a[i]);
   return 0;
}

