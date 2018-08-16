#include <iostream>
using namespace std;

void comb(int n, int r, int *arr, int sz)
{
    for (int i = n; i >= r; i --)
        {
        // choose the first element
        arr[r - 1] = i;
        if (r > 1)
        { // if still needs to choose
            // recursive into smaller problem
            comb(i - 1, r - 1, arr, sz);
        } else
        {
            // print out one solution
            for (int i = 0; i < sz; i ++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{

    int N;
    int M;

    cout<<"Enter N"<<endl;
    cin>>N;

    int *arr = new int[M];
    for(M=1;M<=N;M++)
        comb(N, M, arr, M);


}
