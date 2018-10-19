#include<iostream>
using namespace std;
void sort(int *arr,int n);
void heapify(int *arr ,int n,int index );
int main ()
{
  int arr[]={3,4,12,65,43,23,56,78,6,2};
  int n=10,i=0;
  cout<<"Array : ";
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  sort(arr,n);
   cout<<endl<<"Sorted Array : ";
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  system("pause");
}

void heapify(int *arr ,int n,int index ) 
{
  int largest=index;
  int leftchild=(2*index)+1;
  int rightchild=(2*index)+2;
  if(arr[leftchild] > arr[largest] && leftchild < n)
  {
    largest=leftchild;
  }
  if(arr[rightchild] > arr[largest] && rightchild < n)
  {
    largest=rightchild;
  }
  if(largest!=index)
  {
    int temp=arr[index];
    arr[index]=arr[largest];
    arr[largest]=temp; 
    heapify(arr,n,largest);
  }
  
}

void sort(int *arr,int n) 
{
  int i;
  for(i=(n/2)-1;i>=0;i--)
  {
    heapify(arr,n,i);
  }

  for(i=n-1 ; i>=0;i--)
  {
    int temp=arr[0];
    arr[0]=arr[i];
    arr[i]=temp;
    heapify(arr,i,0);
  }
}