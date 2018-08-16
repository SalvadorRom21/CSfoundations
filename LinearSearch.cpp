#include <iostream>

using namespace std;

int main()
{
    int searchNum;                //used to store number to search for
    int index;
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

 for(int i=0;i<10;i++)
    if (list[i]==searchNum)
        index=i;

 cout<<"Number is located in array with index: "<< index<<endl;

}
