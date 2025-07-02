#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int secretNo = rand() % 100 + 1;
    int guessNo;
    cout << "=============================================" << endl;
    cout << "      \033[1;32m Welcome to number guessing game! \033[0m" << endl;
    cout << "=============================================" << endl;
    cout << endl;
    cout << "I am thinking a number between \033[1;36m1 To 100.\033[0m Can you guess It ?" << endl;
    cout<<endl;
    do
    {
        cout << "\033[1;33mEnter your guessed number: \033[0m";
        cin >> guessNo;
        if (guessNo > secretNo)
        {
            cout << "Number guessed by you is \033[4;31m Too High!\033[0m Please try again" << endl;
        }
        else if (guessNo < secretNo)
        {
            cout << "Number guessed by you is \033[4;31m Too Low!\033[0m Please try again" << endl;
        }
        else
        {
            cout << "\033[1;32m Congratulations! You guessed the correct number \033[0m";
        }
    } while (guessNo != secretNo);
cout<<"You Won The Game!";
    return 0;
}
