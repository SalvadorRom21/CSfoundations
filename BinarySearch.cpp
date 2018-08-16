#include <cstdlib>
#include <iostream>
using namespace std;

int binary_search(int array[],int first,int last, int value);

int main() {

int searchNum;                  //used to store number to search for

int list[10];

 for (int k=0; k<11; k++)       //set numbers to array
 {
     list[k]= 1+k;

 }
 cout<<"List contains:"<<endl;  // displays the current list
 for (int k=0; k<10; k++)
 {
     cout<<list[k]<<endl;
 }

 cout<<"Enter the number you wish to search for"<<endl; //enter number wish to search for
 cin>>searchNum;

 cout<< "the number can be found in array with index: "<< binary_search(list,1,10,searchNum)<<endl;

 return 0;
}
int binary_search(int array[],int first,int last, int search_key)
{
 int index;

 if (first > last)
 index = -1;

 else
 {
 int mid = (first + last)/2; //middle equals (last + first) / 2

 if (search_key == array[mid])
 index = mid;
 else

 if (search_key < array[mid])
 index = binary_search(array,first, mid-1, search_key);//if number is smaller
 else
 index = binary_search(array, mid+1, last, search_key);//if number is bigger

 }
 return index;
 }
