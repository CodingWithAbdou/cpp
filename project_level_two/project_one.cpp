#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify usage of standard functions.



enum EstatusGame
{
    equal = 0,
    won = 1,
    loss = 2

};


enum Echoise
{
    Stone = 1,
    Paper = 2,
    Scissors = 3
};

struct Sinfo
{
    int numberRounds;
    int WonPlayerTime;
    int WonPcTime;
    int drawTime;
};


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}



EstatusGame checkChoiseOfUser(int choise , int computerChoise) {

    if (choise == computerChoise) {
        return EstatusGame::equal;
    }
    else if ((choise == 1 && computerChoise == 2) || (choise == 2 && computerChoise == 3) || choise == 3 && computerChoise == 1) {
        return EstatusGame::loss;
    }

    return EstatusGame::won;    
}

string getValue(int choise) {
    if (choise == Echoise::Stone) return "Stone";
    else if (choise == Echoise::Paper) return "Paper";
    return "Scissors";
}



void askUserHowManyGameWant(int &number) {
    do
    {
        cout << "How Much Game Want to Play choise Between 1 To 10 : " << endl;
        cin >> number;
    } while (number <=0 && number > 10);
}

string chnageStatus(EstatusGame number , Sinfo &data) {
    if (number == EstatusGame::equal) {
        data.drawTime++;
        return "[No Winner]";
    }
    else if (number == EstatusGame::loss) {
        data.WonPcTime++;
        return "[Player One Is Loos]";
    }
    data.WonPlayerTime++;
    return "[Player One Is Woon]";
}

void changeColorScreen(int status) {
    if (status == EstatusGame::equal) system("color e2");
    else if (status == EstatusGame::loss)  system("color c2");
    else if (status == EstatusGame::won)  system("color 20");
    else  system("color 07");
}

void handelGame(int choise , int computerChoise, int round , Sinfo &data) {
    cout << endl << endl << endl;

    cout << "____________________ Round  [" << round << "] ______________________________" << endl << endl << endl;

    cout << "**************************************************************" << endl ;

    cout << "Player One is Choise : " << getValue(choise) << endl;
    cout << "Computer is Choise : " << getValue(computerChoise) << endl;
    cout << "Round Winner : " <<  chnageStatus(checkChoiseOfUser(choise, computerChoise) , data) << endl;

    cout << "**************************************************************" << endl;

    changeColorScreen(checkChoiseOfUser(choise, computerChoise));
    
}

string getFinallWinner(Sinfo data) {
    if (data.WonPcTime < data.WonPlayerTime) return "Player One Winner";
    else if (data.WonPcTime > data.WonPlayerTime) return "Pc Winner";
    else return "No Winner";
}

void showResult(Sinfo data) {
    cout <<endl << endl<<  endl << "_______________________________________ GAME OVER __________________________________________" << endl << endl << endl;
    cout << endl << endl << endl << "_______________________________________ GAME RESULTS __________________________________________" << endl << endl << endl;
    cout << endl << endl << endl << "_______________________________________________________________________________" << endl << endl << endl;
    cout << "game rounds: " << data.numberRounds <<endl;
    cout << "Player One Won Time: " << data.WonPlayerTime << endl;
    cout << "Pc Won Time: " << data.WonPcTime << endl;
    cout << "Draw Time : " << data.drawTime << endl;
    cout << "Finall Winner: " << getFinallWinner(data) << endl;
    cout << endl << endl << endl << "_______________________________________________________________________________" << endl << endl << endl;

}

bool handleContinueGame() {
    char status;
    do {
        cout << "Do you want to continue playing? Press (Y)es or (N)o: ";
        cin >> status;
        status = toupper(status); // Convert to uppercase for easier comparison
    } while (status != 'Y' && status != 'N'); // Loop until valid input

    if (status == 'Y') {
        return true;
    }
    return false;
}

void startGame(int number) {


    int choise;

    Sinfo data;
    data.numberRounds = number;
    data.WonPcTime = 0;
    data.WonPlayerTime = 0;
    data.drawTime = 0;

    for (int i = 1; i <= number; i++)
    {
        cout << endl << endl << endl << endl;
        cout << "Round [" << i << "] Is Start :" << endl << endl << endl;

        do
        {
            cout << "Choise [1]Stone or [2]Paper or [3]Scissors : ";
            cin >> choise;

            cout << endl << endl << endl;
        } while (choise < 1 || choise > 3);


        handelGame(choise , RandomNumber(1, 3) , i , data);
    }

    showResult(data);
    
}


void initGame() {
    int numberOfRound = 0, choise = 0;

    askUserHowManyGameWant(numberOfRound);

    startGame(numberOfRound);
    if (handleContinueGame()) {
        initGame();
    }
    else {
        cout << "Goodbye! See you later :)" << endl;
    }
}

int main()
{//Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    initGame();
    return 0;  
}
