#include <iostream>
#include <cstdlib>

using namespace std;

class student
{
    int id;
    char *name;
    char *edu_back;

public:
    student() : id(0), name(new char[30]), edu_back(new char[30]) {}
    ~student(){
        delete[] name;
        delete[] edu_back;
    }
    student( student& s)
    {
        id = s.id;
        name = s.name;
        edu_back = s.edu_back;
    }
    int Setid( int sid)
    {
        id = sid;
        return id;
    }
    char* SetName(string sname)
    {
        for(int i =0; i < 30; i++)
        {
            name[i] = sname[i];
        }
        return name;
    }
    char* Setedu_back( string sedu_back)
    {
        for(int i = 0; i < 30; i++)
        {
            edu_back[i] = sedu_back[i];
        }


        return edu_back;
    }

    void operator = ( student& s)
    {
        id = s.id;
        name = s.name;
        edu_back = s.edu_back;

    }

    friend ostream &operator << (ostream &os, student &s);
    friend istream &operator >> (istream &is, student &s);



};


    istream &operator>>(istream &is, student &s)
    {
        is >> s.id >> s.name >> s.edu_back;
        return is;
    }

    ostream &operator << (ostream &os, student &s)
    {
        os << s.Setid(s.id) <<" " << s.SetName(s.name) <<" " <<  s.Setedu_back(s.edu_back) << endl;
        return os;
    }

int main()
{
    student s1;
    cin>>s1;
    student s2(s1);
    int id1;
    string name1;
    cin>>id1>>name1; s2.Setid(id1); s2.SetName(name1);
    student s3;
    s3 = s1;
    cin>>id1; s3.Setid(id1);
    cout<<s1;
    cout<<s2;
    cout<<s3;
    return 0;
}
