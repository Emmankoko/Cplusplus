#include <iostream>

using namespace std;
class timer
{

public:
    int hour;
    int minute;
    int second;

    timer operator ++(int)
    {
        timer temp = *this;
        if(second == 59)
        {
            second = 0;
            if(minute == 59)
            {
                minute = 0;
                if(hour == 23)
                {
                    hour = 0;
                }
                else if(hour >= 0 && hour <23)
                    ++hour;
            }
            else if (minute >= 0 && minute < 59)
                ++minute;
        }
        else if (second >= 0 && second < 59)
            ++second;
        return temp;

    }
    timer operator --(int)
    {
        timer temp = *this;
        if(second == 0)
        {
            second = 59;
            if(minute == 0)
            {
                minute = 59;
                if(hour == 0)
                {
                    hour = 23;
                }
                else if(hour > 0 && hour <= 23)
                    hour--;
            }
            else if (minute > 0 && minute <= 59)
                minute--;
        }
        else if (second > 0 && second <= 59)
            second--;
        return temp;
    }


    bool operator >(const timer& a)
    {
        return (hour*3600 + minute*60 + second) > (a.hour*3600 + a.minute*60 + a.second);
    }

    int operator-(const timer& a)
    {
        return (hour*3600 + minute*60 + second) - (a.hour*3600 + a.minute*60 + a.second);
    }

    friend ostream& operator <<( ostream& os, const timer& a);
    friend istream& operator >>( istream& is, timer& a);
    friend timer operator+(const timer& a);
};

ostream& operator <<(ostream& os, const timer& a)
{
    os << a.hour << ":" << a.minute <<":" << a.second ;
    return os;
}
istream& operator >>( istream& is, timer& a)
{
    is >> a.hour >> a.minute >> a.second;
    return is;
}

timer operator+(const timer& a, int span)
{
    timer temp;
    temp.hour = a.hour + span/3600;
    temp.minute = a.minute + (span - 3600*(span/3600))/60;
    temp.second = a.second + span - 60*((span - 3600*(span/3600))/60);
    return temp;

}


int main()
{

    timer t1, t2, t3, t4, t5, t6;
    int span;
    cin >> t1;
    t3 = t1++;
    cout<<t1 <<endl;
    cout<<t3 <<endl;
    cin >> t2;
    t4 = t2--;
    cout<< t2 << endl;
    cout<< t4 << endl;
     if(t1 > t2)
     {
         cout<< t1 - t2<<endl;
     }
     else
        cout << t2 - t1<<endl;

     cin >>span;
     t5 = t1 + span;
     cout<< t5 << endl;


    return 0;
}
