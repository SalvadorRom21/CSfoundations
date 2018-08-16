#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;


struct Array
{
    string name;
    double prob;
};



int main()
{
    Array Hand[10];
    Array Store[1];

    int cntr=0;
    bool con=true;

    Hand[0].name="Royal Flush";
    Hand[0].prob=0.000154;
    Hand[1].name="Striaght Flush";
    Hand[1].prob=0.00139;
    Hand[2].name="Four of a Kind";
    Hand[2].prob=0.0240;
    Hand[3].name="Full House";
    Hand[3].prob=0.1441;
    Hand[4].name="Flush";
    Hand[4].prob=0.1965;
    Hand[5].name="Striaght";
    Hand[5].prob=0.3925;
    Hand[6].name="Three of a Kind";
    Hand[6].prob=2.1128;
    Hand[7].name="Two Pair";
    Hand[7].prob=4.7539;
    Hand[8].name="One Pair";
    Hand[8].prob=42.2569;
    Hand[9].name="High Card";
    Hand[9].prob=50.1177;
//randomizes the array
    srand(time(0));
    for(int i=0; i<10;i++)
    {
    int index=rand()%10;
    Array Temp=Hand[i];
    Hand[i]=Hand[index];
    Hand[index]=Temp;
    }

// Prints to the screen the array of Different Hands
    cout<<left<<setw(20)<<"Hand"<<setw(10)<<"Probability"<<endl;
    cout<<"_________________________________________________"<<endl;
for(int i=0;i<10;i++)
        cout<<setw(20)<<Hand[i].name<<setw(10)<<Hand[i].prob<<endl;


     //Make bubble sort here.

    cout<<endl;
    cout<<left<<setw(20)<<"Hand"<<setw(10)<<"Probability"<<endl;
    cout<<"_________________________________________________"<<endl;


    for(int i=0;i<10;i++)
        cout<<setw(20)<<Hand[i].name<<setw(10)<<Hand[i].prob<<endl;

return 0;
}
