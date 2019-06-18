#include<iostream>

using namespace std;

int main()
{   int a,i;
    int *Array=new int[a];
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>Array[i];
    }


    for(i=0;i<a;i++)
    {
        cout<<Array[i];
    }
    delete[]Array;
    return 0;

}

