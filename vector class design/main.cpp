#include <iostream>

using namespace std;

class wgVector
{
    int x;
    int y;
    int z;
public:

    wgVector operator +(const wgVector& s)
    {
        wgVector temp;
        temp.x = x + s.x;
        temp.y = y + s.y;
        temp.z = z + s.z;
        return temp;
    }
    wgVector operator -(const wgVector& s)
    {
        wgVector temp;
        temp.x = x - s.x;
        temp.y = y - s.y;
        temp.z = z - s.z;
        return temp;
    }
    friend ostream &operator << (ostream &os, wgVector& a);
    friend istream &operator >> (istream &is, wgVector& a);
    friend wgVector operator* (wgVector& s);
};
    wgVector operator* ( wgVector &s, int d)
    {
        wgVector temp;
        temp.x = d * s.x;
        temp.y = d * s.y;
        temp.z = d * s.z;
        return temp;
    }
    istream &operator>>(istream &is, wgVector &a)
    {
        is>>a.x>>a.y>>a.z;
        return is;
    }
    ostream &operator << (ostream &os, wgVector &a)
    {
        os<<"("<<a.x<<","<<a.y<<","<<a.z<<")"<<endl;
        return os;
    }

int main()
{
    wgVector v1,v2,v3,v4,v5;

    int d;

    cin>>v1;//input a vector

    cin>>v2;//input a vector

    cin>>d;//input an integer

    v3=v1+v2;//two vector addition

    v4=v2*d;//a vector times an integer get another vector

    v5=v1-v2;//two vector substraction

    cout<<v3<<endl;

    cout<<v4<<endl;

    cout<<v5<<endl;

    return 0;
}
