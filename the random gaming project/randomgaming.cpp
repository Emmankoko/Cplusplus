#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void initializer(){
     srand(static_cast<unsigned>(time(0)));
}
 int roller(){
     int rolling_number =rand() % 6 + 1;
     return rolling_number;
        }


void dicedisplay(int spots){




        switch(spots){
          case 1:

            std::cout << "|     |"<<endl;
            std::cout << "|  *  |"<<endl;
            std::cout << "|     |"<<endl;

            break;

          case 2:
            std::cout << "|*    |"<<endl;
            std::cout << "|     |"<<endl;
            std::cout << "|    *|"<<endl;
            break;
          case 3:
            std::cout << "|    *|"<<endl;
            std::cout << "|  *  |"<<endl;
            std::cout << "|*    |"<<endl;
            break;
          case 4:
            std::cout << "|*   *|"<<endl;
            std::cout << "|     |"<<endl;
            std::cout << "|*   *|"<<endl;
            break;
          case 5:
            std::cout << "|*   *|"<<endl;
            std::cout << "|  *  |"<<endl;
            std::cout << "|*   *|"<<endl;
            break;
          case 6:
            std::cout << "|* * *|"<<endl;
            std::cout << "|     |"<<endl;
            std::cout << "|* * *|"<<endl;
            break;
          default:
            cout<<" the dice value is illegal";
            break;


    }
}

int main()
{

   initializer();
    for(int i=0; i<3;i++){

         cout<<" dice is rolling..... "<<endl;




         cout<<"+-----+"<<endl;
         dicedisplay(roller());

         cout<<"+-----+"<<endl;
        }


    return 0;
}
