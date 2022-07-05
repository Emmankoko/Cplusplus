#include <iostream>
#include <ctime>
#include <cmath>
#include <ctype.h>
#include <cstdlib>

using namespace std;

int main()
{
    for(char lower='a'; lower<='z'; lower++ ){
        char upper= static_cast<char>(toupper(lower));
        cout<< lower<< "=>"<< upper<<endl;
    }
string name="Emmanuelnyarko564748843";
for(int i=0; i<name.length(); i++){
    if (isalpha(name[i])){
        cout<< name[i]<<endl;
    }
}
srand(static_cast<unsigned>(time(0)));
for(int i=0; i<10; i++){
    int r=rand()%100;
    cout<< r<<endl;


}

srand(0);
cout<<"first random number is "<< rand()%10<<endl;
srand(static_cast<unsigned>(time(0)));
cout<< "second random number is "<< rand()%10<<endl;
srand(1);
cout<< "again the first number is "<<rand()%10<<endl;
 cout<< RAND_MAX<<endl;




    clock_t start_time=clock(), end_time;

    for(int value=2; value<=50; value++){
            bool is_prime=true;
        for( int refer=2; is_prime&&refer< value; refer++)
            is_prime=(value% refer!=0);
    if(is_prime)

                 cout<< value<< endl;


    }
    end_time=clock();
    cout<<"elapsed time "<<static_cast<double>(end_time-start_time)/CLOCKS_PER_SEC<< " seconds ";

 cout<< toupper('7');
 double a = 5, b = 3;
std::cout << exp( b) << '\n';






    return 0;
}
