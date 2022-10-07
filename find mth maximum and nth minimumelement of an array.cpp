#include <stdio.h>
 
int min(int a,int b)
{
  int min = a;
  if(min > b)
    min = b;
  return min;
}
 
int max(int a,int b)
{
  int max = a;
  if(max < b)
    max = b;
  return max;
}
 
int getMin(int arr[], int n)
{
  int res = arr[0];
  for (int i = 1; i < n; i++)
    res = min(res, arr[i]);
  return res;
}
 

int getMax(int arr[], int n)
{
  int res = arr[0];
  for (int i = 1; i < n; i++)
    res = max(res, arr[i]);
  return res;
}
 

int findSum(int arr[], int n)
{
  int min = getMin(arr, n);
  int max = getMax(arr, n);
 
  return min + max;
}
 

int findProduct(int arr[], int n)
{
  int min = getMin(arr, n);
  int max = getMax(arr, n);
 
  return min * max;
}
 

int main()
{
  int arr[] = { 12, 1234, 45, 67, 1 };
  int n = sizeof(arr) / sizeof(arr[0]);
 
 
  printf("Sum = %d\n",findSum(arr, n));
 
 
  printf("Product = %d\n",findProduct(arr, n));
 
  return 0;
}
