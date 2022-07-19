#include <iostream>

using namespace std;

bool markov(double m[][3])
{
    for(int i=0; i<3; i++)
    {
        double sum = 0;
        for(int j=0; j<3; j++)
        {
            sum= sum+ m[i][j];
        }
        if(sum != 1)
            return false;
    }
    return true;
}
int main()
{
    double m[3][3] = {{0, 0, 1},
                       {0.5, 0, 0.5},
                       {1, 0,0}};

    if(markov(m))
        cout<<"yes, this is a markovian algorithm";
    else
        cout<<"no, you should probably find out whatever it is";
    return 0;
}
