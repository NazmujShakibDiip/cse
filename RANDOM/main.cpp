#include <iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main()
{
    srand(89345);
    ofstream Fi;
Fi.open("IF.txt");
clock_t startTime=clock();
    for(int i=0;i<1000000;i++)
    {
        Fi<<rand()<<endl;
    }
    clock_t endTime=clock();
    double timeLapse=double(endTime-startTime)/CLOCKS_PER_SEC;
    cout<<timeLapse<<endl;
Fi.close();

    return 0;
}
