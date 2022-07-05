#include <iostream>
#include <cmath>

using namespace std;
 int gcd(int num1, int num2){
         int minimum= (num1<num2)? num1 : num2;
    int largestfactor=1;
    for(int i=2; i<=minimum; i++)
        if(num1%i==0 && num2 %i==0)
            largestfactor=i;
    return largestfactor;
    }
    int lcm(int num1, int num2){


        int lowestmultiple;
        int i=2;
        i++;
        lowestmultiple=num1*i;
        while(num1 *i== num2 *i);

    return lowestmultiple;

    }

        bool is_prime(int n){
            bool result =true;
            for(int trialfactor=2; result && trialfactor<n ; trialfactor++ )
                result=(n% trialfactor!=0);

            return result;
        }
        void help_screen(){
            std::cout << "Add: Adds two numbers\n";
std::cout << " Example: a 2.5 8.0\n";
std::cout << "Subtract: Subtracts two numbers\n";
std::cout << " Example: s 10.5 8.0\n";
std::cout << "Print: Displays the result of the latest operation\n";
std::cout << " Example: p\n";
std::cout << "Help: Displays this help screen\n";
std::cout << " Example: h\n";
std::cout << "Quit: Exits the program\n";
std::cout << " Example: q\n";

        }
        char menu(){
            std::cout << "=== A)dd S)ubtract P)rint H)elp Q)uit ===\n";
            char ch;
            cin>> ch;
            return ch;

        }



int main()
{
    int hcf=gcd(45,75);
    int lcmm=lcm(16,24);
    cout<< "the largest factor is "<<hcf<<endl;
    cout<< "the least common multiple is "<< lcmm<<endl;
int max_value;
cout<<" display primes up to? "<< endl;
cin>> max_value;
for(int value=2; value<= max_value; value++)
    if(is_prime(value))
    cout<< value<<endl;


    double result=0.0, num1,num2;
    bool done=false;
    do{
        switch(menu()){
    case 'A' || 'a':
        cin>> num1>>num2;
        result=num1+num2;
        cout<<result;
        break;

    case 'S':
    case 's':
        cin>> num1>>num2;
        result=num1-num2;
        cout<<result;

        break;

    case 'P':
    case 'p':
        cout<<result;
        break;

    case 'H':
    case 'h':
        help_screen();
        break;

    case 'Q':
    case 'q':
        done=true;
        break;

    }

    }

    while(!done);

    return 0;
}
