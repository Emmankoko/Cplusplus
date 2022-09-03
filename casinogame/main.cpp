#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int cash = 100;
void play(int amount)
{
    char c[3]={'J','Q','K'};
    cout<<"shuffling.....\n";
    srand(time(0));
    int i;
    for(i =0; i< 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = c[x];
        c[x] = c[y];
        c[y] = temp;
    }
    int playersguess;
    cout<<"what's the position of queen? - 1,2 or 3 ";
    cin>> playersguess;
    if(c[playersguess - 1] == 'Q')
    {
         cash += 3*amount;
        printf("congratulations!!!! you have won\n");
        printf("result = \"%c %c %c\"  Total cash= $%d\n", c[0],c[1],c[2],cash);

    }
    else
    {
        cash -= amount;
       printf("incorrect , you have lost\n");
       printf("result = \"%c %c %c\"  Total cash= $%d\n", c[0],c[1],c[2],cash);

    }

}

int main()
{
  int bet;
  char confirm;
  string name;
  cout<<"what's your name?"<<endl;
  cin>>name;
    cout<<"you're welcome " << name<<" to this interesting virtual casino\n";
    cout<<"The Queen, King, and Jack decker cards are shuffled randomly and your job is to find the queen"<<endl;
    cout<<"you get the chance to tripple your bet amount when you win"<<endl;
    cout<<"you are at risk of losing your bet amount when you bet guess wrongly"<<endl;
    cout<<"Are you readddyyyyyy! [y/n]:";
    cin>>confirm;
    if(confirm == 'y')
        cout<<"here we gooo!";
    if(confirm == 'n')
        cout<<"oops!, you should get ready";
    printf("your current balance is $%d\n",cash);

while(cash > 0){
    cout<<"what's your bet? $";
    cin>>bet;
    if(bet > cash){
        cout<<"insufficient funds, please top up your account";
        break;
    }

    play(bet);
}
return 0;
}
