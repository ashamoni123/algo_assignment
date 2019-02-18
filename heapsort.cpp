#include <iostream>
using namespace std;

void MAXIMUM_HEAPIFY(int a[], int i, int n)
{
  int l,r,largest,loc;
  l=2*i;
  r=(2*i+1);
  if((l<=n)&&a[l]>a[i])
    largest=l;
  else
    largest=i;
  if((r<=n)&&(a[r]>a[largest]))
    largest=r;
  if(largest!=i)
    {
      loc=a[i];
      a[i]=a[largest];
      a[largest]=loc;
      MAXIMUM_HEAPIFY(a, largest,n);
    }
}
void BUILD_MAXIMUM_HEAP(int a[], int n)
{
  for(int j = n/2; j >= 1; j--)
    {
      MAXIMUM_HEAPIFY(a, j, n);
    }
}
void HEAPSORT(int a[], int n)
{

  BUILD_MAXIMUM_HEAP(a,n);
  int i, temp;
  for (i = n; i >= 2; i--)
    {
      temp = a[i];
      a[i] = a[1];
      a[1] = temp;
      MAXIMUM_HEAPIFY(a, 1, i - 1);
    }
}

int main()
{
  int n;
  cout<<"Enter the Array  size:"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter the elements in the array:"<<endl;
  for (int i = 1; i <= n; i++)
    {
      cin>>a[i];
    }
  HEAPSORT(a, n);
  cout<<"<----------SORTED FORM--------->"<<endl;
  for (int i = 1; i <= n; i++)
    {
      cout<<a[i]<<endl;
    }
}
