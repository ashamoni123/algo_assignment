#include<iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void InsertionSort(int arr[], int length) {
      int i, j, tmp;
      for (i = 1; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                  tmp = arr[j];
                  arr[j] = arr[j - 1];
                  arr[j - 1] = tmp;
                  j--;
            }
      }
}

int DisplayArray( int arr[], int length ) {
    printf("{");
    for( int i=0; i<length; i++ )
        printf("%d, ", arr[i] );
    printf("}\n");
}

int main( int argc, char* argv[] )
{
    int array[10] = { 5,7,6,10,9,2,4,8,1,0 };
    size_t length = sizeof(array)/sizeof(int);
    DisplayArray( array, length );
    InsertionSort( array, length );
    DisplayArray( array, length );
}
